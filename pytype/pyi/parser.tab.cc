/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         pytypeparse
#define yylex           pytypelex
#define yyerror         pytypeerror
#define yydebug         pytypedebug
#define yynerrs         pytypenerrs


/* Copy the first part of user declarations.  */
#line 30 "parser.y" /* yacc.c:339  */

#include "lexer.h"
#include "parser.h"

namespace pytype {
// Note that the pytype namespace is not closed until the trailing block of
// code after the parser skeleton is emitted.  Thus the entire parser (except
// for a few #defines) is in the pytype namespace.

namespace {
#if PY_MAJOR_VERSION >= 3
PyObject* DOT_STRING = PyUnicode_FromString(".");
#else
PyObject* DOT_STRING = PyString_FromString(".");
#endif

int pytypeerror(YYLTYPE* llocp, void* scanner, pytype::Context* ctx,
    const char *p);

/* Helper functions for building up lists. */
PyObject* StartList(PyObject* item);
PyObject* AppendList(PyObject* list, PyObject* item);
PyObject* ExtendList(PyObject* dst, PyObject* src);

}  // end namespace


// Check that a python value is not NULL.  The must be a macro because it
// calls YYERROR (which is a goto).
#define CHECK(x, loc) do { if (x == NULL) {\
    ctx->SetErrorLocation(&loc); \
    YYERROR; \
  }} while(0)


#line 108 "parser.tab.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
#line 19 "parser.y" /* yacc.c:355  */

#include <Python.h>
namespace pytype {
  class Context;
}

#line 145 "parser.tab.cc" /* yacc.c:355  */

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
#line 66 "parser.y" /* yacc.c:355  */

  PyObject* obj;
  const char* str;

#line 196 "parser.tab.cc" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 226 "parser.tab.cc" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  140
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  253

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,    35,    40,     2,    36,     2,    45,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    33,     2,
      38,    37,    39,    44,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   135,   135,   136,   140,   144,   145,   146,   147,   148,
     149,   150,   155,   159,   166,   177,   178,   179,   183,   184,
     188,   189,   193,   194,   195,   199,   200,   204,   205,   206,
     211,   216,   219,   224,   228,   247,   250,   255,   259,   271,
     275,   279,   283,   286,   293,   294,   295,   301,   302,   303,
     304,   305,   306,   310,   314,   318,   322,   326,   333,   337,
     344,   345,   348,   349,   353,   354,   355,   359,   360,   364,
     365,   372,   379,   386,   390,   397,   404,   419,   430,   431,
     435,   440,   441,   445,   446,   450,   451,   452,   453,   457,
     458,   462,   463,   464,   465,   469,   476,   486,   487,   491,
     492,   496,   497,   501,   502,   506,   507,   508,   509,   513,
     514,   518,   519,   520,   524,   525,   529,   530,   534,   538,
     542,   552,   556,   557,   558,   559,   563,   564,   568,   569,
     573,   577,   578,   582,   583,   587,   588,   593,   594,   607,
     608
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "NAME", "NUMBER", "LEXERROR",
  "CLASS", "DEF", "ELSE", "ELIF", "IF", "OR", "PASS", "IMPORT", "FROM",
  "AS", "RAISE", "PYTHONCODE", "NOTHING", "RAISES", "NAMEDTUPLE",
  "TYPEVAR", "ARROW", "COLONEQUALS", "ELLIPSIS", "EQ", "NE", "LE", "GE",
  "INDENT", "DEDENT", "TRIPLEQUOTED", "TYPECOMMENT", "':'", "'('", "')'",
  "','", "'='", "'<'", "'>'", "'*'", "'@'", "'['", "']'", "'?'", "'.'",
  "$accept", "start", "unit", "alldefs", "classdef", "class_name",
  "parents", "parent_list", "parent", "maybe_class_funcs", "class_funcs",
  "funcdefs", "if_stmt", "if_and_elifs", "class_if_stmt",
  "class_if_and_elifs", "if_cond", "elif_cond", "else_cond", "condition",
  "version_tuple", "condition_op", "constantdef", "importdef",
  "import_items", "import_item", "from_list", "from_items", "from_item",
  "alias_or_constant", "typevardef", "funcdef", "decorators", "decorator",
  "params", "param_list", "param", "param_type", "param_default",
  "param_star_name", "return", "raises", "exceptions", "maybe_body",
  "empty_body", "body", "body_stmt", "type_parameters", "type_parameter",
  "type", "named_tuple_fields", "named_tuple_field_list",
  "named_tuple_field", "maybe_comma", "maybe_type_list", "type_list",
  "dotted_name", "pass_or_ellipsis", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    58,    40,    41,    44,    61,    60,    62,
      42,    64,    91,    93,    63,    46
};
# endif

