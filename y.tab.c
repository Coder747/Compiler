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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int yylex(void);
FILE * yyin;
int yylineno;
void yyerror(char *s);

#line 77 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    SEMICOLON = 258,
    TYPE_INT = 259,
    TYPE_STRING = 260,
    TYPE_FLOAT = 261,
    TYPE_BOOL = 262,
    TYPE_CHAR = 263,
    OPERATOR_PLUS = 264,
    OPERATOR_SUBTRACT = 265,
    OPERATOR_MULTIPLY = 266,
    OPERATOR_DIVIDE = 267,
    OPERATOR_ASSIGNMENT = 268,
    CURLY_OPEN = 269,
    CURLY_CLOSE = 270,
    BRACKET_OPEN = 271,
    BRACKET_CLOSE = 272,
    VALUE_INT = 273,
    VALUE_STRING = 274,
    VALUE_CHAR = 275,
    VALUE_FLOAT = 276,
    VALUE_BOOL = 277,
    IDENTIFIER = 278,
    CONST = 279,
    IF = 280,
    SWITCH = 281,
    CASE = 282,
    BREAK = 283,
    COLON = 284,
    DEFAULT = 285,
    REPEAT = 286,
    UNTIL = 287,
    L = 288,
    G = 289,
    LE = 290,
    GE = 291,
    EQ = 292,
    NE = 293,
    OR = 294,
    AND = 295,
    ELSE = 296,
    WHILE = 297,
    FOR = 298
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define TYPE_INT 259
#define TYPE_STRING 260
#define TYPE_FLOAT 261
#define TYPE_BOOL 262
#define TYPE_CHAR 263
#define OPERATOR_PLUS 264
#define OPERATOR_SUBTRACT 265
#define OPERATOR_MULTIPLY 266
#define OPERATOR_DIVIDE 267
#define OPERATOR_ASSIGNMENT 268
#define CURLY_OPEN 269
#define CURLY_CLOSE 270
#define BRACKET_OPEN 271
#define BRACKET_CLOSE 272
#define VALUE_INT 273
#define VALUE_STRING 274
#define VALUE_CHAR 275
#define VALUE_FLOAT 276
#define VALUE_BOOL 277
#define IDENTIFIER 278
#define CONST 279
#define IF 280
#define SWITCH 281
#define CASE 282
#define BREAK 283
#define COLON 284
#define DEFAULT 285
#define REPEAT 286
#define UNTIL 287
#define L 288
#define G 289
#define LE 290
#define GE 291
#define EQ 292
#define NE 293
#define OR 294
#define AND 295
#define ELSE 296
#define WHILE 297
#define FOR 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "yacc.y" /* yacc.c:355  */

    int num;
    char* string;

