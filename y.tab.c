/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 30 "yacc.y"
{
    int num;
    char* string;
    nodeType* nPtr;
    Const* ForConst;
    typeEnum type;
}
/* Line 193 of yacc.c.  */
#line 219 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 232 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   314

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    17,    25,
      29,    34,    36,    39,    44,    50,    52,    55,    64,    72,
      88,    90,    92,   104,   112,   114,   116,   119,   123,   127,
     131,   135,   139,   143,   147,   151,   153,   155,   157,   161,
     165,   169,   173,   177,   179,   181,   183,   187,   190,   192,
     197,   203,   210,   214,   219,   226,   232,   236,   242,   249,
     256,   262,   266,   271,   277,   284,   290,   296,   300,   305,
     307,   309,   311,   313,   315,   317
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    47,    -1,    47,    48,    -1,    -1,    65,
      -1,     1,     3,    -1,     1,    15,    -1,    27,    16,    62,
      17,    57,    51,    58,    -1,    31,    30,    61,    -1,    31,
      30,    61,    53,    -1,    52,    -1,    51,    52,    -1,    28,
      62,    30,    61,    -1,    28,    62,    30,    61,    53,    -1,
      50,    -1,    29,     3,    -1,    32,    57,    61,    33,    16,
      62,    17,    58,    -1,    43,    16,    62,    17,    57,    61,
      58,    -1,    44,    16,    24,    13,    23,     3,    62,     3,
      24,    13,    63,    17,    57,    61,    58,    -1,    14,    -1,
      15,    -1,    26,    16,    62,    17,    57,    61,    58,    42,
      57,    61,    58,    -1,    26,    16,    62,    17,    57,    61,
      58,    -1,    65,    -1,    60,    -1,    61,    60,    -1,    62,
      34,    62,    -1,    62,    35,    62,    -1,    62,    36,    62,
      -1,    62,    37,    62,    -1,    62,    38,    62,    -1,    62,
      39,    62,    -1,    62,    40,    62,    -1,    62,    41,    62,
      -1,    63,    -1,    19,    -1,    64,    -1,    63,    11,    63,
      -1,    63,    12,    63,    -1,    63,     9,    63,    -1,    63,
      10,    63,    -1,    16,    63,    17,    -1,    23,    -1,    21,
      -1,    24,    -1,    16,    22,    17,    -1,    18,    22,    -1,
      22,    -1,    24,    13,    63,     3,    -1,    66,    24,    13,
      63,     3,    -1,    25,    66,    24,    13,    63,     3,    -1,
      66,    24,     3,    -1,    24,    13,    64,     3,    -1,    25,
       7,    24,    13,    64,     3,    -1,     7,    24,    13,    64,
       3,    -1,     7,    24,     3,    -1,     7,    24,    13,    24,
       3,    -1,     7,    24,    13,    18,    24,     3,    -1,    25,
       5,    24,    13,    19,     3,    -1,     5,    24,    13,    19,
       3,    -1,     5,    24,     3,    -1,    24,    13,    19,     3,
      -1,     5,    24,    13,    24,     3,    -1,    25,     8,    24,
      13,    20,     3,    -1,     8,    24,    13,    20,     3,    -1,
       8,    24,    13,    24,     3,    -1,     8,    24,     3,    -1,
      24,    13,    20,     3,    -1,    59,    -1,    55,    -1,    49,
      -1,    54,    -1,    56,    -1,     4,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    76,    77,    80,    82,    83,    86,    90,
      92,    96,    98,   102,   104,   106,   110,   114,   120,   127,
     131,   137,   144,   149,   154,   158,   160,   164,   166,   168,
     170,   172,   174,   176,   178,   180,   182,   184,   192,   212,
     232,   252,   271,   283,   299,   314,   332,   334,   346,   354,
     400,   474,   504,   529,   549,   582,   616,   641,   673,   711,
     744,   777,   803,   824,   856,   890,   922,   955,   979,  1003,
    1006,  1009,  1011,  1014,  1018,  1024
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "Condition", "Arithmetic", "Boolexp", "exp", "datatype", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    48,    48,    48,    49,    50,
      50,    51,    51,    52,    52,    52,    53,    54,    55,    56,
      57,    58,    59,    59,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     2,     7,     3,
       4,     1,     2,     4,     5,     1,     2,     8,     7,    15,
       1,     1,    11,     7,     1,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     2,     1,     4,
       5,     6,     3,     4,     6,     5,     3,     5,     6,     6,
       5,     3,     4,     5,     6,     5,     5,     3,     4,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    74,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     3,    71,    72,
      70,    73,    69,     5,     0,     6,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,    61,     0,    56,     0,    67,     0,     0,     0,
       0,     0,    44,    48,    43,    45,     0,     0,     0,     0,
       0,     0,    36,     0,    35,    37,     0,    25,     0,    24,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,    62,    68,    49,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    60,    63,     0,    57,    55,    65,    66,
      46,    42,    40,    41,    38,    39,     0,     0,     0,     0,
       0,    27,    28,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,    50,    58,    59,    54,    64,    51,     0,
       0,     0,    15,     0,    11,     0,     0,     0,    21,    23,
       0,     0,    12,     8,     0,    18,     0,     0,     0,     9,
      17,     0,     0,    13,     0,    10,     0,     0,    14,    16,
       0,    22,     0,     0,     0,     0,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,    18,   152,   153,   154,   175,    19,
      20,    21,    38,   159,    22,    67,    68,    63,    64,    65,
      69,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -148