#define YYPACT_NINF -155

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-155)))

#define YYTABLE_NINF -27

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -14,  -155,    19,    95,   182,   100,  -155,  -155,   -19,   129,
     145,   145,   145,  -155,  -155,   159,   123,  -155,  -155,  -155,
    -155,  -155,    33,  -155,    50,     8,  -155,   152,  -155,  -155,
     138,   157,  -155,    48,    -9,  -155,   145,   164,   178,   183,
     210,   145,  -155,  -155,   180,    50,    50,  -155,    71,   161,
    -155,   181,   184,   206,    13,   185,  -155,  -155,  -155,  -155,
    -155,  -155,   217,    12,   145,   218,    69,  -155,   193,   194,
    -155,    79,   179,   222,   101,   206,   186,   190,    50,   203,
      17,    64,    50,   191,  -155,   169,  -155,   206,     1,  -155,
    -155,   226,  -155,  -155,  -155,   216,  -155,  -155,    24,  -155,
    -155,   196,  -155,  -155,  -155,   111,  -155,    64,   197,  -155,
    -155,    50,  -155,  -155,  -155,    75,  -155,   206,   201,  -155,
      46,   200,   202,  -155,   201,   206,    50,  -155,    63,  -155,
    -155,   160,  -155,  -155,   204,   233,   172,    24,   125,   139,
    -155,   207,   195,   206,    17,  -155,    50,   208,  -155,   236,
    -155,    64,  -155,   206,  -155,   163,   211,   113,  -155,    56,
    -155,  -155,     3,  -155,  -155,  -155,   221,   147,   209,  -155,
     206,   155,  -155,  -155,  -155,   219,  -155,   165,  -155,   159,
     213,  -155,  -155,   174,  -155,  -155,    50,   228,   245,  -155,
     214,  -155,  -155,  -155,  -155,  -155,  -155,   146,   220,   223,
     225,  -155,   247,   206,    50,   224,   227,   230,   212,   229,
     231,  -155,   232,   234,   206,   149,  -155,  -155,    50,  -155,
    -155,  -155,  -155,   127,  -155,    50,   103,  -155,    74,   141,
     144,  -155,   206,   238,   249,   235,   130,  -155,   239,  -155,
     237,  -155,  -155,    50,   240,  -155,  -155,  -155,  -155,  -155,
     206,   241,  -155
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      12,    12,     0,     0,    79,     0,     1,     2,     0,     0,
       0,     0,     0,     9,    11,    32,     0,     5,     7,     8,
      10,     6,     0,     3,     0,     0,    14,    17,   137,    39,
       0,    58,    61,    62,     0,    41,     0,     0,     0,     0,
       0,     0,    78,   125,     0,     0,   134,   124,    56,   118,
      53,     0,    54,    74,     0,     0,    51,    52,    49,    50,
      47,    48,     0,     0,     0,     0,     0,    40,     0,     0,
      12,     0,    80,     0,     0,   136,     0,   133,     0,     0,
       0,    82,     0,   137,    16,     0,    19,    20,     0,   138,
      42,     0,    43,    60,    63,    69,    70,    71,     0,    72,
      59,    64,    68,    12,    12,    79,    77,    82,     0,   122,
     120,     0,   123,    57,   117,     0,   115,   116,    90,    88,
      86,     0,    81,    84,    90,    55,     0,    15,     0,   139,
     140,    30,    13,    22,     0,     0,     0,     0,    79,    79,
      33,     0,     0,   135,     0,   119,     0,    94,    95,     0,
      75,     0,    87,    21,    18,    30,     0,    79,    25,     0,
      73,    65,     0,    67,    34,    31,    98,     0,     0,   114,
      89,     0,    85,    96,    83,     0,    23,     0,    29,    36,
       0,    27,    28,     0,    44,    66,     0,   100,     0,   127,
     132,   129,   121,    91,    92,    93,    24,     0,     0,     0,
       0,    45,     0,    97,     0,   108,     0,   131,     0,     0,
       0,    30,     0,    99,   102,     0,    76,   104,     0,   128,
     126,    30,    30,    79,    46,     0,     0,   105,   132,    79,
      79,    37,   101,     0,     0,     0,     0,   110,     0,   131,
       0,    38,    35,     0,   112,   107,   103,   109,   106,   130,
     111,     0,   113
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,   258,    -5,  -155,  -155,  -155,  -155,   134,  -155,
     116,   -22,  -155,  -155,  -155,  -155,  -154,    87,    89,   242,
    -155,  -155,  -152,  -155,  -155,   215,  -155,   175,   -36,  -155,
    -155,  -150,  -155,  -155,   168,  -155,   126,   156,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,    45,  -155,   140,   -24,
    -155,  -155,    76,    54,  -155,  -155,    -2,   -86
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    13,    27,    55,    85,    86,   132,
     156,   157,    14,    15,   178,   179,    16,    37,    38,    29,
      92,    63,    17,    18,    31,    32,   100,   101,   102,    19,
      20,    21,    22,    42,   121,   122,   123,   147,   172,   124,
     187,   205,   213,   216,   217,   236,   237,   115,   116,    87,
     168,   190,   191,   208,    76,    77,    49,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    53,   133,   180,    66,   181,    95,   182,    30,    33,
      34,    28,    50,   129,    24,    90,    83,     1,    25,     6,
      28,    74,    75,    96,    97,   130,    43,    95,    44,    51,
     131,    43,    52,    44,    30,    43,    62,    44,   185,    72,
      40,   114,    45,    99,    96,    97,    91,    45,    84,   148,
      46,    45,    47,    28,   112,    46,   117,    47,   125,    46,
     183,    47,    33,    65,    99,   105,    83,   118,    43,   180,
      44,   181,    95,   182,    41,   180,   180,   181,   181,   182,
     182,    43,    78,    44,    45,    78,   149,   143,   119,    96,
      97,   184,    46,    62,    47,     7,   106,    45,   138,   139,
      23,   163,   153,    98,   120,    46,   233,    47,    79,    99,
     239,   144,    78,   107,     8,   129,   177,     9,   145,   234,
     117,    10,   170,    10,    11,    12,   163,   130,     8,   227,
     177,     9,    26,   233,   235,    10,   109,    10,    11,    12,
     238,   140,     8,   -26,   177,     9,   234,   177,    28,    10,
      50,    10,    11,    12,    10,   164,    39,   231,   193,   194,
     246,   129,   203,    56,    57,    58,    59,    35,    36,   165,
      52,   241,   129,   130,   242,   129,    60,    61,   226,   195,
     214,   188,    -4,    62,   130,     8,    54,   130,     9,   223,
     189,   155,    10,    64,   228,    11,    12,    68,    24,   229,
     230,   232,   197,    80,   127,   128,    62,   161,   162,   201,
     202,    69,    70,    71,    73,    81,    82,    78,    88,   250,
      89,    94,   103,   104,    62,   108,   111,   113,   126,   110,
     134,   135,   137,   142,   146,   150,   160,   167,   151,   173,
     159,   176,   166,   186,   192,   171,   200,   204,   206,   196,
     207,   212,   244,   209,   211,   220,   210,   215,   221,     5,
     222,   243,   154,   218,   188,   245,   198,   224,   199,   248,
     225,   175,   249,   136,   251,   141,   252,   174,    67,    93,
     152,   247,   240,   219,   169
};