#line 208 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 225 "y.tab.c" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    44,    45,    48,    50,    53,    57,    59,
      63,    65,    69,    71,    73,    77,    81,    87,    91,    96,
      99,   104,   107,   108,   111,   113,   115,   117,   119,   121,
     123,   125,   127,   129,   134,   136,   138,   140,   142,   144,
     146,   148,   154,   156,   158,   161,   163,   165,   168,   170,
     172,   175,   177,   179,   182,   184,   186,   189,   191,   194,
     197,   200,   202,   205,   209,   211,   213,   215,   217
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMICOLON", "TYPE_INT", "TYPE_STRING",
  "TYPE_FLOAT", "TYPE_BOOL", "TYPE_CHAR", "OPERATOR_PLUS",
  "OPERATOR_SUBTRACT", "OPERATOR_MULTIPLY", "OPERATOR_DIVIDE",
  "OPERATOR_ASSIGNMENT", "CURLY_OPEN", "CURLY_CLOSE", "BRACKET_OPEN",
  "BRACKET_CLOSE", "VALUE_INT", "VALUE_STRING", "VALUE_CHAR",
  "VALUE_FLOAT", "VALUE_BOOL", "IDENTIFIER", "CONST", "IF", "SWITCH",
  "CASE", "BREAK", "COLON", "DEFAULT", "REPEAT", "UNTIL", "L", "G", "LE",
  "GE", "EQ", "NE", "OR", "AND", "ELSE", "WHILE", "FOR", "$accept",
  "program", "code", "line", "switchcase", "default", "switchstmt", "case",
  "break", "repuntil", "Whileloop", "Forloop", "ifstatment", "statment",
  "statments", "Condition", "Arithmetic", "exp", "datatype", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -85,     8,    61,   -85,    12,   -85,   -85,   -85,   -85,   -85,
      16,   236,    15,    22,    35,    36,    40,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,    28,   -85,    54,    34,     7,     7,
     231,     7,    37,     3,    56,    60,    76,    77,    79,    80,
      51,    32,   -85,   -85,   -85,   -85,    82,   166,   232,   -85,
     106,   -85,   258,    75,   -85,   309,   -85,   -85,   -85,   -85,
     -85,   -85,   314,     1,    83,     7,     7,     7,     7,     7,
       7,     7,     7,    32,    32,    32,    32,    86,    73,   -85,
      87,    78,    88,    90,   102,   104,   105,   125,   130,   132,
     133,   136,   -85,   231,   -85,   -85,   -85,   -85,   -85,   -85,
     288,   288,    25,    25,   -85,   -85,   -23,     7,   231,   137,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     119,     7,   112,   -85,   -13,   -85,   268,   148,     7,   110,
     280,   231,   -85,   -85,   131,   -85,   244,   143,   231,   161,
     -85,   124,   231,   161,   155,   -85,   146,   190,   -85,   -85,
      32,   -85,    10,   150,   231,   203,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    64,    65,    66,    68,    67,
       0,     0,     0,     0,     0,     0,     0,     3,    61,    62,
      60,    63,    59,     5,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    33,    40,    41,     0,    32,     0,    22,
       0,    21,     0,     0,    58,     0,    42,    48,    51,    45,
      54,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    24,    25,    26,    27,    28,    29,
      30,    31,    36,    37,    34,    35,     0,     0,     0,     0,
      44,    50,    53,    47,    56,    43,    49,    52,    46,    55,
       0,     0,     0,    14,     0,    10,     0,     0,     0,    20,
       0,     0,     7,    11,     0,    17,     0,     0,     0,     8,
      16,     0,     0,    12,     0,     9,     0,     0,    13,    15,
       0,    19,     0,     0,     0,     0,    18
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -85,   -85,   -85,   -85,   -85,   -85,   -85,    46,    17,   -85,
     -85,   -85,   -85,   -49,   -84,   -26,   -41,   178,   170
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,    18,   123,   124,   125,   145,    19,
      20,    21,    22,    49,    50,    46,    47,    51,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      63,    79,   132,    48,   121,    52,    54,   122,     3,   120,
      73,    74,    75,    76,   121,    25,    55,   122,    92,    73,
      74,    75,    76,    41,   127,    42,    43,   153,    44,    26,
      45,    28,   102,   103,   104,   105,    75,    76,    29,    94,
      95,    96,    97,    98,    99,   100,   101,   139,    41,    30,
      42,    33,    31,    44,   143,    45,    32,    40,   147,    56,
      53,    -2,     4,    57,    62,     5,     6,     7,     8,     9,
     155,    79,    34,    35,    36,    37,    38,    39,    79,    58,
      59,   126,    60,    61,    10,    11,    12,    13,    81,   107,
      79,   110,    14,   111,    79,   130,   109,    93,    79,    64,
     106,   108,   136,    15,    16,   112,    79,   113,   114,   152,
       5,     6,     7,     8,     9,    65,    66,    67,    68,    69,
      70,    71,    72,     5,     6,     7,     8,     9,   115,    10,
      11,    12,    13,   116,   129,   117,   118,    14,    78,   119,
     128,   131,    10,    11,    12,    13,   140,   146,    15,    16,
      14,   137,     5,     6,     7,     8,     9,   142,   149,   150,
     148,    15,    16,   135,   154,     5,     6,     7,     8,     9,
     133,    10,    11,    12,    13,    73,    74,    75,    76,    14,
      23,    27,     0,     0,    10,    11,    12,    13,     0,   144,
      15,    16,    14,     0,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    15,    16,   151,     0,     5,     6,     7,
       8,     9,     0,    10,    11,    12,    13,     0,   156,     0,
       0,    14,     0,     0,     0,     0,    10,    11,    12,    13,
       0,     0,    15,    16,    14,     5,     6,     7,     8,     9,
       5,     6,     7,     8,     9,    15,    16,   141,     0,    77,
       0,     0,     0,     0,    10,    11,    12,    13,     0,     0,
       0,     0,    14,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    15,    16,    80,     0,    65,    66,    67,
      68,    69,    70,    71,    72,   134,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,   138,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    65,    66,    67,    68,    69,    70,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
      41,    50,    15,    29,    27,    31,     3,    30,     0,    93,
       9,    10,    11,    12,    27,     3,    13,    30,    17,     9,
      10,    11,    12,    16,   108,    18,    19,    17,    21,    13,
      23,    16,    73,    74,    75,    76,    11,    12,    16,    65,
      66,    67,    68,    69,    70,    71,    72,   131,    16,    14,
      18,    23,    16,    21,   138,    23,    16,    23,   142,     3,
      23,     0,     1,     3,    13,     4,     5,     6,     7,     8,
     154,   120,    18,    19,    20,    21,    22,    23,   127,     3,
       3,   107,     3,     3,    23,    24,    25,    26,    13,    16,
     139,     3,    31,     3,   143,   121,    18,    14,   147,    17,
      14,    14,   128,    42,    43,     3,   155,     3,     3,   150,
       4,     5,     6,     7,     8,    33,    34,    35,    36,    37,
      38,    39,    40,     4,     5,     6,     7,     8,     3,    23,
      24,    25,    26,     3,    15,     3,     3,    31,    32,     3,
       3,    29,    23,    24,    25,    26,    15,    23,    42,    43,
      31,    41,     4,     5,     6,     7,     8,    14,     3,    13,
     143,    42,    43,    15,    14,     4,     5,     6,     7,     8,
     124,    23,    24,    25,    26,     9,    10,    11,    12,    31,
       2,    11,    -1,    -1,    23,    24,    25,    26,    -1,    28,
      42,    43,    31,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    42,    43,    15,    -1,     4,     5,     6,
       7,     8,    -1,    23,    24,    25,    26,    -1,    15,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      -1,    -1,    42,    43,    31,     4,     5,     6,     7,     8,
       4,     5,     6,     7,     8,    42,    43,     3,    -1,    17,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    40,    42,    43,    17,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    17,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    33,    34,    35,    36,    37,    38,    18,    19,    20,
      21,    22,    18,    19,    20,    21,    22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,     1,     4,     5,     6,     7,     8,
      23,    24,    25,    26,    31,    42,    43,    47,    48,    53,
      54,    55,    56,    61,    62,     3,    13,    62,    16,    16,
      14,    16,    16,    23,    18,    19,    20,    21,    22,    23,
      23,    16,    18,    19,    21,    23,    59,    60,    59,    57,
      58,    61,    59,    23,     3,    13,     3,     3,     3,     3,
       3,     3,    13,    60,    17,    33,    34,    35,    36,    37,
      38,    39,    40,     9,    10,    11,    12,    17,    32,    57,
      17,    13,    18,    19,    20,    21,    22,    18,    19,    20,
      21,    22,    17,    14,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    14,    16,    14,    18,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
      58,    27,    30,    49,    50,    51,    59,    58,     3,    15,
      59,    29,    15,    51,    17,    15,    59,    41,    29,    58,
      15,     3,    14,    58,    28,    52,    23,    58,    52,     3,
      13,    15,    60,    17,    14,    58,    15
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    49,
      50,    50,    51,    51,    51,    52,    53,    54,    55,    56,
      56,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     7,     3,     4,
       1,     2,     4,     5,     1,     2,     8,     7,    15,    11,
       7,     1,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     3,     3,     3,     3,     1,
       1,     1,     4,     6,     5,     4,     6,     5,     4,     6,
       5,     4,     6,     5,     4,     6,     5,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 42 "yacc.y" /* yacc.c:1646  */
    {printf("\nProgram End \n\n");}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 44 "yacc.y" /* yacc.c:1646  */
    {printf("code: code line --> Line Number (%d) \n", yylineno);}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 45 "yacc.y" /* yacc.c:1646  */
    {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); (yyval.string)=NULL;}
