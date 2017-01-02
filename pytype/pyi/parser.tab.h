/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_PYTYPE_PARSER_TAB_H_INCLUDED
# define YY_PYTYPE_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int pytypedebug;
#endif
/* "%code requires" blocks.  */
#line 19 "parser.y" /* yacc.c:1909  */

#include <Python.h>
namespace pytype {
  class Context;
}

#line 51 "parser.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    END = 0,
    NAME = 258,
    NUMBER = 259,
    LEXERROR = 260,
    CLASS = 261,
    DEF = 262,
    ELSE = 263,
    ELIF = 264,
    IF = 265,
    OR = 266,
    PASS = 267,
    IMPORT = 268,
    FROM = 269,
    AS = 270,
    RAISE = 271,
    PYTHONCODE = 272,
    NOTHING = 273,
    RAISES = 274,
    NAMEDTUPLE = 275,
    TYPEVAR = 276,
    ARROW = 277,
    COLONEQUALS = 278,
    ELLIPSIS = 279,
    EQ = 280,
    NE = 281,
    LE = 282,
    GE = 283,
    INDENT = 284,
    DEDENT = 285,
    TRIPLEQUOTED = 286,
    TYPECOMMENT = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "parser.y" /* yacc.c:1909  */

  PyObject* obj;
  const char* str;

#line 102 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int pytypeparse (void* scanner, pytype::Context* ctx);

#endif /* !YY_PYTYPE_PARSER_TAB_H_INCLUDED  */