static const yytype_uint8 yycheck[] =
{
      24,    25,    88,   157,    13,   157,     3,   157,    10,    11,
      12,     3,     4,    12,    33,     3,     3,    31,    37,     0,
       3,    45,    46,    20,    21,    24,    18,     3,    20,    21,
      29,    18,    24,    20,    36,    18,    45,    20,    35,    41,
       7,    24,    34,    40,    20,    21,    34,    34,    35,     3,
      42,    34,    44,     3,    78,    42,    80,    44,    82,    42,
       4,    44,    64,    15,    40,    70,     3,     3,    18,   223,
      20,   223,     3,   223,    41,   229,   230,   229,   230,   229,
     230,    18,    11,    20,    34,    11,    40,   111,    24,    20,
      21,    35,    42,    45,    44,     0,    17,    34,   103,   104,
       0,   137,   126,    34,    40,    42,     3,    44,    37,    40,
      36,    36,    11,    34,     3,    12,     3,     6,    43,    16,
     144,    10,   146,    10,    13,    14,   162,    24,     3,   215,
       3,     6,     3,     3,    31,    10,    35,    10,    13,    14,
     226,    30,     3,    30,     3,     6,    16,     3,     3,    10,
       4,    10,    13,    14,    10,    30,    33,    30,     3,     4,
      30,    12,   186,    25,    26,    27,    28,     8,     9,    30,
      24,    30,    12,    24,    30,    12,    38,    39,    29,    24,
     204,    34,     0,    45,    24,     3,    34,    24,     6,   211,
      43,    31,    10,    36,   218,    13,    14,    33,    33,   221,
     222,   225,    37,    42,    35,    36,    45,    35,    36,    35,
      36,    33,    29,     3,    34,    34,    32,    11,    33,   243,
       3,     3,    29,    29,    45,     3,    36,    24,    37,    43,
       4,    15,    36,    36,    33,    35,     3,    42,    36,     3,
      36,    30,    35,    22,    35,    37,    33,    19,     3,    30,
      36,     4,     3,    33,    29,    43,    33,    33,    29,     1,
      29,    23,   128,    36,    34,    30,   179,    35,   179,    30,
      36,   155,    35,    98,    34,   107,    35,   151,    36,    64,
     124,   236,   228,   207,   144
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    47,    48,    49,    48,     0,     0,     3,     6,
      10,    13,    14,    50,    58,    59,    62,    68,    69,    75,
      76,    77,    78,     0,    33,    37,     3,    51,     3,    65,
     102,    70,    71,   102,   102,     8,     9,    63,    64,    33,
       7,    41,    79,    18,    20,    34,    42,    44,    95,   102,
       4,    21,    24,    95,    34,    52,    25,    26,    27,    28,
      38,    39,    45,    67,    36,    15,    13,    65,    33,    33,
      29,     3,   102,    34,    95,    95,   100,   101,    11,    37,
      42,    34,    32,     3,    35,    53,    54,    95,    33,     3,
       3,    34,    66,    71,     3,     3,    20,    21,    34,    40,
      72,    73,    74,    29,    29,    49,    17,    34,     3,    35,
      43,    36,    95,    24,    24,    93,    94,    95,     3,    24,
      40,    80,    81,    82,    85,    95,    37,    35,    36,    12,
      24,    29,    55,   103,     4,    15,    73,    36,    49,    49,
      30,    80,    36,    95,    36,    43,    33,    83,     3,    40,
      35,    36,    83,    95,    54,    31,    56,    57,   103,    36,
       3,    35,    36,    74,    30,    30,    35,    42,    96,    94,
      95,    37,    84,     3,    82,    56,    30,     3,    60,    61,
      62,    68,    77,     4,    35,    35,    22,    86,    34,    43,
      97,    98,    35,     3,     4,    24,    30,    37,    63,    64,
      33,    35,    36,    95,    19,    87,     3,    36,    99,    33,
      33,    29,     4,    88,    95,    33,    89,    90,    36,    98,
      43,    29,    29,    57,    35,    36,    29,   103,    95,    57,
      57,    30,    95,     3,    16,    31,    91,    92,   103,    36,
      99,    30,    30,    23,     3,    30,    30,    92,    30,    35,
      95,    34,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    49,    49,    49,    49,    49,
      49,    49,    49,    50,    51,    52,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    56,    56,    57,    57,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      63,    64,    65,    65,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    75,    76,    77,    77,    78,    78,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    83,
      83,    84,    84,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    97,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     0,     5,     1,     3,     2,     0,     3,     1,
       1,     3,     1,     3,     4,     1,     1,     2,     2,     2,
       0,     6,     1,     5,     6,     6,     1,     5,     6,     2,
       2,     1,     3,     3,     4,     5,     7,     1,     1,     1,
       1,     1,     1,     3,     3,     5,     3,     5,     2,     4,
       3,     1,     1,     3,     1,     3,     4,     3,     1,     1,
       1,     1,     1,     3,     3,     6,     9,     4,     2,     0,
       2,     1,     0,     3,     1,     3,     1,     2,     1,     2,
       0,     2,     2,     2,     0,     2,     3,     2,     0,     2,
       0,     3,     1,     4,     1,     2,     4,     4,     0,     2,
       1,     3,     2,     4,     3,     1,     1,     1,     1,     4,
       3,     6,     3,     3,     1,     1,     4,     2,     3,     1,
       6,     1,     0,     1,     0,     3,     1,     1,     3,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, scanner, ctx, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, scanner, ctx); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void* scanner, pytype::Context* ctx)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (ctx);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, void* scanner, pytype::Context* ctx)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, scanner, ctx);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, void* scanner, pytype::Context* ctx)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , scanner, ctx);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, ctx); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, void* scanner, pytype::Context* ctx)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (scanner);
  YYUSE (ctx);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* NAME  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1320 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 4: /* NUMBER  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1326 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 5: /* LEXERROR  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1332 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 47: /* start  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1338 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 48: /* unit  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1344 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 49: /* alldefs  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1350 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 50: /* classdef  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1356 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 51: /* class_name  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1362 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 52: /* parents  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1368 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 53: /* parent_list  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1374 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 54: /* parent  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1380 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 55: /* maybe_class_funcs  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1386 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 56: /* class_funcs  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1392 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 57: /* funcdefs  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1398 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 58: /* if_stmt  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1404 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 59: /* if_and_elifs  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1410 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 60: /* class_if_stmt  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1416 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 61: /* class_if_and_elifs  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1422 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 62: /* if_cond  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1428 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 63: /* elif_cond  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1434 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 64: /* else_cond  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1440 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 65: /* condition  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1446 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 66: /* version_tuple  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1452 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 67: /* condition_op  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).str)); }
#line 1458 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 68: /* constantdef  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1464 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 69: /* importdef  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1470 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 70: /* import_items  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1476 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 71: /* import_item  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1482 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 72: /* from_list  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1488 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 73: /* from_items  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1494 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 74: /* from_item  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1500 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 75: /* alias_or_constant  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1506 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 76: /* typevardef  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1512 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 77: /* funcdef  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1518 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 78: /* decorators  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1524 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 79: /* decorator  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1530 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 80: /* params  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1536 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 81: /* param_list  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1542 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 82: /* param  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1548 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 83: /* param_type  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1554 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 84: /* param_default  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1560 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 85: /* param_star_name  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1566 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 86: /* return  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1572 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 87: /* raises  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1578 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 88: /* exceptions  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1584 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 89: /* maybe_body  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1590 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 91: /* body  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1596 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 92: /* body_stmt  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1602 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 93: /* type_parameters  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1608 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 94: /* type_parameter  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1614 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 95: /* type  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1620 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 96: /* named_tuple_fields  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1626 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 97: /* named_tuple_field_list  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1632 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 98: /* named_tuple_field  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1638 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 100: /* maybe_type_list  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1644 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 101: /* type_list  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1650 "parser.tab.cc" /* yacc.c:1257  */
        break;

    case 102: /* dotted_name  */