#line 1450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "yacc.y" /* yacc.c:1646  */
    {printf("line: exp(%s)\n",(yyvsp[0].string));}
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "yacc.y" /* yacc.c:1646  */
    {printf("switchcase: SWITCH Condition CURLY_OPEN switchstmt CURLY_CLOSE lineNumber(%d)\n",yylineno);}
#line 1462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 58 "yacc.y" /* yacc.c:1646  */
    {printf("default: DEFAULT COLON statments lineNumber(%d)\n",yylineno);}
#line 1468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "yacc.y" /* yacc.c:1646  */
    {printf("default: DEFAULT COLON statments break lineNumber(%d)\n",yylineno);}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 64 "yacc.y" /* yacc.c:1646  */
    {printf("switchstmt: case lineNumber(%d)\n",yylineno);}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 66 "yacc.y" /* yacc.c:1646  */
    {printf("switchstmt: switchstmt case lineNumber(%d)\n",yylineno);}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 70 "yacc.y" /* yacc.c:1646  */
    {printf("case: CASE Condition COLON statments lineNumber(%d)\n",yylineno);}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 72 "yacc.y" /* yacc.c:1646  */
    {printf("case: CASE Condition COLON statments break lineNumber(%d)\n",yylineno);}
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "yacc.y" /* yacc.c:1646  */
    {printf("case: default lineNumber(%d)\n",yylineno);}
