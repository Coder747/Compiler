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

#include"symboltable.c"

#define POSIX_SOURCE 


//  void panic(int line)
//  {
//     (void)fprintf(stderr,"\n?Panic in line %d \n",line);
//     (void)perror("Semantic error");
//     abort();
//  } 
// #define PANIC (panic())
 //extern void panic(); 
int yylex(void);
FILE * yyin;
int yylineno;

ArrayList* symboltable;
ArrayList* tableptr;
int scopenumber;

void yyerror(char *s); 
// nodeType* add_to_symboltable(ArrayList* st, nodeType *Nptr,int line);


#line 93 "y.tab.c" /* yacc.c:339  */

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
    OPERATOR_NOT = 273,
    VALUE_STRING = 274,
    VALUE_CHAR = 275,
    VALUE_FLOAT = 276,
    VALUE_BOOL = 277,
    VALUE_INT = 278,
    IDENTIFIER = 279,
    CONST = 280,
    IF = 281,
    SWITCH = 282,
    CASE = 283,
    BREAK = 284,
    COLON = 285,
    DEFAULT = 286,
    REPEAT = 287,
    UNTIL = 288,
    L = 289,
    G = 290,
    LE = 291,
    GE = 292,
    EQ = 293,
    NE = 294,
    OR = 295,
    AND = 296,
    ELSE = 297,
    WHILE = 298,
    FOR = 299
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
#define OPERATOR_NOT 273
#define VALUE_STRING 274
#define VALUE_CHAR 275
#define VALUE_FLOAT 276
#define VALUE_BOOL 277
#define VALUE_INT 278
#define IDENTIFIER 279
#define CONST 280
#define IF 281
#define SWITCH 282
#define CASE 283
#define BREAK 284
#define COLON 285
#define DEFAULT 286
#define REPEAT 287
#define UNTIL 288
#define L 289
#define G 290
#define LE 291
#define GE 292
#define EQ 293
#define NE 294
#define OR 295
#define AND 296
#define ELSE 297
#define WHILE 298
#define FOR 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 29 "yacc.y" /* yacc.c:355  */

    int num;
    char* string;
    nodeType* nPtr;
    Const* ForConst;
    typeEnum type;

#line 229 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   341

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  191

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    75,    76,    79,    81,    84,    88,    90,
      94,    96,   100,   102,   104,   108,   112,   118,   125,   127,
     131,   137,   144,   150,   155,   159,   161,   165,   167,   169,
     171,   173,   175,   177,   179,   181,   183,   185,   193,   213,
     232,   252,   271,   274,   290,   305,   323,   325,   337,   343,
     388,   458,   487,   509,   523,   549,   575,   600,   627,   654,
     676,   693,   721,   748,   770,   788,   791,   794,   796,   799,
     803,   809
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
  "BRACKET_CLOSE", "OPERATOR_NOT", "VALUE_STRING", "VALUE_CHAR",
  "VALUE_FLOAT", "VALUE_BOOL", "VALUE_INT", "IDENTIFIER", "CONST", "IF",
  "SWITCH", "CASE", "BREAK", "COLON", "DEFAULT", "REPEAT", "UNTIL", "L",
  "G", "LE", "GE", "EQ", "NE", "OR", "AND", "ELSE", "WHILE", "FOR",
  "$accept", "program", "code", "line", "switchcase", "default",
  "switchstmt", "case", "break", "repuntil", "Whileloop", "Forloop",
  "newscope_open", "newscope_close", "ifstatment", "statment", "statments",
  "Condition", "Arithmetic", "Boolexp", "exp", "datatype", YY_NULLPTR
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
     295,   296,   297,   298,   299
};
# endif