#line 102 "parser.y" /* yacc.c:1257  */
      { Py_CLEAR(((*yyvaluep).obj)); }
#line 1656 "parser.tab.cc" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void* scanner, pytype::Context* ctx)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, scanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 135 "parser.y" /* yacc.c:1646  */
    { ctx->SetAndDelResult((yyvsp[-1].obj)); (yyval.obj) = NULL; }
#line 1950 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 3:
#line 136 "parser.y" /* yacc.c:1646  */
    { ctx->SetAndDelResult((yyvsp[-1].obj)); (yyval.obj) = NULL; }
#line 1956 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 144 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 1962 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 6:
#line 145 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 1968 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 7:
#line 146 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); Py_DECREF((yyvsp[0].obj)); }
#line 1974 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 8:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); Py_DECREF((yyvsp[0].obj)); }
#line 1980 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); Py_DECREF((yyvsp[0].obj)); }
#line 1986 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 10:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); Py_DECREF((yyvsp[0].obj)); }
#line 1992 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "parser.y" /* yacc.c:1646  */
    {
      PyObject* tmp = ctx->Call(kIfEnd, "(N)", (yyvsp[0].obj));
      CHECK(tmp, (yylsp[0]));
      (yyval.obj) = ExtendList((yyvsp[-1].obj), tmp);
    }