#line 1504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 78 "yacc.y" /* yacc.c:1646  */
    {printf("break: BREAK SEMICOLON lineNumber(%d)\n",yylineno);}
#line 1510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "yacc.y" /* yacc.c:1646  */
    {printf("repuntil: REPEAT CURLY_OPEN statments UNTIL Condition CURLY_CLOSE lineNumber(%d)\n",yylineno);}
#line 1516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 88 "yacc.y" /* yacc.c:1646  */
    {printf("Whileloop: WHILE(%s) Condition( %d ) CURLY_OPEN( %s ) statments(%s) CURLY_CLOSE( %s ) lineNumber(%d)\n" ,(yyvsp[-6].string),(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),yylineno);}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 92 "yacc.y" /* yacc.c:1646  */
    {printf("Forloop: FOR BRACKET_OPEN IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic BRACKET_CLOSE CURLY_OPEN exp CURLY_CLOSE lineNumber(%d)",yylineno);}
#line 1528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 97 "yacc.y" /* yacc.c:1646  */
    {printf("ifstatment: IF (%s) Condition(%d) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s ) ELSE(%s) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s ) lineNumber(%d)\n",(yyvsp[-10].string),(yyvsp[-9].string),(yyvsp[-8].string),(yyvsp[-7].string),(yyvsp[-6].string),(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),yylineno);}