#define YYPACT_NINF -137

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define YYTABLE_NINF -3

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -137,     3,   110,  -137,     6,  -137,     4,  -137,    13,    15,
       1,   186,    27,    32,    37,    36,    45,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,    38,  -137,     8,    22,    28,   295,
      39,    58,    59,    69,   304,   304,  -137,   194,   304,     0,
      29,  -137,    75,  -137,    18,  -137,    76,    84,    79,    94,
      99,  -137,  -137,  -137,  -137,   116,   109,   117,   120,   136,
     137,  -137,   195,   264,  -137,   222,  -137,   139,  -137,   231,
     138,    98,  -137,    57,   126,   101,   158,   159,    57,   151,
     205,  -137,  -137,  -137,  -137,    57,    57,    57,    57,  -137,
     150,    18,   135,    57,    37,   304,   304,   304,   304,   304,
     304,   304,   304,    37,   154,  -137,    37,   157,   160,   129,
    -137,  -137,  -137,  -137,  -137,    34,    34,  -137,  -137,   171,
     172,   178,   298,   194,  -137,  -137,  -137,  -137,  -137,  -137,
     215,   215,    -8,   304,   194,   200,   174,  -137,  -137,  -137,
    -137,  -137,   152,   304,   193,  -137,     2,  -137,   247,   152,
     304,   201,  -137,   169,   259,   194,  -137,  -137,   212,  -137,
      51,   304,    37,   194,   181,  -137,   204,   206,   194,   181,
     252,  -137,   265,   253,   152,  -137,  -137,    57,   266,  -137,
     320,    57,    37,   324,   194,    37,   152,   194,  -137,   152,
    -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    70,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,    67,    68,
      66,    69,    65,     5,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,    59,     0,    56,     0,    63,     0,     0,     0,     0,
       0,    44,    48,    43,    45,     0,     0,     0,     0,     0,
       0,    36,     0,    35,    37,     0,    25,     0,    24,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,    47,    60,    64,    49,     0,     0,     0,     0,    53,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
      58,    55,    62,    46,    42,    40,    41,    38,    39,     0,
       0,     0,     0,     0,    27,    28,    29,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,    50,    57,    54,
      61,    51,     0,     0,     0,    14,     0,    10,     0,     0,
       0,     0,    21,    23,     0,     0,    11,     7,     0,    17,
       0,     0,     0,     0,     8,    16,     0,     0,     0,    12,
       0,     9,     0,     0,     0,    13,    15,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
      19
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,  -137,  -137,  -137,  -137,  -137,  -137,   134,   121,  -137,
    -137,  -137,   -87,  -136,  -137,   -65,  -108,   -30,   -29,   -17,
     289,   -10
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,    18,   145,   146,   147,   171,    19,
      20,    21,    37,   153,    22,    66,    67,    62,    63,    64,
      68,    24
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      55,    33,   105,     3,     5,    65,     7,   123,    69,    25,
     157,    41,    56,   159,    29,   142,   132,   152,    80,   134,
     143,    42,   165,   144,    70,    43,   149,    76,    26,    71,
     143,    45,    72,   144,    75,    44,    48,    27,   179,    28,
      52,    46,    73,    34,   109,    87,    88,   164,    35,    80,
     188,    36,    38,   190,   166,   169,   115,   116,   117,   118,
     174,    39,    40,    57,   122,   124,   125,   126,   127,   128,
     129,   130,   131,    78,   120,   168,   186,   105,    51,   189,
      53,    54,    58,    59,   105,    95,    96,    97,    98,    99,
     100,   101,   102,    60,    74,   184,    77,    82,   187,   105,
      78,    81,    83,   148,   105,    51,    79,    53,    54,   105,
      -2,     4,    89,   154,     5,     6,     7,     8,     9,    84,
     160,   105,   108,    79,   105,    85,    86,    87,    88,   110,
      90,   167,   137,    91,    10,    11,    12,    13,    85,    86,
      87,    88,    14,     5,     6,     7,     8,     9,   180,    92,
      93,   107,   183,    15,    16,   121,     5,     6,     7,     8,
       9,   111,   112,    10,    11,    12,    13,   152,   113,   119,
     133,    14,   104,   136,   138,   139,    10,    11,    12,    13,
     135,   140,    15,    16,    14,     5,     6,     7,     8,     9,
       5,    30,     7,    31,    32,    15,    16,   151,     5,     6,
       7,     8,     9,   150,   161,    10,    11,    12,    13,   173,
     170,   162,    94,    14,    85,    86,    87,    88,    10,    11,
      12,    13,   114,   155,    15,    16,    14,   152,   172,    95,
      96,    97,    98,    99,   100,   101,   102,    15,    16,   103,
      95,    96,    97,    98,    99,   100,   101,   102,   106,    95,
      96,    97,    98,    99,   100,   176,    95,    96,    97,    98,
      99,   100,   101,   102,   158,    95,    96,    97,    98,    99,
     100,   101,   102,    85,    86,    87,    88,   178,   177,   181,
     156,    95,    96,    97,    98,    99,   100,   101,   102,   163,
     175,    23,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   141,     0,     0,     0,     0,     0,    85,    86,    87,
      88,    47,     0,    48,    49,    50,    51,    52,    53,    54,
      47,     0,    48,    61,     0,    51,    52,    53,    54,    85,
      86,    87,    88,    85,    86,    87,    88,   182,     0,     0,
       0,   185
};