#line 2002 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2008 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 159 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kAddClass, "(NNN)", (yyvsp[-3].obj), (yyvsp[-2].obj), (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2017 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 166 "parser.y" /* yacc.c:1646  */
    {
      // Do not borrow the $1 reference since it is also returned later
      // in $$.  Use O instead of N in the format string.
      PyObject* tmp = ctx->Call(kRegisterClassName, "(O)", (yyvsp[0].obj));
      CHECK(tmp, (yyloc));
      Py_DECREF(tmp);
      (yyval.obj) = (yyvsp[0].obj);
    }
#line 2030 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 177 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2036 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 178 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2042 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 17:
#line 179 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2048 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 18:
#line 183 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2054 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 184 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2060 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 20:
#line 188 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2066 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 189 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NN)", (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2072 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2078 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 194 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2084 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2090 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 199 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2096 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 27:
#line 204 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 2102 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 28:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 2108 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 29:
#line 206 "parser.y" /* yacc.c:1646  */
    {
      PyObject* tmp = ctx->Call(kIfEnd, "(N)", (yyvsp[0].obj));
      CHECK(tmp, (yylsp[0]));
      (yyval.obj) = ExtendList((yyvsp[-1].obj), tmp);
    }
#line 2118 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 30:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2124 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 31:
#line 216 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = AppendList((yyvsp[-5].obj), Py_BuildValue("(NN)", (yyvsp[-4].obj), (yyvsp[-1].obj)));
    }