static const yytype_int16 yypact[] =
{
    -148,    20,    90,  -148,     0,  -148,    18,  -148,    29,    34,
      67,   208,    72,    77,    69,    83,    85,  -148,  -148,  -148,
    -148,  -148,  -148,  -148,    88,  -148,  -148,     1,     8,    19,
     273,    89,    96,    97,   100,   173,   173,  -148,   203,   173,
     101,    21,  -148,    17,  -148,    13,  -148,    30,   107,   105,
     129,   137,  -148,  -148,  -148,  -148,    36,   138,   147,   148,
     149,   157,  -148,   185,   268,  -148,   214,  -148,   131,  -148,
     222,   158,  -148,    84,   169,   170,   155,    57,   180,   181,
     187,   229,    84,   216,   142,  -148,  -148,  -148,  -148,    84,
      84,    84,    84,  -148,   215,    33,   217,    84,    69,   173,
     173,   173,   173,   173,   173,   173,   173,    69,   220,  -148,
      69,   243,    54,  -148,  -148,   264,  -148,  -148,  -148,  -148,
    -148,  -148,    92,    92,  -148,  -148,   265,   287,   299,    75,
     203,  -148,  -148,  -148,  -148,  -148,  -148,   206,   206,    -3,
     173,   203,   300,  -148,  -148,  -148,  -148,  -148,  -148,   161,
     173,   274,  -148,    -5,  -148,   247,   161,   173,  -148,   196,
     235,   203,  -148,  -148,   290,  -148,   108,    69,   203,   174,
    -148,   283,   203,   174,   305,  -148,   296,   161,  -148,  -148,
      84,  -148,   289,    69,   203,   161,  -148
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,  -148,  -148,  -148,  -148,   159,   140,  -148,
    -148,  -148,   -91,  -147,  -148,   -67,  -128,   -31,   -30,   -18,
     308,   303
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      56,   109,   149,    25,    42,    66,   163,   130,    70,   165,
     158,    44,    57,   156,    43,    26,   139,   170,    84,   141,
       3,    45,    46,   150,    72,   150,   151,    79,   151,    76,
     181,    77,    47,   169,    73,    53,    74,    78,   186,    88,
     173,    75,    27,   112,   177,    89,    90,    91,    92,    76,
      80,    49,    84,    28,    81,    53,   185,   143,    29,   122,
     123,   124,   125,    89,    90,    91,    92,   129,   131,   132,
     133,   134,   135,   136,   137,   138,   172,   127,   148,    85,
      30,   115,   109,    37,    89,    90,    91,    92,    35,   109,
      -2,     4,   184,    36,     5,     6,     7,     8,     9,    39,
      82,    40,   109,    91,    92,    52,   109,    54,    55,   155,
     109,   171,    41,    58,    10,    11,    12,    13,   109,   160,
      59,    60,    14,    82,    61,    71,   166,    85,    52,    83,
      54,    55,    86,    15,    16,     5,     6,     7,     8,     9,
      87,    93,    99,   100,   101,   102,   103,   104,   105,   106,
     182,    89,    90,    91,    92,    10,    11,    12,    13,   121,
      94,    95,    96,    14,   108,     5,     6,     7,     8,     9,
      97,   111,   113,   114,    15,    16,   158,    83,     5,     6,
       7,     8,     9,   116,   117,    10,    11,    12,    13,    48,
     118,    49,    62,    14,    52,    53,    54,    55,    10,    11,
      12,    13,    98,   174,    15,    16,    14,     5,     6,     7,
       8,     9,     5,    31,     7,    32,    33,    15,    16,    99,
     100,   101,   102,   103,   104,   105,   106,    10,    11,    12,
      13,   107,   119,   120,   126,    14,   140,   128,   167,   110,
      99,   100,   101,   102,   103,   104,    15,    16,    99,   100,
     101,   102,   103,   104,   105,   106,    99,   100,   101,   102,
     103,   104,   105,   106,   164,   168,   142,   144,   145,    99,
     100,   101,   102,   103,   104,   105,   106,    89,    90,    91,
      92,    99,   100,   101,   102,   103,   104,   105,   106,    48,
     146,    49,    50,    51,    52,    53,    54,    55,    89,    90,
      91,    92,   147,   157,   161,   158,   183,   176,   179,   180,
      23,     0,   162,   178,    34
};

