"""Functions for generating, reading and parsing pyc."""

import copy
import os
import re
import six
import subprocess
import tempfile

from pytype import utils
from pytype.pyc import compile_bytecode
from pytype.pyc import loadmarshal
from pytype.pyc import magic


COMPILE_SCRIPT = "pyc/compile_bytecode.py"
COMPILE_ERROR_RE = re.compile(r"^(.*) \((.*), line (\d+)\)$")


class CompileError(Exception):

  def __init__(self, msg):
    super(CompileError, self).__init__(msg)
    match = COMPILE_ERROR_RE.match(msg)
    if match:
      self.error = match.group(1)
      self.filename = match.group(2)
      self.lineno = int(match.group(3))
    else:
      self.error = msg
      self.filename = None
      self.lineno = 1


def compile_src_string_to_pyc_string(src, filename, python_version, python_exe,
                                     mode="exec"):
  """Compile Python source code to pyc data.

  This may use py_compile if the src is for the same version as we're running,
  or else it spawns an external process to produce a .pyc file. The generated
  bytecode (.pyc file) is read and both it and any temporary files are deleted.

  Args:
    src: Python sourcecode
    filename: Name of the source file. For error messages.
    python_version: Python version, (major, minor). E.g. (2, 7). Will be used
      to determine the Python executable to call.
    python_exe: Path to a Python interpreter, or "HOST", or None. If this is
      None, the system "pythonX.X" interpreter will be used.
    mode: Same as __builtin__.compile: "exec" if source consists of a
      sequence of statements, "eval" if it consists of a single expression,
      or "single" if it consists of a single interactive statement.

  Returns:
    The compiled pyc file as a binary string.
  Raises:
    CompileError: If we find a syntax error in the file.
    IOError: If our compile script failed.
  """
  fi = tempfile.NamedTemporaryFile(mode="w", suffix=".py", delete=False)

  try:
    fi.write(src)
    fi.close()
    if python_exe == "HOST":
      # We were asked to use the version of Python we're running to compile.
      output = six.StringIO()
      compile_bytecode.compile_to_pyc(fi.name, filename or fi.name,
                                      output, mode)
      bytecode = output.getvalue()
    else:
      # In order to be able to compile pyc files for both Python 2 and Python 3,
      # we spawn an external process.
      if python_exe:
        # Allow python_exe to contain parameters (E.g. "-T")
        exe = python_exe.split() + ["-S"]
      else:
        exe = ["python" + ".".join(map(str, python_version))]
      cmd = exe + ["-", fi.name, filename or fi.name, mode]

      src = utils.load_pytype_file(COMPILE_SCRIPT)

      p = subprocess.Popen(cmd, stdin=subprocess.PIPE, stdout=subprocess.PIPE)
      bytecode, _ = p.communicate(src)
      assert p.poll() == 0, "Child process failed"
  finally:
    os.unlink(fi.name)
  if bytecode[0] == chr(0):  # compile OK
    return bytecode[1:]
  elif bytecode[0] == chr(1):  # compile error
    raise CompileError(bytecode[1:])
  else:
    raise IOError("_compile.py produced invalid result")


def parse_pyc_stream(fi):
  """Parse pyc data from a file.

  Args:
    fi: A file-like object.

  Returns:
    An instance of loadmarshal.CodeType.

  Raises:
    IOError: If we can't read the file or the file is malformed.
  """
  magic_word = fi.read(2)
  python_version = magic.magic_word_to_version(magic_word)
  crlf = fi.read(2)  # cr, lf
  if crlf != "\r\n":
    raise IOError("Malformed pyc file")
  fi.read(4)  # timestamp
  if python_version >= (3, 3):
    # This field was introduced in Python 3.3
    fi.read(4)  # raw size
  return loadmarshal.loads(fi.read(), python_version)


def parse_pyc_string(data):
  """Parse pyc data from a string.

  Args:
    data: pyc data

  Returns:
    An instance of loadmarshal.CodeType.
  """
  return parse_pyc_stream(six.StringIO(data))


class AdjustFilename(object):
  """Visitor for changing co_filename in a code object."""

  def __init__(self, filename):
    self.filename = filename

  def visit_code(self, code):
    code.co_filename = self.filename
    return code


def compile_src(src, python_version, python_exe, filename=None, mode="exec"):
  """Compile a string to pyc, and then load and parse the pyc.

  Args:
    src: Python source code.
    python_version: Python version, (major, minor).
    python_exe: Path to Python interpreter, or None.
    filename: The filename the sourcecode is from.
    mode: "exec", "eval" or "single".

  Returns:
    An instance of loadmarshal.CodeType.
  """
  pyc_data = compile_src_string_to_pyc_string(
      src, filename, python_version, python_exe, mode)
  code = parse_pyc_string(pyc_data)
  assert code.python_version == python_version
  visit(code, AdjustFilename(filename))
  return code


def compile_file(filename, python_version):
  """Compile a file to pyc, return the parsed pyc.

  Args:
    filename: Python (.py) file to compile.
    python_version: The Python version to use for compiling this file.

  Returns:
    An instance of loadmarshal.CodeType.
  """
  with open(filename, "rb") as fi:
    return compile_src(fi.read(), python_version, filename)


def visit(c, visitor):
  """Recursively process constants in a pyc using a visitor."""
  if hasattr(c, "co_consts"):
    # This is a CodeType object (because it has co_consts). Visit co_consts,
    # and then the CodeType object itself.
    new_consts = []
    changed = False
    for const in c.co_consts:
      new_const = visit(const, visitor)
      changed |= new_const is not const
      new_consts.append(new_const)
    if changed:
      c = copy.copy(c)
      c.co_consts = new_consts
    return visitor.visit_code(c)
  else:
    return c