#line 2132 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 33:
#line 224 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = Py_BuildValue("[(NN)]", (yyvsp[-4].obj), (yyvsp[-1].obj));
    }
#line 2140 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 34:
#line 228 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = AppendList((yyvsp[-5].obj), Py_BuildValue("(NN)", (yyvsp[-4].obj), (yyvsp[-1].obj)));
    }
#line 2148 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 35:
#line 247 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = AppendList((yyvsp[-5].obj), Py_BuildValue("(NN)", (yyvsp[-4].obj), (yyvsp[-1].obj)));
    }
#line 2156 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 37:
#line 255 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = Py_BuildValue("[(NN)]", (yyvsp[-4].obj), (yyvsp[-1].obj));
    }
#line 2164 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 38:
#line 259 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = AppendList((yyvsp[-5].obj), Py_BuildValue("(NN)", (yyvsp[-4].obj), (yyvsp[-1].obj)));
    }
#line 2172 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 39:
#line 271 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Call(kIfBegin, "(N)", (yyvsp[0].obj)); CHECK((yyval.obj), (yyloc)); }
#line 2178 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 40:
#line 275 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Call(kIfElif, "(N)", (yyvsp[0].obj)); CHECK((yyval.obj), (yyloc)); }
#line 2184 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 41:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Call(kIfElse, "()"); CHECK((yyval.obj), (yyloc)); }
#line 2190 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 42:
#line 283 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = Py_BuildValue("(NsN)", (yyvsp[-2].obj), (yyvsp[-1].str), (yyvsp[0].obj));
    }
#line 2198 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 43:
#line 286 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = Py_BuildValue("(NsN)", (yyvsp[-2].obj), (yyvsp[-1].str), (yyvsp[0].obj));
    }
#line 2206 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 44:
#line 293 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(N)", (yyvsp[-2].obj)); }
#line 2212 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 45:
#line 294 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NN)", (yyvsp[-3].obj), (yyvsp[-1].obj)); }
#line 2218 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 46:
#line 295 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = Py_BuildValue("(NNN)", (yyvsp[-5].obj), (yyvsp[-3].obj), (yyvsp[-1].obj));
    }
#line 2226 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 47:
#line 301 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = "<"; }
#line 2232 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 48:
#line 302 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = ">"; }
#line 2238 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 49:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = "<="; }
#line 2244 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 50:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = ">="; }
#line 2250 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 51:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = "=="; }
#line 2256 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 52:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.str) = "!="; }
#line 2262 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 53:
#line 310 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewConstant, "(NN)", (yyvsp[-2].obj), (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2271 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 54:
#line 314 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewConstant, "(NN)", (yyvsp[-2].obj), ctx->Value(kAnything));
      CHECK((yyval.obj), (yyloc));
    }
#line 2280 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 55:
#line 318 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewConstant, "(NN)", (yyvsp[-4].obj), (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2289 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 56:
#line 322 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewConstant, "(NN)", (yyvsp[-2].obj), (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2298 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 57:
#line 326 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewConstant, "(NN)", (yyvsp[-4].obj), (yyvsp[-2].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2307 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 58:
#line 333 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kAddImport, "(ON)", Py_None, (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2316 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 59:
#line 337 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kAddImport, "(NN)", (yyvsp[-2].obj), (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2325 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 60:
#line 344 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2331 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 61:
#line 345 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2337 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 63:
#line 349 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NN)", (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2343 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 65:
#line 354 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2349 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 66:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-2].obj); }
#line 2355 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 67:
#line 359 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2361 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 68:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2367 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 70:
#line 365 "parser.y" /* yacc.c:1646  */
    {
#if PY_MAJOR_VERSION >= 3
  (yyval.obj) = PyUnicode_FromString("NamedTuple");
#else
  (yyval.obj) = PyString_FromString("NamedTuple");
#endif
  }
#line 2379 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 71:
#line 372 "parser.y" /* yacc.c:1646  */
    {
#if PY_MAJOR_VERSION >= 3
  (yyval.obj) = PyUnicode_FromString("TypeVar");
#else
  (yyval.obj) = PyString_FromString("TypeVar");
#endif
  }