static const yytype_int16 yycheck[] =
{
      29,    11,    67,     0,     4,    35,     6,    94,    38,     3,
     146,     3,    29,   149,    13,   123,   103,    15,    47,   106,
      28,    13,   158,    31,    24,     3,   134,    44,    24,    39,
      28,     3,     3,    31,    16,    13,    18,    24,   174,    24,
      22,    13,    13,    16,    73,    11,    12,   155,    16,    78,
     186,    14,    16,   189,     3,   163,    85,    86,    87,    88,
     168,    16,    24,    24,    93,    95,    96,    97,    98,    99,
     100,   101,   102,    16,    91,   162,   184,   142,    21,   187,
      23,    24,    24,    24,   149,    34,    35,    36,    37,    38,
      39,    40,    41,    24,    19,   182,    20,     3,   185,   164,
      16,    22,     3,   133,   169,    21,    22,    23,    24,   174,
       0,     1,     3,   143,     4,     5,     6,     7,     8,     3,
     150,   186,    24,    22,   189,     9,    10,    11,    12,     3,
      13,   161,     3,    13,    24,    25,    26,    27,     9,    10,
      11,    12,    32,     4,     5,     6,     7,     8,   177,    13,
      13,    13,   181,    43,    44,    20,     4,     5,     6,     7,
       8,     3,     3,    24,    25,    26,    27,    15,    17,    19,
      16,    32,    33,    13,     3,     3,    24,    25,    26,    27,
      23,     3,    43,    44,    32,     4,     5,     6,     7,     8,
       4,     5,     6,     7,     8,    43,    44,    23,     4,     5,
       6,     7,     8,     3,     3,    24,    25,    26,    27,     3,
      29,    42,    17,    32,     9,    10,    11,    12,    24,    25,
      26,    27,    17,    30,    43,    44,    32,    15,    24,    34,
      35,    36,    37,    38,    39,    40,    41,    43,    44,    17,
      34,    35,    36,    37,    38,    39,    40,    41,    17,    34,
      35,    36,    37,    38,    39,     3,    34,    35,    36,    37,
      38,    39,    40,    41,    17,    34,    35,    36,    37,    38,
      39,    40,    41,     9,    10,    11,    12,    24,    13,    13,
     146,    34,    35,    36,    37,    38,    39,    40,    41,    30,
     169,     2,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,     3,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      12,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      16,    -1,    18,    19,    -1,    21,    22,    23,    24,     9,
      10,    11,    12,     9,    10,    11,    12,    17,    -1,    -1,
      -1,    17
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,     1,     4,     5,     6,     7,     8,
      24,    25,    26,    27,    32,    43,    44,    48,    49,    54,
      55,    56,    59,    65,    66,     3,    24,    24,    24,    13,
       5,     7,     8,    66,    16,    16,    14,    57,    16,    16,
      24,     3,    13,     3,    13,     3,    13,    16,    18,    19,
      20,    21,    22,    23,    24,    63,    64,    24,    24,    24,
      24,    19,    62,    63,    64,    62,    60,    61,    65,    62,
      24,    66,     3,    13,    19,    16,    64,    20,    16,    22,
      63,    22,     3,     3,     3,     9,    10,    11,    12,     3,
      13,    13,    13,    13,    17,    34,    35,    36,    37,    38,
      39,    40,    41,    17,    33,    60,    17,    13,    24,    63,
       3,     3,     3,    17,    17,    63,    63,    63,    63,    19,
      64,    20,    63,    57,    62,    62,    62,    62,    62,    62,
      62,    62,    57,    16,    57,    23,    13,     3,     3,     3,
       3,     3,    61,    28,    31,    50,    51,    52,    62,    61,
       3,    23,    15,    58,    62,    30,    52,    58,    17,    58,
      62,     3,    42,    30,    61,    58,     3,    62,    57,    61,
      29,    53,    24,     3,    61,    53,     3,    13,    24,    58,
      63,    13,    17,    63,    57,    17,    61,    57,    58,    61,
      58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    49,    50,    50,
      51,    51,    52,    52,    52,    53,    54,    55,    56,    56,
      57,    58,    59,    59,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     7,     3,     4,
       1,     2,     4,     5,     1,     2,     8,     7,    15,    16,
       1,     1,    11,     7,     1,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     2,     1,     4,
       5,     6,     3,     4,     6,     5,     3,     6,     5,     3,
       4,     6,     5,     3,     4,     1,     1,     1,     1,     1,
       1,     1
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
#line 73 "yacc.y" /* yacc.c:1646  */
    {printf("\nProgram End \n\n");}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 75 "yacc.y" /* yacc.c:1646  */
    {printf("code: code line --> Line Number (%d) \n", yylineno);}
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 76 "yacc.y" /* yacc.c:1646  */
    {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); (yyval.nPtr)=NULL;}
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "yacc.y" /* yacc.c:1646  */
    {printf("line: exp( )\n");}
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 85 "yacc.y" /* yacc.c:1646  */
    {printf("switchcase: SWITCH( ) Condition( ) newscope_open switchstmt( ) newscope_close lineNumber(%d)\n",yylineno);}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 89 "yacc.y" /* yacc.c:1646  */
    {printf("default: DEFAULT( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "yacc.y" /* yacc.c:1646  */
    {printf("default: DEFAULT( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "yacc.y" /* yacc.c:1646  */
    {printf("switchstmt: case( ) lineNumber(%d)\n",yylineno);}
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "yacc.y" /* yacc.c:1646  */
    {printf("switchstmt: switchstmt( ) case( ) lineNumber(%d)\n",yylineno);}
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 101 "yacc.y" /* yacc.c:1646  */
    {printf("case: CASE( ) Condition( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 103 "yacc.y" /* yacc.c:1646  */
    {printf("case: CASE( ) Condition( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 105 "yacc.y" /* yacc.c:1646  */
    {printf("case: default( ) lineNumber(%d)\n",yylineno);}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 109 "yacc.y" /* yacc.c:1646  */
    {printf("break: BREAK( ) SEMICOLON( ) lineNumber(%d)\n",yylineno);}
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 113 "yacc.y" /* yacc.c:1646  */
    {printf("repuntil: REPEAT( ) newscope_open statments( ) UNTIL( ) Condition( ) newscope_close lineNumber(%d)\n",yylineno);}
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 119 "yacc.y" /* yacc.c:1646  */
    {
                
                printf("Whileloop: WHILE( ) Condition( ) newscope_open statments( ) newscope_close lineNumber(%d)\n" ,yylineno);
            }
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 126 "yacc.y" /* yacc.c:1646  */
    {printf("Forloop: FOR( ) BRACKET_OPEN IDENTIFIER( ) OPERATOR_ASSIGNMENT VALUE_INT( ) SEMICOLON condition( ) SEMICOLON IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) BRACKET_CLOSE newscope_open statments( ) newscope_close lineNumber(%d)\n",yylineno);}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 128 "yacc.y" /* yacc.c:1646  */
    {printf("Forloop: FOR( ) BRACKET_OPEN datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT VALUE_INT( ) SEMICOLON condition( ) SEMICOLON IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) BRACKET_CLOSE newscope_open statments( ) newscope_close lineNumber(%d)\n",yylineno);}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 132 "yacc.y" /* yacc.c:1646  */
    {
                scopenumber++;
                tableptr= createNewScope(tableptr, sizeof(nodeType));
                (yyval.string)=(yyvsp[0].string);
            }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 138 "yacc.y" /* yacc.c:1646  */
    {
                scopenumber--;
                tableptr=tableptr->prev;
                (yyval.string)=(yyvsp[0].string);
            }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 145 "yacc.y" /* yacc.c:1646  */
    {

                printf("ifstatment: IF ( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE newscope_open statment( ) newscope_close ELSE( ) newscope_open statment( ) newscope_close lineNumber(%d)\n",yylineno);
            }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 151 "yacc.y" /* yacc.c:1646  */
    {printf("ifstatment: IF( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE newscope_open statment( ) newscope_close lineNumber(%d) \n",yylineno);}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 156 "yacc.y" /* yacc.c:1646  */
    {printf("statment: exp( ) lineNumber(%d)\n",yylineno);}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 160 "yacc.y" /* yacc.c:1646  */
    {printf("statments: statment( ) lineNumber(%d)\n",yylineno);}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 162 "yacc.y" /* yacc.c:1646  */
    {printf("statments: statments( ) statment( )lineNumber(%d)\n",yylineno);}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) L( ) Condition( ) lineNumber(%d)\n",yylineno);}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 168 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) G( ) Condition( )lineNumber(%d)\n",yylineno);}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 170 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) LE( ) Condition( )lineNumber(%d)\n",yylineno);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 172 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) GE( ) Condition( )lineNumber(%d)\n",yylineno);}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 174 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) EQ( ) Condition( )lineNumber(%d)\n",yylineno);}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 176 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) NE( ) Condition( )lineNumber(%d)\n",yylineno);}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 178 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) OR( ) Condition( ) lineNumber(%d)\n",yylineno);}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 180 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Condition( ) AND( ) Condition( )lineNumber(%d)\n",yylineno);}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 182 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Arithmetic lineNumber(%d)\n",yylineno);}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 184 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: VALUE_STRING( ) lineNumber(%d)\n",yylineno);}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 186 "yacc.y" /* yacc.c:1646  */
    {printf("Condition: Boolexp lineNumber(%d)\n",yylineno);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 194 "yacc.y" /* yacc.c:1646  */
    {// mul=1,divide=2,add=3,sub=4
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[-2].nPtr);
                Ntype2=(yyvsp[0].nPtr);
                
                Ntype->final_int=1;
                Ntype->final_float=1.0;
                
                Ntype=arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,1); //MULTIPLY = 1
                
                sendtotest(Ntype);
                (yyval.nPtr)=Ntype;
             printf("Arithmetic: Arithmetic( ) OPERATOR_MULTIPLY( ) Arithmetic( )lineNumber(%d)\n",yylineno);
            }
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 214 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[-2].nPtr);
                Ntype2=(yyvsp[0].nPtr);

                Ntype->final_int=1;
                Ntype->final_float=1.0;
                
                arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,2);  //DIVIDE = 2
                
                (yyval.nPtr)=Ntype;

                printf("Arithmetic: Arithmetic( ) OPERATOR_DIVIDE( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 233 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[-2].nPtr);
                Ntype2=(yyvsp[0].nPtr);

                Ntype->final_int=0;
                Ntype->final_float=0.0;
                
                arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,3);  //ADD = 3
                
                (yyval.nPtr)=Ntype;
                
            
                printf("Arithmetic: Arithmetic( ) OPERATOR_PLUS( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 253 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[-2].nPtr);
                Ntype2=(yyvsp[0].nPtr);

                Ntype->final_int=0;
                Ntype->final_float=0.0;

                arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,4);   //SUBTRACT = 4
                
                (yyval.nPtr)=Ntype;
                
                printf("Arithmetic: Arithmetic( ) OPERATOR_SUBTRACT( ) Arithmetic( ) lineNumber(%d)\n",yylineno);}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 272 "yacc.y" /* yacc.c:1646  */
    {printf("Arithmetic: BRACKET_OPEN Arithmetic( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 275 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Const* ptr;
                ptr=(yyvsp[0].ForConst);
                Ntype=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Con; //constant number
                Ntype->con=*ptr;
                Ntype->final_int=ptr->intpls;
                Ntype->generaltype=Int;
                (yyval.nPtr)=Ntype;
                
                printf("Arithmetic: VALUE_INT( ) lineNumber(%d)\n",yylineno);

            }
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 291 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=(yyvsp[0].ForConst);
                Ntype->typeofvariable=Con; //constant number
                Ntype->con=*ptr;
                Ntype->final_float=ptr->floatpls;
                Ntype->generaltype=Float;
                (yyval.nPtr)=Ntype;
                
                printf("Arithmetic: VALUE_FLOAT( ) lineNumber(%d)\n",yylineno);
            }
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 306 "yacc.y" /* yacc.c:1646  */
    {   
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[0].string);
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->generaltype=Ntype->id.type;
                (yyval.nPtr)=Ntype;

                printf("Arithmetic: IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 324 "yacc.y" /* yacc.c:1646  */
    {printf("Boolexp: BRACKET_OPEN VALUE_BOOL( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);(yyval.ForConst)=(yyvsp[-1].ForConst);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 326 "yacc.y" /* yacc.c:1646  */
    {
                Const* ptr;
                ptr=malloc(sizeof(Const));
                ptr=(yyvsp[0].ForConst);
                if (strcmp(ptr->others,"true")==0)
                    ptr->others="false"; 
                else 
                    ptr->others="true";
                (yyval.ForConst)=ptr;
                printf("Boolexp: OPERATOR_NOT( ) VALUE_BOOL( )lineNumber(%d)\n",yylineno);
            }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 338 "yacc.y" /* yacc.c:1646  */
    {
                (yyval.ForConst)=(yyvsp[0].ForConst);
                printf("Boolexp:VALUE_BOOL( )lineNumber(%d)\n",yylineno)
            ;}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 344 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=(yyvsp[-1].nPtr);
                Ntype->id.name=(yyvsp[-3].string);
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.othertype= arthmetic_ptr->generaltype;
                 if(arthmetic_ptr->typeofvariable==Id)
                {
                    if(arthmetic_ptr->id.type==Int)
                        Ntype->id.intpls=arthmetic_ptr->id.intpls;
                    else
                        Ntype->id.floatpls=arthmetic_ptr->id.floatpls;
                    
                }
                else if(arthmetic_ptr->typeofvariable==Con)
                {
                    if(arthmetic_ptr->con.t==Int)
                        Ntype->id.intpls=arthmetic_ptr->con.intpls;
                    else
                        Ntype->id.floatpls=arthmetic_ptr->con.floatpls;
                }
                else 
                {
                    if(arthmetic_ptr->generaltype==Int)
                        Ntype->id.intpls=arthmetic_ptr->final_int;
                    else
                        Ntype->id.floatpls=arthmetic_ptr->final_float;
                }

                Ntype->typeofvariable=Id;
                Ntype->final_int=arthmetic_ptr->final_int;
                Ntype->final_float=arthmetic_ptr->final_float;


                sendtotest(Ntype);
                // sendtotest(arthmetic_ptr);
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp : IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 389 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                nodeType * check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=(yyvsp[-1].nPtr);
                Ntype->constant=false;
                Ntype->id.name=(yyvsp[-3].string); 
                Ntype->id.declaration++;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                Ntype->typeofvariable=Id;
                Ntype->id.type=(yyvsp[-4].type); 
                if(arthmetic_ptr->typeofvariable==Id)
                {
                   Ntype->id.othertype= arthmetic_ptr->id.type;
                   if(arthmetic_ptr->id.type==Int)
                        Ntype->id.intpls=arthmetic_ptr->id.intpls;
                    else 
                        Ntype->id.floatpls=arthmetic_ptr->id.floatpls;
                }
                else if(arthmetic_ptr->typeofvariable==Con)
                {
                    
                    Ntype->id.othertype= arthmetic_ptr->con.t;
                    if(arthmetic_ptr->con.t==Int)
                    {
                         Ntype->id.intpls=arthmetic_ptr->con.intpls;
                    }
                    else if (arthmetic_ptr->con.t==Float)
                    {      
                         Ntype->id.floatpls=arthmetic_ptr->con.floatpls;
                    }
                }
                else 
                {
                    Ntype->id.othertype= arthmetic_ptr->generaltype;
                    if(arthmetic_ptr->generaltype==Int)
                    {
                         
                         Ntype->id.intpls=arthmetic_ptr->final_int;
                    }
                    else if (arthmetic_ptr->generaltype==Float)
                    {        
                        
                         Ntype->id.floatpls=arthmetic_ptr->final_float;
                    }
                }

                if(Ntype->id.type!=Ntype->id.othertype)
                {
                    printf("error type miss match\n");
                    panic(yylineno);
                }
                Ntype->final_int=arthmetic_ptr->final_int;
                Ntype->final_float=arthmetic_ptr->final_float;

                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp : datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 459 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                nodeType* check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.type=(yyvsp[-4].type); 
                Ntype->id.name=(yyvsp[-3].string);
                Ntype->id.scope=scopenumber;
                printf("scope = %d \n",Ntype->id.scope);
                arthmetic_ptr=(yyvsp[-1].nPtr);
                Ntype->constant=true;
                Ntype->id.declaration++;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                Ntype->typeofvariable=Id;
                 
                Ntype->id.value= arthmetic_ptr->id.value;
                Ntype->id.othertype=arthmetic_ptr->id.type;

                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                printf("exp: CONST( ) datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_INT( ) lineNumber(%d) \n",yylineno);
            }
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 488 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[-1].string);
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                } 
                Ntype->id.type=(yyvsp[-2].type);
                printf("type %d",Ntype->id.type);
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: datatype( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 510 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->id.name= (yyvsp[-3].string);
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) Boolexp( ) lineNumber(%d)\n",yylineno);
            }
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 524 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->id.declaration++;
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[-3].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                printf("exp: CONST( ) TYPE_BOOL( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_BOOL( ) lineNumber(%d) \n",yylineno);
            }
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 550 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->constant=false;
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[-3].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp : datatype( ) TYPE_BOOL( ) OPERATOR_ASSIGNMENT VALUE_BOOL( ) lineNumber(%d)\n",yylineno);
            }
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 576 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                nodeType* check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=Bool;  
                Ntype->id.name=(yyvsp[-1].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp : datatype( ) TYPE_BOOL( ) lineNumber(%d)\n",yylineno);
            }
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 601 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType * check;
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[-3].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: CONST( ) TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d) \n",yylineno);
            }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 628 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[-3].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            }
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 655 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=String; 
                Ntype->id.name=(yyvsp[-1].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: TYPE_STRING( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 677 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Ntype->id.othertype= String;
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[-3].string); 
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            }
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 694 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Ntype->id.othertype=ptr->t;
                Ntype->id.type=Char;
                Ntype->constant=true;
                Ntype->id.declaration++; 
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[-3].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }

                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: CONST( ) TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d) \n",yylineno);
            }
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 722 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=ptr->t;
                Ntype->id.type=Char; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[-3].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 749 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.type=Char; 
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[-1].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    printf("redeclaration of the variable %s error\n",Ntype->id.name);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: TYPE_CHAR( ) IDENTIFIER( )lineNumber(%d)\n",yylineno);
            }
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 771 "yacc.y" /* yacc.c:1646  */
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                printf("scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[-1].ForConst);
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=Char; 
               
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[-3].string);
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 789 "yacc.y" /* yacc.c:1646  */
    {printf("exp: ifstatment( )lineNumber(%d)\n",yylineno);}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 792 "yacc.y" /* yacc.c:1646  */
    {printf("exp: Whileloop( )lineNumber(%d)\n",yylineno);}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 795 "yacc.y" /* yacc.c:1646  */
    {printf("exp: switchcase( ) lineNumber(%d)\n",yylineno);}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 797 "yacc.y" /* yacc.c:1646  */
    {printf("exp: repuntil( ) lineNumber(%d)\n",yylineno);}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 800 "yacc.y" /* yacc.c:1646  */
    {printf("exp: Forloop( ) lineNumber(%d)\n",yylineno);}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 804 "yacc.y" /* yacc.c:1646  */
    {
            
             printf("datatype: TYPE_INT( )\n");
             (yyval.type)=Int;
        }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 810 "yacc.y" /* yacc.c:1646  */
    {
            
            printf("datatype: TYPE_FLOAT( )\n");
            (yyval.type)=Float;
        }
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2431 "y.tab.c" /* yacc.c:1646  */
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
#line 818 "yacc.y" /* yacc.c:1906  */


void yyerror(char *s){
    printf("Error: %s\n",s);
}


int main (void)
{
    
     symboltable=newArrayListSized(sizeof(nodeType),100);
     tableptr=symboltable;
     scopenumber=0;

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