#line 1534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "yacc.y" /* yacc.c:1646  */
    {printf("ifstatment: IF(%s) Condition(%d) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s )\n",(yyvsp[-6].string),(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),yylineno);}
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 112 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) L(%s) Condition(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));}
#line 1546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 114 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) G(%s) Condition(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) LE(%s) Condition(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 118 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) GE(%s) Condition(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 120 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) EQ(%s) Condition(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 122 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) NE(%s) Condition(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 124 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) OR(%s) Condition(%d) lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 126 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition(%d) AND(%s) Condition(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 128 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Arithmetic lineNumber(%d)\n",yylineno);}
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: VALUE_STRING(%d) lineNumber(%d)\n",(yyvsp[0].string),yylineno);}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: Arithmetic(%d) OPERATOR_MULTIPLY(%s) Arithmetic(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 137 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: Arithmetic(%d) OPERATOR_DIVIDE(%s) Arithmetic(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: Arithmetic(%d) OPERATOR_PLUS(%s) Arithmetic(%d)lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 141 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: Arithmetic(%d) OPERATOR_SUBTRACT(%s) Arithmetic(%d) lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 143 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: BRACKET_OPEN Arithmetic(%d) BRACKET_CLOSE lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string),yylineno);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 145 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: VALUE_INT(%d) lineNumber(%d)\n",(yyvsp[0].string),yylineno);}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 147 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: VALUE_INT(%d) lineNumber(%d)\n",(yyvsp[0].string),yylineno);}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 149 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: IDENTIFIER(%s) lineNumber(%d)\n",(yyvsp[0].string),yylineno);}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 155 "yacc.y" /* yacc.c:1646  */
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%d) lineNumer(%d) \n",(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 157 "yacc.y" /* yacc.c:1646  */
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%d) lineNumber(%d) \n",(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 159 "yacc.y" /* yacc.c:1646  */
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%d) lineNumber(%d) \n",(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 162 "yacc.y" /* yacc.c:1646  */
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_FLOAT(%s) lineNumber(%d)\n",(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 164 "yacc.y" /* yacc.c:1646  */
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_FLOAT(%s) lineNumber(%d) \n",(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 166 "yacc.y" /* yacc.c:1646  */
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_FLOAT(%s) lineNumber(%d)\n",(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 169 "yacc.y" /* yacc.c:1646  */
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d)\n",(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 171 "yacc.y" /* yacc.c:1646  */
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d) \n",(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 173 "yacc.y" /* yacc.c:1646  */
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d)\n",(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 176 "yacc.y" /* yacc.c:1646  */
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d)\n",(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 178 "yacc.y" /* yacc.c:1646  */
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d) \n",(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 180 "yacc.y" /* yacc.c:1646  */
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d)\n",(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 183 "yacc.y" /* yacc.c:1646  */
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d)\n",(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 185 "yacc.y" /* yacc.c:1646  */
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d) \n",(yyvsp[-5].string),(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 187 "yacc.y" /* yacc.c:1646  */
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d)\n",(yyvsp[-4].string),(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 192 "yacc.y" /* yacc.c:1646  */
    {printf("exp: datatype(%s) IDENTIFIER(%s) lineNumber(%d)\n",(yyvsp[-2].string),(yyvsp[-1].string),yylineno);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 195 "yacc.y" /* yacc.c:1646  */
    {printf("exp: ifstatment(%s)lineNumber(%d)\n",(yyvsp[0].string),yylineno);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "yacc.y" /* yacc.c:1646  */
    {printf("exp: Whileloop(%s)lineNumber(%d)\n",(yyvsp[0].string),yylineno);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 201 "yacc.y" /* yacc.c:1646  */
    {printf("exp: switchcase() lineNumber(%d)\n",yylineno);}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 203 "yacc.y" /* yacc.c:1646  */
    {printf("exp: repuntil() lineNumber(%d)\n",yylineno);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 206 "yacc.y" /* yacc.c:1646  */
    {printf("exp: Forloop() lineNumber(%d)\n",yylineno);}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 210 "yacc.y" /* yacc.c:1646  */
    {printf("datatype: TYPE_INT(%s)\n",(yyvsp[0].string));}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 212 "yacc.y" /* yacc.c:1646  */
    {printf("datatype: TYPE_STRING(%s)\n",(yyvsp[0].string));}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 214 "yacc.y" /* yacc.c:1646  */
    {printf("datatype: TYPE_FLOAT(%s)\n",(yyvsp[0].string));}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 216 "yacc.y" /* yacc.c:1646  */
    {printf("datatype: TYPE_CHAR(%s)\n",(yyvsp[0].string));}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 218 "yacc.y" /* yacc.c:1646  */
    {printf("datatype: TYPE_BOOL(%s)\n",(yyvsp[0].string));}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1808 "y.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
#line 223 "yacc.y" /* yacc.c:1906  */


void yyerror(char *s){
    printf("Error: %s\n",s);
}

int main (void)
{
    yyin = fopen("test.txt","r+");
    if(yyin == NULL)
        printf("Error NULL \n");
    else{
        printf("Parsing... \n\n");
        yyparse();
    }
    fclose(yyin);
    return 0;
    
    
    
}