#line 2391 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 72:
#line 379 "parser.y" /* yacc.c:1646  */
    {
#if PY_MAJOR_VERSION >= 3
  (yyval.obj) = PyUnicode_FromString("*");
#else
  (yyval.obj) = PyString_FromString("*");
#endif
  }
#line 2403 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 73:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NN)", (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2409 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 74:
#line 390 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kAddAliasOrConstant, "(NN)", (yyvsp[-2].obj), (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2418 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 75:
#line 397 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kAddTypeVar, "(NN)", (yyvsp[-5].obj), (yyvsp[-1].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2427 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 76:
#line 404 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewFunction, "(NNNNNN)", (yyvsp[-8].obj), (yyvsp[-6].obj), (yyvsp[-4].obj), (yyvsp[-2].obj), (yyvsp[-1].obj), (yyvsp[0].obj));
      // Decorators is nullable and messes up the location tracking by
      // using the previous symbol as the start location for this production,
      // which is very misleading.  It is better to ignore decorators and
      // pretend the production started with DEF.  Even when decorators are
      // present the error line will be close enough to be helpful.
      //
      // TODO(dbaum): Consider making this smarter and only ignoring decorators
      // when they are empty.  Making decorators non-nullable and having two
      // productions for funcdef would be a reasonable solution.
      (yyloc).first_line = (yylsp[-7]).first_line;
      (yyloc).first_column = (yylsp[-7]).first_column;
      CHECK((yyval.obj), (yyloc));
    }
#line 2447 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 77:
#line 419 "parser.y" /* yacc.c:1646  */
    {
      // TODO(dbaum): Is PYTHONCODE necessary?
      (yyval.obj) = ctx->Call(kNewExternalFunction, "(NN)", (yyvsp[-3].obj), (yyvsp[-1].obj));
      // See comment above about why @2 is used as the start.
      (yyloc).first_line = (yylsp[-2]).first_line;
      (yyloc).first_column = (yylsp[-2]).first_column;
      CHECK((yyval.obj), (yyloc));
    }
#line 2460 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 78:
#line 430 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 2466 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 79:
#line 431 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2472 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 80:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2478 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 81:
#line 440 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2484 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 82:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2490 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 83:
#line 445 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2496 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 84:
#line 446 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2502 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 85:
#line 450 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NNN)", (yyvsp[-2].obj), (yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 2508 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 86:
#line 451 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(sOO)", "*", Py_None, Py_None); }
#line 2514 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 87:
#line 452 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NNO)", (yyvsp[-1].obj), (yyvsp[0].obj), Py_None); }
#line 2520 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 88:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Value(kEllipsis); }
#line 2526 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 89:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2532 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 90:
#line 458 "parser.y" /* yacc.c:1646  */
    { Py_INCREF(Py_None); (yyval.obj) = Py_None; }
#line 2538 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 91:
#line 462 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2544 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 92:
#line 463 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2550 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 93:
#line 464 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Value(kEllipsis); }
#line 2556 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 94:
#line 465 "parser.y" /* yacc.c:1646  */
    { Py_INCREF(Py_None); (yyval.obj) = Py_None; }
#line 2562 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 95:
#line 469 "parser.y" /* yacc.c:1646  */
    {
#if PY_MAJOR_VERSION >= 3
  (yyval.obj) = PyUnicode_FromFormat("*%s", PyBytes_AsString((yyvsp[0].obj)));
#else
  (yyval.obj) = PyString_FromFormat("*%s", PyString_AsString((yyvsp[0].obj)));
#endif
  }
#line 2574 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 96:
#line 476 "parser.y" /* yacc.c:1646  */
    {
#if PY_MAJOR_VERSION >= 3
  (yyval.obj) = PyUnicode_FromFormat("**%s", PyBytes_AsString((yyvsp[0].obj)));
#else
  (yyval.obj) = PyString_FromFormat("**%s", PyString_AsString((yyvsp[0].obj)));
#endif
  }
#line 2586 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 97:
#line 486 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2592 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 98:
#line 487 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Value(kAnything); }
#line 2598 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 99:
#line 491 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2604 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 100:
#line 492 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2610 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 101:
#line 496 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2616 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 102:
#line 497 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2622 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 103:
#line 501 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2628 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 104:
#line 502 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2634 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 109:
#line 513 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-1].obj), (yyvsp[0].obj)); }
#line 2640 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 110:
#line 514 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2646 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 111:
#line 518 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NN)", (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2652 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 112:
#line 519 "parser.y" /* yacc.c:1646  */
    { Py_DECREF((yyvsp[0].obj)); Py_INCREF(Py_None); (yyval.obj) = Py_None; }