static const yytype_int16 yycheck[] =
{
      30,    68,   130,     3,     3,    36,   153,    98,    39,   156,
      15,     3,    30,   141,    13,    15,   107,   164,    48,   110,
       0,    13,     3,    28,     3,    28,    31,    45,    31,    16,
     177,    18,    13,   161,    13,    22,    19,    24,   185,     3,
     168,    24,    24,    73,   172,     9,    10,    11,    12,    16,
      20,    18,    82,    24,    24,    22,   184,     3,    24,    89,
      90,    91,    92,     9,    10,    11,    12,    97,    99,   100,
     101,   102,   103,   104,   105,   106,   167,    95,     3,    22,
      13,    24,   149,    14,     9,    10,    11,    12,    16,   156,
       0,     1,   183,    16,     4,     5,     6,     7,     8,    16,
      16,    16,   169,    11,    12,    21,   173,    23,    24,   140,
     177,     3,    24,    24,    24,    25,    26,    27,   185,   150,
      24,    24,    32,    16,    24,    24,   157,    22,    21,    22,
      23,    24,     3,    43,    44,     4,     5,     6,     7,     8,
       3,     3,    34,    35,    36,    37,    38,    39,    40,    41,
     180,     9,    10,    11,    12,    24,    25,    26,    27,    17,
      13,    13,    13,    32,    33,     4,     5,     6,     7,     8,
      13,    13,     3,     3,    43,    44,    15,    22,     4,     5,
       6,     7,     8,     3,     3,    24,    25,    26,    27,    16,
       3,    18,    19,    32,    21,    22,    23,    24,    24,    25,
      26,    27,    17,    29,    43,    44,    32,     4,     5,     6,
       7,     8,     4,     5,     6,     7,     8,    43,    44,    34,
      35,    36,    37,    38,    39,    40,    41,    24,    25,    26,
      27,    17,     3,    17,    19,    32,    16,    20,    42,    17,
      34,    35,    36,    37,    38,    39,    43,    44,    34,    35,
      36,    37,    38,    39,    40,    41,    34,    35,    36,    37,
      38,    39,    40,    41,    17,    30,    23,     3,     3,    34,
      35,    36,    37,    38,    39,    40,    41,     9,    10,    11,
      12,    34,    35,    36,    37,    38,    39,    40,    41,    16,
       3,    18,    19,    20,    21,    22,    23,    24,     9,    10,
      11,    12,     3,     3,    30,    15,    17,    24,     3,    13,
       2,    -1,   153,   173,    11
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,     0,     1,     4,     5,     6,     7,     8,
      24,    25,    26,    27,    32,    43,    44,    48,    49,    54,
      55,    56,    59,    65,    66,     3,    15,    24,    24,    24,
      13,     5,     7,     8,    66,    16,    16,    14,    57,    16,
      16,    24,     3,    13,     3,    13,     3,    13,    16,    18,
      19,    20,    21,    22,    23,    24,    63,    64,    24,    24,
      24,    24,    19,    62,    63,    64,    62,    60,    61,    65,
      62,    24,     3,    13,    19,    24,    16,    18,    24,    64,
      20,    24,    16,    22,    63,    22,     3,     3,     3,     9,
      10,    11,    12,     3,    13,    13,    13,    13,    17,    34,
      35,    36,    37,    38,    39,    40,    41,    17,    33,    60,
      17,    13,    63,     3,     3,    24,     3,     3,     3,     3,
      17,    17,    63,    63,    63,    63,    19,    64,    20,    63,
      57,    62,    62,    62,    62,    62,    62,    62,    62,    57,
      16,    57,    23,     3,     3,     3,     3,     3,     3,    61,
      28,    31,    50,    51,    52,    62,    61,     3,    15,    58,
      62,    30,    52,    58,    17,    58,    62,    42,    30,    61,
      58,     3,    57,    61,    29,    53,    24,    61,    53,     3,
      13,    58,    63,    17,    57,    61,    58
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 74 "yacc.y"
    {printf("\nProgram End \n\n");}
    break;

  case 3:
#line 76 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"code: code line --> Line Number (%d) \n", yylineno);}
    break;

  case 4:
#line 77 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"code: Epsilon   --> Line Number (%d) \n", yylineno); (yyval.nPtr)=NULL;}
    break;

  case 5:
#line 81 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"line: exp( )\n");}
    break;

  case 8:
#line 87 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"switchcase: SWITCH( ) Condition( ) newscope_open switchstmt( ) newscope_close lineNumber(%d)\n",yylineno);}
    break;

  case 9:
#line 91 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"default: DEFAULT( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
    break;

  case 10:
#line 93 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"default: DEFAULT( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
    break;

  case 11:
#line 97 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"switchstmt: case( ) lineNumber(%d)\n",yylineno);}
    break;

  case 12:
#line 99 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"switchstmt: switchstmt( ) case( ) lineNumber(%d)\n",yylineno);}
    break;

  case 13:
#line 103 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"case: CASE( ) Condition( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
    break;

  case 14:
#line 105 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"case: CASE( ) Condition( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
    break;

  case 15:
#line 107 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"case: default( ) lineNumber(%d)\n",yylineno);}
    break;

  case 16:
#line 111 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"break: BREAK( ) SEMICOLON( ) lineNumber(%d)\n",yylineno);}
    break;

  case 17:
#line 115 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"repuntil: REPEAT( ) newscope_open statments( ) UNTIL( ) Condition( ) newscope_close lineNumber(%d)\n",yylineno);}
    break;

  case 18:
#line 121 "yacc.y"
    {
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Whileloop: WHILE( ) Condition( ) newscope_open statments( ) newscope_close lineNumber(%d)\n" ,yylineno);
            }
    break;

  case 19:
#line 128 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Forloop: FOR( ) BRACKET_OPEN IDENTIFIER( ) OPERATOR_ASSIGNMENT VALUE_INT( ) SEMICOLON condition( ) SEMICOLON IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) BRACKET_CLOSE newscope_open statments( ) newscope_close lineNumber(%d)\n",yylineno);}
    break;

  case 20:
#line 132 "yacc.y"
    {
                scopenumber++;
                tableptr= createNewScope(tableptr, sizeof(nodeType));
                (yyval.string)=(yyvsp[(1) - (1)].string);
            }
    break;

  case 21:
#line 138 "yacc.y"
    {
                scopenumber--;
                tableptr=tableptr->prev;
                (yyval.string)=(yyvsp[(1) - (1)].string);
            }
    break;

  case 22:
#line 145 "yacc.y"
    {
            FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"ifstatment: IF ( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE newscope_open statment( ) newscope_close ELSE( ) newscope_open statment( ) newscope_close lineNumber(%d)\n",yylineno);
            }
    break;

  case 23:
#line 150 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"ifstatment: IF( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE newscope_open statment( ) newscope_close lineNumber(%d) \n",yylineno);}
    break;

  case 24:
#line 155 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"statment: exp( ) lineNumber(%d)\n",yylineno);}
    break;

  case 25:
#line 159 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"statments: statment( ) lineNumber(%d)\n",yylineno);}
    break;

  case 26:
#line 161 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"statments: statments( ) statment( )lineNumber(%d)\n",yylineno);}
    break;

  case 27:
#line 165 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) L( ) Condition( ) lineNumber(%d)\n",yylineno);}
    break;

  case 28:
#line 167 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) G( ) Condition( )lineNumber(%d)\n",yylineno);}
    break;

  case 29:
#line 169 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) LE( ) Condition( )lineNumber(%d)\n",yylineno);}
    break;

  case 30:
#line 171 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) GE( ) Condition( )lineNumber(%d)\n",yylineno);}
    break;

  case 31:
#line 173 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) EQ( ) Condition( )lineNumber(%d)\n",yylineno);}
    break;

  case 32:
#line 175 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) NE( ) Condition( )lineNumber(%d)\n",yylineno);}
    break;

  case 33:
#line 177 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) OR( ) Condition( ) lineNumber(%d)\n",yylineno);}
    break;

  case 34:
#line 179 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) AND( ) Condition( )lineNumber(%d)\n",yylineno);}
    break;

  case 35:
#line 181 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Arithmetic lineNumber(%d)\n",yylineno);}
    break;

  case 36:
#line 183 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: VALUE_STRING( ) lineNumber(%d)\n",yylineno);}
    break;

  case 37:
#line 185 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Boolexp lineNumber(%d)\n",yylineno);}
    break;

  case 38:
#line 193 "yacc.y"
    {// mul=1,divide=2,add=3,sub=4
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[(1) - (3)].nPtr);
                Ntype2=(yyvsp[(3) - (3)].nPtr);
                
                Ntype->final_int=1;
                Ntype->final_float=1.0;
                
                Ntype=arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,1); //MULTIPLY = 1
                
               // sendtotest(Ntype,1);
                (yyval.nPtr)=Ntype;
             FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_MULTIPLY( ) Arithmetic( )lineNumber(%d)\n",yylineno);
            }
    break;

  case 39:
#line 213 "yacc.y"
    {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[(1) - (3)].nPtr);
                Ntype2=(yyvsp[(3) - (3)].nPtr);

                Ntype->final_int=1;
                Ntype->final_float=1.0;
                
                Ntype=arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,2);  //DIVIDE = 2
                ops=0;
                //sendtotest(Ntype,2);
                (yyval.nPtr)=Ntype;

                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_DIVIDE( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
    break;

  case 40:
#line 233 "yacc.y"
    {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[(1) - (3)].nPtr);
                Ntype2=(yyvsp[(3) - (3)].nPtr);

                Ntype->final_int=0;
                Ntype->final_float=0.0;
                
                Ntype=arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,3);  //ADD = 3
                //sendtotest(Ntype,3);
                (yyval.nPtr)=Ntype;
                
            
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_PLUS( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
    break;

  case 41:
#line 253 "yacc.y"
    {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[(1) - (3)].nPtr);
                Ntype2=(yyvsp[(3) - (3)].nPtr);

                Ntype->final_int=0;
                Ntype->final_float=0.0;

                arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,4);   //SUBTRACT = 4
                //sendtotest(Ntype,4);
                (yyval.nPtr)=Ntype;
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_SUBTRACT( ) Arithmetic( ) lineNumber(%d)\n",yylineno);}
    break;

  case 42:
#line 272 "yacc.y"
    {
                nodeType* Ntype;
                nodeType*  Ntype1;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype1=(yyvsp[(2) - (3)].nPtr);
                Ntype->generaltype=Ntype1->generaltype;
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: BRACKET_OPEN Arithmetic( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);
                (yyval.nPtr)=Ntype;
            }
    break;

  case 43:
#line 284 "yacc.y"
    {
                nodeType* Ntype;
                Const* ptr;
                ptr=(yyvsp[(1) - (1)].ForConst);
                Ntype=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Con; //constant number
                Ntype->con=*ptr;
                Ntype->final_int=ptr->intpls;
                Ntype->generaltype=Int;
                (yyval.nPtr)=Ntype;
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: VALUE_INT( ) lineNumber(%d)\n",yylineno);

            }
    break;

  case 44:
#line 300 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=(yyvsp[(1) - (1)].ForConst);
                Ntype->typeofvariable=Con; //constant number
                Ntype->con=*ptr;
                Ntype->final_float=ptr->floatpls;
                Ntype->generaltype=Float;
                (yyval.nPtr)=Ntype;
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: VALUE_FLOAT( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 45:
#line 315 "yacc.y"
    {   
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[(1) - (1)].string);
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->generaltype=Ntype->id.type;
                Ntype->id.check=loadops;
                (yyval.nPtr)=Ntype;

                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 46:
#line 333 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Boolexp: BRACKET_OPEN VALUE_BOOL( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);(yyval.ForConst)=(yyvsp[(2) - (3)].ForConst);}
    break;

  case 47:
#line 335 "yacc.y"
    {
                Const* ptr;
                ptr=malloc(sizeof(Const));
                ptr=(yyvsp[(2) - (2)].ForConst);
                if (strcmp(ptr->others,"true")==0)
                    ptr->others="false"; 
                else 
                    ptr->others="true";
                (yyval.ForConst)=ptr;
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Boolexp: OPERATOR_NOT( ) VALUE_BOOL( )lineNumber(%d)\n",yylineno);
            }
    break;

  case 48:
#line 347 "yacc.y"
    {
                (yyval.ForConst)=(yyvsp[(1) - (1)].ForConst);
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Boolexp:VALUE_BOOL( )lineNumber(%d)\n",yylineno);
            }
    break;

  case 49:
#line 355 "yacc.y"
    {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=(yyvsp[(3) - (4)].nPtr);
                Ntype->id.name=(yyvsp[(1) - (4)].string);
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
                
                Ntype->id.check=store;
                sendtotest(arthmetic_ptr,-1);
                sendtotest(Ntype,-1);
                ops=0;
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 50:
#line 401 "yacc.y"
    {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                nodeType * check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=(yyvsp[(4) - (5)].nPtr);
                Ntype->constant=false;
                Ntype->id.name=(yyvsp[(2) - (5)].string); 
                Ntype->id.declaration++;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                Ntype->typeofvariable=Id;
                Ntype->id.type=(yyvsp[(1) - (5)].type); 
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
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); fprintf(fpp,"error type miss match\n");
                    panic(yylineno);
                }
                Ntype->final_int=arthmetic_ptr->final_int;
                Ntype->final_float=arthmetic_ptr->final_float;
                Ntype->id.check=store;
                sendtotest(arthmetic_ptr,-1);
                sendtotest(Ntype,-1);

                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 51:
#line 475 "yacc.y"
    {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                nodeType* check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.type=(yyvsp[(2) - (6)].type); 
                Ntype->id.name=(yyvsp[(3) - (6)].string);
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=(yyvsp[(5) - (6)].nPtr);
                Ntype->constant=true;
                Ntype->id.declaration++;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                Ntype->typeofvariable=Id;
                 Ntype->id.check=store;
                Ntype->id.value= arthmetic_ptr->id.value;
                Ntype->id.othertype=arthmetic_ptr->id.type;

                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_INT( ) lineNumber(%d) \n",yylineno);
            }
    break;

  case 52:
#line 505 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[(2) - (3)].string);
                Ntype->typeofvariable=Id;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                } 
                Ntype->id.type=(yyvsp[(1) - (3)].type);
                Ntype->id.check=load;
                sendtotest(Ntype,-1);
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: datatype( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);

            }
    break;

  case 53:
#line 530 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=(yyvsp[(3) - (4)].ForConst);
                Ntype->con=*ptr;
                Ntype->id.name= (yyvsp[(1) - (4)].string);
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=ptr->t;
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) Boolexp( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 54:
#line 550 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[(5) - (6)].ForConst);
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.check=store;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->id.declaration++;
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[(3) - (6)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) TYPE_BOOL( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_BOOL( ) lineNumber(%d) \n",yylineno);
            }
    break;

  case 55:
#line 583 "yacc.y"
    {
                
                nodeType* check;
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); 
                fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[(4) - (5)].ForConst);
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.check=store;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->constant=false;
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[(2) - (5)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : datatype( ) TYPE_BOOL( ) OPERATOR_ASSIGNMENT VALUE_BOOL( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 56:
#line 617 "yacc.y"
    {
                nodeType* Ntype;
                nodeType* check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=Bool;
                Ntype->id.check=load;  
                Ntype->id.name=(yyvsp[(2) - (3)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : datatype( ) TYPE_BOOL( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 57:
#line 642 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=(yyvsp[(4) - (5)].string);
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                Ntype->id.value=Ntype1->id.value;
                Ntype->id.check=store;
                Ntype->id.type=Bool; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[(2) - (5)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 58:
#line 674 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=(yyvsp[(5) - (6)].string);
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                if(strcmp(Ntype1->id.value,"true")==0)
                    Ntype->id.value="false";
                else 
                    Ntype->id.value="true";
            
                Ntype->id.check=store;
                Ntype->id.type=Bool; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[(2) - (6)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 59:
#line 712 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType * check;
                Const* ptr;
                ptr=(yyvsp[(5) - (6)].ForConst);
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype1->con=*ptr;
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[(3) - (6)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d) \n",yylineno);
            }
    break;

  case 60:
#line 745 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[(4) - (5)].ForConst);
                Ntype1->con=*ptr;
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=(yyvsp[(2) - (5)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 61:
#line 778 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=String; 
                Ntype->id.name=(yyvsp[(2) - (3)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                Ntype->id.check= load;
                sendtotest(Ntype,-1);
                
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                
                fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_STRING( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 62:
#line 804 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=(yyvsp[(3) - (4)].ForConst);
                Ntype1->con=*ptr;
                Ntype->id.name=(yyvsp[(1) - (4)].string); 
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.othertype= String;
                Ntype->id.value=ptr->others;
                Ntype->id.check=store;
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 63:
#line 825 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=(yyvsp[(4) - (5)].string);
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                Ntype->id.value=Ntype1->id.value;
                Ntype->id.check=store;
                Ntype->id.type=String; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[(2) - (5)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 64:
#line 857 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                nodeType* check;
                Const* ptr;
                ptr=(yyvsp[(5) - (6)].ForConst);
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.scope=scopenumber;
                Ntype->id.check=store;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.othertype=ptr->t;
                Ntype->id.type=Char;
                Ntype->constant=true;
                Ntype->id.declaration++; 
                Ntype->typeofvariable=Id;
                Ntype->id.name=(yyvsp[(3) - (6)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }

                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d) \n",yylineno);
            }
    break;

  case 65:
#line 891 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Const* ptr;
                ptr=(yyvsp[(4) - (5)].ForConst);
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=ptr->t;
                Ntype->id.check=store;
                Ntype->id.type=Char; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[(2) - (5)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 66:
#line 923 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=(yyvsp[(4) - (5)].string);
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                Ntype->id.value=Ntype1->id.value;
                Ntype->id.check=store;
                Ntype->id.type=Char; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[(2) - (5)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 67:
#line 956 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.type=Char;
                Ntype->id.check=load;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=(yyvsp[(2) - (3)].string); 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( )lineNumber(%d)\n",yylineno);
            }
    break;

  case 68:
#line 980 "yacc.y"
    {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=(yyvsp[(3) - (4)].ForConst);
                Ntype1->con=*ptr;
                Ntype->id.name=(yyvsp[(1) - (4)].string);
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=Char; 
               
                Ntype->typeofvariable=Id;
                (yyval.nPtr)=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }
    break;

  case 69:
#line 1004 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: ifstatment( )lineNumber(%d)\n",yylineno);}
    break;

  case 70:
#line 1007 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: Whileloop( )lineNumber(%d)\n",yylineno);}
    break;

  case 71:
#line 1010 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: switchcase( ) lineNumber(%d)\n",yylineno);}
    break;

  case 72:
#line 1012 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: repuntil( ) lineNumber(%d)\n",yylineno);}
    break;

  case 73:
#line 1015 "yacc.y"
    {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: Forloop( ) lineNumber(%d)\n",yylineno);}
    break;

  case 74:
#line 1019 "yacc.y"
    {
            
             FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"datatype: TYPE_INT( )\n");
             (yyval.type)=Int;
        }
    break;

  case 75:
#line 1025 "yacc.y"
    {
            
            FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"datatype: TYPE_FLOAT( )\n");
            (yyval.type)=Float;
        }
    break;


/* Line 1267 of yacc.c.  */
#line 2711 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1034 "yacc.y"


void yyerror(char *s){
    FILE * fpp = fopen("Outputs/Errors-Warnings.txt","a");
    fprintf(fpp,"Error: %s at line number %d\n",s,yylineno);
    fclose(fpp);
}


int main (void)
{
    symboltable=newArrayListSized(sizeof(nodeType),100);
    tableptr=symboltable;
    scopenumber=0;

    yyin = fopen("test_files/finaltest.txt","r+");
    if(yyin == NULL)
        printf("Error NULL \n");
    else{
        printf("Parsing... \n\n");
        yyparse();
    }
    return 0;
      
}