#line 2658 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 113:
#line 520 "parser.y" /* yacc.c:1646  */
    { Py_DECREF((yyvsp[-2].obj)); Py_INCREF(Py_None); (yyval.obj) = Py_None; }
#line 2664 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 114:
#line 524 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2670 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 115:
#line 525 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2676 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 116:
#line 529 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2682 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 117:
#line 530 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Value(kEllipsis); }
#line 2688 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 118:
#line 534 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewType, "(N)", (yyvsp[0].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2697 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 119:
#line 538 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewType, "(NN)", (yyvsp[-3].obj), (yyvsp[-1].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2706 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 542 "parser.y" /* yacc.c:1646  */
    {
      // TODO(dbaum): Is this rule necessary?  Seems like it may be old cruft.
      //
      // TODO(dbaum): This assumes kNewType will make this a GenericType and
      // not try to convert it to HomogeneousContainerType (like it does with
      // typing.Tuple).  This feels inconsistent and should be revisited once
      // the parser is complete.
      (yyval.obj) = ctx->Call(kNewType, "(sN)", "tuple", (yyvsp[-1].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2721 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 552 "parser.y" /* yacc.c:1646  */
    {
      (yyval.obj) = ctx->Call(kNewNamedTuple, "(NN)", (yyvsp[-3].obj), (yyvsp[-1].obj));
      CHECK((yyval.obj), (yyloc));
    }
#line 2730 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 556 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-1].obj); }
#line 2736 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 557 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Call(kNewUnionType, "([NN])", (yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2742 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 558 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Value(kAnything); }
#line 2748 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 559 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = ctx->Value(kNothing); }
#line 2754 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 563 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[-2].obj); }
#line 2760 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 564 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2766 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 568 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2772 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 569 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2778 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 130:
#line 573 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = Py_BuildValue("(NN)", (yyvsp[-4].obj), (yyvsp[-2].obj)); }
#line 2784 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 582 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2790 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 583 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = PyList_New(0); }
#line 2796 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 587 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = AppendList((yyvsp[-2].obj), (yyvsp[0].obj)); }
#line 2802 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 588 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = StartList((yyvsp[0].obj)); }
#line 2808 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 593 "parser.y" /* yacc.c:1646  */
    { (yyval.obj) = (yyvsp[0].obj); }
#line 2814 "parser.tab.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 594 "parser.y" /* yacc.c:1646  */
    {
#if PY_MAJOR_VERSION >= 3
      PyBytes_Concat(&(yyvsp[-2].obj), DOT_STRING);
      PyBytes_ConcatAndDel(&(yyvsp[-2].obj), (yyvsp[0].obj));
#else
      PyString_Concat(&(yyvsp[-2].obj), DOT_STRING);
      PyString_ConcatAndDel(&(yyvsp[-2].obj), (yyvsp[0].obj));
#endif
      (yyval.obj) = (yyvsp[-2].obj);
    }
#line 2829 "parser.tab.cc" /* yacc.c:1646  */
    break;


#line 2833 "parser.tab.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, scanner, ctx, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, scanner, ctx, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, scanner, ctx);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, scanner, ctx);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, scanner, ctx, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, scanner, ctx);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, scanner, ctx);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 611 "parser.y" /* yacc.c:1906  */


namespace {

int pytypeerror(
    YYLTYPE* llocp, void* scanner, pytype::Context* ctx, const char *p) {
  ctx->SetErrorLocation(llocp);
  Lexer* lexer = pytypeget_extra(scanner);
  if (lexer->error_message_) {
    PyErr_SetObject(ctx->Value(kParseError), lexer->error_message_);
  } else {
    PyErr_SetString(ctx->Value(kParseError), p);
  }
  return 0;
}

PyObject* StartList(PyObject* item) {
  return Py_BuildValue("[N]", item);
}

PyObject* AppendList(PyObject* list, PyObject* item) {
  PyList_Append(list, item);
  Py_DECREF(item);
  return list;
}

PyObject* ExtendList(PyObject* dst, PyObject* src) {
  // Add items from src to dst (both of which must be lists) and return src.
  // Borrows the reference to src.
  Py_ssize_t count = PyList_Size(src);
  for (Py_ssize_t i=0; i < count; ++i) {
    PyList_Append(dst, PyList_GetItem(src, i));
  }
  Py_DECREF(src);
  return dst;
}

}  // end namespace
}  // end namespace pytype
