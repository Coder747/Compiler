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




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int yylex(void);
FILE * yyin;
int yylineno;
void yyerror(char *s);


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
#line 13 "yacc.y"
{
    int num;
    char* string;
}
/* Line 193 of yacc.c.  */
#line 198 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 211 "y.tab.c"

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
#define YYLAST   397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  163

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

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
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    14,    22,    26,
      31,    33,    36,    41,    47,    49,    52,    61,    69,    85,
     102,   114,   122,   124,   126,   129,   133,   137,   141,   145,
     149,   153,   157,   161,   163,   165,   169,   173,   177,   181,
     185,   187,   189,   191,   196,   203,   209,   214,   221,   227,
     232,   239,   245,   250,   257,   263,   267,   269,   271,   273,
     275,   277,   279,   281,   283,   285
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      45,     0,    -1,    46,    -1,    46,    47,    -1,    -1,    61,
      -1,     1,     3,    -1,    26,    16,    59,    17,    14,    50,
      15,    -1,    30,    29,    58,    -1,    30,    29,    58,    52,
      -1,    51,    -1,    50,    51,    -1,    27,    59,    29,    58,
      -1,    27,    59,    29,    58,    52,    -1,    49,    -1,    28,
       3,    -1,    31,    14,    58,    32,    16,    59,    17,    15,
      -1,    42,    16,    59,    17,    14,    58,    15,    -1,    43,
      16,    23,    13,    18,     3,    59,     3,    23,    13,    60,
      17,    14,    58,    15,    -1,    43,    16,    62,    23,    13,
      18,     3,    59,     3,    23,    13,    60,    17,    14,    58,
      15,    -1,    25,    16,    59,    17,    14,    58,    15,    41,
      14,    58,    15,    -1,    25,    16,    59,    17,    14,    58,
      15,    -1,    61,    -1,    57,    -1,    58,    57,    -1,    59,
      33,    59,    -1,    59,    34,    59,    -1,    59,    35,    59,
      -1,    59,    36,    59,    -1,    59,    37,    59,    -1,    59,
      38,    59,    -1,    59,    39,    59,    -1,    59,    40,    59,
      -1,    60,    -1,    19,    -1,    60,    11,    60,    -1,    60,
      12,    60,    -1,    60,     9,    60,    -1,    60,    10,    60,
      -1,    16,    60,    17,    -1,    18,    -1,    21,    -1,    23,
      -1,    23,    13,    60,     3,    -1,    24,    62,    23,    13,
      60,     3,    -1,    62,    23,    13,    60,     3,    -1,    23,
      13,    19,     3,    -1,    24,    62,    23,    13,    19,     3,
      -1,    62,    23,    13,    19,     3,    -1,    23,    13,    20,
       3,    -1,    24,    62,    23,    13,    20,     3,    -1,    62,
      23,    13,    20,     3,    -1,    23,    13,    22,     3,    -1,
      24,    62,    23,    13,    22,     3,    -1,    62,    23,    13,
      22,     3,    -1,    62,    23,     3,    -1,    56,    -1,    54,
      -1,    48,    -1,    53,    -1,    55,    -1,     4,    -1,     5,
      -1,     6,    -1,     8,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    44,    45,    48,    50,    53,    57,    59,
      63,    65,    69,    71,    73,    77,    81,    88,    92,    94,
      99,   103,   108,   112,   114,   118,   120,   122,   124,   126,
     128,   130,   132,   134,   136,   141,   143,   145,   147,   149,
     151,   153,   155,   161,   164,   167,   170,   172,   174,   177,
     179,   181,   184,   186,   188,   192,   195,   198,   201,   203,
     206,   210,   212,   214,   216,   218
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
  "BRACKET_CLOSE", "VALUE_INT", "VALUE_STRING", "VALUE_CHAR",
  "VALUE_FLOAT", "VALUE_BOOL", "IDENTIFIER", "CONST", "IF", "SWITCH",
  "CASE", "BREAK", "COLON", "DEFAULT", "REPEAT", "UNTIL", "L", "G", "LE",
  "GE", "EQ", "NE", "OR", "AND", "ELSE", "WHILE", "FOR", "$accept",
  "program", "code", "line", "switchcase", "default", "switchstmt", "case",
  "break", "repuntil", "Whileloop", "Forloop", "ifstatment", "statment",
  "statments", "Condition", "Arithmetic", "exp", "datatype", 0
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
     295,   296,   297,   298
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    49,
      50,    50,    51,    51,    51,    52,    53,    54,    55,    55,
      56,    56,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    62,    62,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     2,     7,     3,     4,
       1,     2,     4,     5,     1,     2,     8,     7,    15,    16,
      11,     7,     1,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     3,     3,     3,     3,     3,
       1,     1,     1,     4,     6,     5,     4,     6,     5,     4,
       6,     5,     4,     6,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    61,    62,    63,    65,    64,
       0,     0,     0,     0,     0,     0,     0,     3,    58,    59,
      57,    60,    56,     5,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,    41,     0,
      42,     0,     0,    34,     0,    33,     0,    23,     0,    22,
       0,     0,     0,    55,     0,     0,    46,    49,    52,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,    39,    37,    38,    35,    36,     0,
       0,     0,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,     0,     0,     0,     0,     0,    48,    51,    54,
      45,    47,    50,    53,    44,     0,     0,     0,    14,     0,
      10,     0,     0,     0,     0,    21,     0,     0,     7,    11,
       0,    17,     0,     0,     0,     0,     8,    16,     0,     0,
       0,    12,     0,     9,     0,     0,     0,    13,    15,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,    18,   118,   119,   120,   143,    19,
      20,    21,    22,    47,    48,    44,    45,    49,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -78
static const yytype_int16 yypact[] =
{
     -78,     3,   112,   -78,    12,   -78,   -78,   -78,   -78,   -78,
      -4,   389,    41,    49,    26,    51,    53,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,    43,   -78,   339,    54,    74,    74,
     251,    74,     6,     4,   363,   -78,    71,    73,   -78,    77,
     -78,    50,    68,   -78,   -15,    21,   250,   -78,   125,   -78,
     294,    75,    78,   -78,   347,   130,   -78,   -78,   -78,   -78,
     363,   363,   363,   363,   355,    82,    74,    74,    74,    74,
      74,    74,    74,    74,    86,    90,   -78,    95,    97,   111,
     122,   123,   131,    61,   -78,    44,    44,   -78,   -78,   141,
     142,   143,   311,   251,   -78,   -78,   -78,   -78,   -78,   -78,
     354,   354,    22,    74,   251,   149,   110,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   154,    74,   124,   -78,    24,
     -78,   302,   167,    74,   160,   129,   314,   251,   -78,   -78,
     150,   -78,   262,    74,   152,   251,    79,   -78,   153,   270,
     251,    79,   161,   -78,   168,   172,   196,   -78,   -78,   363,
     170,   -78,   177,   363,   185,   219,   251,   191,   209,   251,
     -78,   238,   -78
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   -78,   -78,   -78,   -78,   -78,    65,    66,   -78,
     -78,   -78,   -78,   -47,   -77,   -25,   -26,   204,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -3
static const yytype_int16 yytable[] =
{
      41,    76,    65,     3,    46,    27,    50,    53,    55,    26,
       5,     6,     7,     8,     9,    25,   115,    54,    66,    67,
      68,    69,    70,    71,    72,    73,    52,   122,    83,    51,
      60,    61,    62,    63,    85,    86,    87,    88,    92,   128,
      30,    94,    95,    96,    97,    98,    99,   100,   101,   116,
     136,   116,   117,    59,   117,    62,    63,    28,   141,    60,
      61,    62,    63,   146,   110,    29,    33,    31,    76,    32,
      60,    61,    62,    63,    56,    76,    57,    42,   121,   158,
      58,    64,   161,     5,     6,     7,     8,     9,    78,    76,
      34,   126,    35,    43,    76,    38,    93,    40,   132,    76,
     102,    79,    10,    11,    12,    13,   103,   142,   139,   104,
      14,    76,    -2,     4,    76,   105,     5,     6,     7,     8,
       9,    15,    16,   152,   106,   107,   108,   155,   124,     5,
       6,     7,     8,     9,   109,    10,    11,    12,    13,    60,
      61,    62,    63,    14,   111,   112,   113,    84,    10,    11,
      12,    13,   123,   127,    15,    16,    14,    75,     5,     6,
       7,     8,     9,   133,   148,   137,   140,    15,    16,   125,
     134,     5,     6,     7,     8,     9,   144,    10,    11,    12,
      13,   149,   131,   153,   129,    14,    60,    61,    62,    63,
      10,    11,    12,    13,   154,   150,    15,    16,    14,   156,
       5,     6,     7,     8,     9,   159,    23,   147,     0,    15,
      16,   151,     0,     5,     6,     7,     8,     9,     0,    10,
      11,    12,    13,     0,   160,     0,     0,    14,    60,    61,
      62,    63,    10,    11,    12,    13,   157,     0,    15,    16,
      14,     0,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    15,    16,   162,     0,     5,     6,     7,     8,     9,
       0,    10,    11,    12,    13,   138,     0,    74,     0,    14,
       0,     0,     0,   145,    10,    11,    12,    13,     0,     0,
      15,    16,    14,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    15,    16,    66,    67,    68,    69,    70,
      71,    72,    73,    66,    67,    68,    69,    70,    71,    72,
      73,    77,     0,     0,   114,     0,     0,     0,     0,   130,
      60,    61,    62,    63,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    66,    67,    68,    69,    70,
      71,    72,    73,   135,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,    34,     0,    35,    36,    37,
      38,    39,    40,    34,     0,    35,    80,    81,    38,    82,
      40,    34,     0,    35,    89,    90,    38,    91,    40,    34,
       0,    35,     0,     0,    38,     0,    40,    66,    67,    68,
      69,    70,    71,     5,     6,     7,     8,     9
};

static const yytype_int16 yycheck[] =
{
      26,    48,    17,     0,    29,    11,    31,     3,    34,    13,
       4,     5,     6,     7,     8,     3,    93,    13,    33,    34,
      35,    36,    37,    38,    39,    40,    32,   104,    54,    23,
       9,    10,    11,    12,    60,    61,    62,    63,    64,    15,
      14,    66,    67,    68,    69,    70,    71,    72,    73,    27,
     127,    27,    30,     3,    30,    11,    12,    16,   135,     9,
      10,    11,    12,   140,     3,    16,    23,    16,   115,    16,
       9,    10,    11,    12,     3,   122,     3,    23,   103,   156,
       3,    13,   159,     4,     5,     6,     7,     8,    13,   136,
      16,   116,    18,    19,   141,    21,    14,    23,   123,   146,
      14,    23,    23,    24,    25,    26,    16,    28,   133,    14,
      31,   158,     0,     1,   161,    18,     4,     5,     6,     7,
       8,    42,    43,   149,    13,     3,     3,   153,    18,     4,
       5,     6,     7,     8,     3,    23,    24,    25,    26,     9,
      10,    11,    12,    31,     3,     3,     3,    17,    23,    24,
      25,    26,     3,    29,    42,    43,    31,    32,     4,     5,
       6,     7,     8,     3,     3,    15,    14,    42,    43,    15,
      41,     4,     5,     6,     7,     8,    23,    23,    24,    25,
      26,    13,    15,    13,   119,    31,     9,    10,    11,    12,
      23,    24,    25,    26,    17,    23,    42,    43,    31,    14,
       4,     5,     6,     7,     8,    14,     2,   141,    -1,    42,
      43,    15,    -1,     4,     5,     6,     7,     8,    -1,    23,
      24,    25,    26,    -1,    15,    -1,    -1,    31,     9,    10,
      11,    12,    23,    24,    25,    26,    17,    -1,    42,    43,
      31,    -1,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    42,    43,    15,    -1,     4,     5,     6,     7,     8,
      -1,    23,    24,    25,    26,     3,    -1,    17,    -1,    31,
      -1,    -1,    -1,     3,    23,    24,    25,    26,    -1,    -1,
      42,    43,    31,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    42,    43,    33,    34,    35,    36,    37,
      38,    39,    40,    33,    34,    35,    36,    37,    38,    39,
      40,    17,    -1,    -1,     3,    -1,    -1,    -1,    -1,    17,
       9,    10,    11,    12,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    33,    34,    35,    36,    37,
      38,    39,    40,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    40,    16,    -1,    18,    19,    20,
      21,    22,    23,    16,    -1,    18,    19,    20,    21,    22,
      23,    16,    -1,    18,    19,    20,    21,    22,    23,    16,
      -1,    18,    -1,    -1,    21,    -1,    23,    33,    34,    35,
      36,    37,    38,     4,     5,     6,     7,     8
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    45,    46,     0,     1,     4,     5,     6,     7,     8,
      23,    24,    25,    26,    31,    42,    43,    47,    48,    53,
      54,    55,    56,    61,    62,     3,    13,    62,    16,    16,
      14,    16,    16,    23,    16,    18,    19,    20,    21,    22,
      23,    60,    23,    19,    59,    60,    59,    57,    58,    61,
      59,    23,    62,     3,    13,    60,     3,     3,     3,     3,
       9,    10,    11,    12,    13,    17,    33,    34,    35,    36,
      37,    38,    39,    40,    17,    32,    57,    17,    13,    23,
      19,    20,    22,    60,    17,    60,    60,    60,    60,    19,
      20,    22,    60,    14,    59,    59,    59,    59,    59,    59,
      59,    59,    14,    16,    14,    18,    13,     3,     3,     3,
       3,     3,     3,     3,     3,    58,    27,    30,    49,    50,
      51,    59,    58,     3,    18,    15,    59,    29,    15,    51,
      17,    15,    59,     3,    41,    29,    58,    15,     3,    59,
      14,    58,    28,    52,    23,     3,    58,    52,     3,    13,
      23,    15,    60,    13,    17,    60,    14,    17,    58,    14,
      15,    58,    15
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
#line 42 "yacc.y"
    {printf("\nProgram End \n\n");}
    break;

  case 3:
#line 44 "yacc.y"
    {printf("code: code line --> Line Number (%d) \n", yylineno);}
    break;

  case 4:
#line 45 "yacc.y"
    {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); (yyval.string)=NULL;}
    break;

  case 5:
#line 49 "yacc.y"
    {printf("line: exp(%s)\n",(yyvsp[(1) - (1)].string));}
    break;

  case 7:
#line 54 "yacc.y"
    {printf("switchcase: SWITCH(%s) Condition(%s) CURLY_OPEN switchstmt(%s) CURLY_CLOSE lineNumber(%d)\n",(yyvsp[(1) - (7)].string),(yyvsp[(3) - (7)].string),(yyvsp[(6) - (7)].string),yylineno);}
    break;

  case 8:
#line 58 "yacc.y"
    {printf("default: DEFAULT(%s) COLON statments(%s) lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 9:
#line 60 "yacc.y"
    {printf("default: DEFAULT(%s) COLON statments(%s) break(%s) lineNumber(%d)\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].string),(yyvsp[(4) - (4)].string),yylineno);}
    break;

  case 10:
#line 64 "yacc.y"
    {printf("switchstmt: case(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 11:
#line 66 "yacc.y"
    {printf("switchstmt: switchstmt(%s) case(%s) lineNumber(%d)\n",(yyvsp[(1) - (2)].string),(yyvsp[(2) - (2)].string),yylineno);}
    break;

  case 12:
#line 70 "yacc.y"
    {printf("case: CASE(%s) Condition(%s) COLON statments(%s) lineNumber(%d)\n",(yyvsp[(1) - (4)].string),(yyvsp[(2) - (4)].string),(yyvsp[(4) - (4)].string),yylineno);}
    break;

  case 13:
#line 72 "yacc.y"
    {printf("case: CASE(%s) Condition(%s) COLON statments(%s) break(%s) lineNumber(%d)\n",(yyvsp[(1) - (5)].string),(yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].string),(yyvsp[(5) - (5)].string),yylineno);}
    break;

  case 14:
#line 74 "yacc.y"
    {printf("case: default(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 15:
#line 78 "yacc.y"
    {printf("break: BREAK(%s) SEMICOLON(%s) lineNumber(%d)\n",(yyvsp[(1) - (2)].string),(yyvsp[(2) - (2)].string),yylineno);}
    break;

  case 16:
#line 82 "yacc.y"
    {printf("repuntil: REPEAT(%s) CURLY_OPEN statments(%s) UNTIL(%s) Condition(%s) CURLY_CLOSE lineNumber(%d)\n",
            (yyvsp[(1) - (8)].string),(yyvsp[(3) - (8)].string),(yyvsp[(4) - (8)].string),(yyvsp[(6) - (8)].string),yylineno);}
    break;

  case 17:
#line 89 "yacc.y"
    {printf("Whileloop: WHILE(%s) Condition( %s ) CURLY_OPEN statments(%s) CURLY_CLOSE lineNumber(%d)\n" ,(yyvsp[(1) - (7)].string),(yyvsp[(3) - (7)].string),(yyvsp[(6) - (7)].string),yylineno);}
    break;

  case 18:
#line 93 "yacc.y"
    {printf("Forloop: FOR(%s) BRACKET_OPEN IDENTIFIER(%s) OPERATOR_ASSIGNMENT VALUE_INT(%s) SEMICOLON condition(%s) SEMICOLON IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) BRACKET_CLOSE CURLY_OPEN statments(%s) CURLY_CLOSE lineNumber(%d)\n",(yyvsp[(1) - (15)].string),(yyvsp[(3) - (15)].string),(yyvsp[(5) - (15)].string),(yyvsp[(7) - (15)].string),(yyvsp[(9) - (15)].string),(yyvsp[(11) - (15)].string),(yyvsp[(14) - (15)].string),yylineno);}
    break;

  case 19:
#line 95 "yacc.y"
    {printf("Forloop: FOR(%s) BRACKET_OPEN datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT VALUE_INT(%s) SEMICOLON condition(%s) SEMICOLON IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) BRACKET_CLOSE CURLY_OPEN statments(%s) CURLY_CLOSE lineNumber(%d)\n",(yyvsp[(1) - (16)].string),(yyvsp[(3) - (16)].string),(yyvsp[(4) - (16)].string),(yyvsp[(6) - (16)].string),(yyvsp[(8) - (16)].string),(yyvsp[(10) - (16)].string),(yyvsp[(12) - (16)].string),(yyvsp[(15) - (16)].string),yylineno);}
    break;

  case 20:
#line 100 "yacc.y"
    {printf("ifstatment: IF (%s) BRACKET_OPEN Condition(%s) BRACKET_CLOSE CURLY_OPEN statment(%s) CURLY_CLOSE ELSE(%s) CURLY_OPEN statment(%s) CURLY_CLOSE lineNumber(%d)\n"
            ,(yyvsp[(1) - (11)].string),(yyvsp[(3) - (11)].string),(yyvsp[(6) - (11)].string),(yyvsp[(8) - (11)].string),(yyvsp[(10) - (11)].string),yylineno);}
    break;

  case 21:
#line 104 "yacc.y"
    {printf("ifstatment: IF(%s) BRACKET_OPEN Condition(%d) BRACKET_CLOSE CURLY_OPEN statment(%s) CURLY_CLOSE lineNumber(%d) \n",(yyvsp[(1) - (7)].string),(yyvsp[(3) - (7)].string),(yyvsp[(6) - (7)].string),yylineno);}
    break;

  case 22:
#line 109 "yacc.y"
    {printf("statment: exp(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 23:
#line 113 "yacc.y"
    {printf("statments: statment(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 24:
#line 115 "yacc.y"
    {printf("statments: statments(%s) statment(%s)lineNumber(%d)\n",(yyvsp[(1) - (2)].string),(yyvsp[(2) - (2)].string),yylineno);}
    break;

  case 25:
#line 119 "yacc.y"
    {printf("Condition: Condition(%s) L(%s) Condition(%s) lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 26:
#line 121 "yacc.y"
    {printf("Condition: Condition(%s) G(%s) Condition(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 27:
#line 123 "yacc.y"
    {printf("Condition: Condition(%s) LE(%s) Condition(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 28:
#line 125 "yacc.y"
    {printf("Condition: Condition(%s) GE(%s) Condition(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 29:
#line 127 "yacc.y"
    {printf("Condition: Condition(%s) EQ(%s) Condition(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 30:
#line 129 "yacc.y"
    {printf("Condition: Condition(%s) NE(%s) Condition(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 31:
#line 131 "yacc.y"
    {printf("Condition: Condition(%s) OR(%s) Condition(%s) lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 32:
#line 133 "yacc.y"
    {printf("Condition: Condition(%s) AND(%s) Condition(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 33:
#line 135 "yacc.y"
    {printf("Condition: Arithmetic lineNumber(%d)\n",yylineno);}
    break;

  case 34:
#line 137 "yacc.y"
    {printf("Condition: VALUE_STRING(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 35:
#line 142 "yacc.y"
    {printf("Arithmetic: Arithmetic(%s) OPERATOR_MULTIPLY(%s) Arithmetic(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 36:
#line 144 "yacc.y"
    {printf("Arithmetic: Arithmetic(%s) OPERATOR_DIVIDE(%s) Arithmetic(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 37:
#line 146 "yacc.y"
    {printf("Arithmetic: Arithmetic(%s) OPERATOR_PLUS(%s) Arithmetic(%s)lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 38:
#line 148 "yacc.y"
    {printf("Arithmetic: Arithmetic(%s) OPERATOR_SUBTRACT(%s) Arithmetic(%s) lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 39:
#line 150 "yacc.y"
    {printf("Arithmetic: BRACKET_OPEN Arithmetic(%s) BRACKET_CLOSE lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),(yyvsp[(3) - (3)].string),yylineno);}
    break;

  case 40:
#line 152 "yacc.y"
    {printf("Arithmetic: VALUE_INT(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 41:
#line 154 "yacc.y"
    {printf("Arithmetic: VALUE_INT(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 42:
#line 156 "yacc.y"
    {printf("Arithmetic: IDENTIFIER(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 43:
#line 162 "yacc.y"
    {printf("exp : IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) lineNumber(%d)\n",(yyvsp[(1) - (4)].string),(yyvsp[(3) - (4)].string),yylineno);}
    break;

  case 44:
#line 165 "yacc.y"
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%s) lineNumber(%d) \n",(yyvsp[(1) - (6)].string),(yyvsp[(2) - (6)].string),(yyvsp[(3) - (6)].string),(yyvsp[(4) - (6)].string),(yyvsp[(5) - (6)].string),yylineno);}
    break;

  case 45:
#line 168 "yacc.y"
    {printf("exp : datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) lineNumber(%d)\n",(yyvsp[(1) - (5)].string),(yyvsp[(2) - (5)].string),(yyvsp[(4) - (5)].string),yylineno);}
    break;

  case 46:
#line 171 "yacc.y"
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d)\n",(yyvsp[(1) - (4)].string),(yyvsp[(2) - (4)].string),(yyvsp[(3) - (4)].string),yylineno);}
    break;

  case 47:
#line 173 "yacc.y"
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d) \n",(yyvsp[(1) - (6)].string),(yyvsp[(2) - (6)].string),(yyvsp[(3) - (6)].string),(yyvsp[(4) - (6)].string),(yyvsp[(5) - (6)].string),yylineno);}
    break;

  case 48:
#line 175 "yacc.y"
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d)\n",(yyvsp[(1) - (5)].string),(yyvsp[(2) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(4) - (5)].string),yylineno);}
    break;

  case 49:
#line 178 "yacc.y"
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d)\n",(yyvsp[(1) - (4)].string),(yyvsp[(2) - (4)].string),(yyvsp[(3) - (4)].string),yylineno);}
    break;

  case 50:
#line 180 "yacc.y"
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d) \n",(yyvsp[(1) - (6)].string),(yyvsp[(2) - (6)].string),(yyvsp[(3) - (6)].string),(yyvsp[(4) - (6)].string),(yyvsp[(5) - (6)].string),yylineno);}
    break;

  case 51:
#line 182 "yacc.y"
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d)\n",(yyvsp[(1) - (5)].string),(yyvsp[(2) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(4) - (5)].string),yylineno);}
    break;

  case 52:
#line 185 "yacc.y"
    {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d)\n",(yyvsp[(1) - (4)].string),(yyvsp[(2) - (4)].string),(yyvsp[(3) - (4)].string),yylineno);}
    break;

  case 53:
#line 187 "yacc.y"
    {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d) \n",(yyvsp[(1) - (6)].string),(yyvsp[(2) - (6)].string),(yyvsp[(3) - (6)].string),(yyvsp[(4) - (6)].string),(yyvsp[(5) - (6)].string),yylineno);}
    break;

  case 54:
#line 189 "yacc.y"
    {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d)\n",(yyvsp[(1) - (5)].string),(yyvsp[(2) - (5)].string),(yyvsp[(3) - (5)].string),(yyvsp[(4) - (5)].string),yylineno);}
    break;

  case 55:
#line 193 "yacc.y"
    {printf("exp: datatype(%s) IDENTIFIER(%s) lineNumber(%d)\n",(yyvsp[(1) - (3)].string),(yyvsp[(2) - (3)].string),yylineno);}
    break;

  case 56:
#line 196 "yacc.y"
    {printf("exp: ifstatment(%s)lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 57:
#line 199 "yacc.y"
    {printf("exp: Whileloop(%s)lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 58:
#line 202 "yacc.y"
    {printf("exp: switchcase(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 59:
#line 204 "yacc.y"
    {printf("exp: repuntil(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 60:
#line 207 "yacc.y"
    {printf("exp: Forloop(%s) lineNumber(%d)\n",(yyvsp[(1) - (1)].string),yylineno);}
    break;

  case 61:
#line 211 "yacc.y"
    {printf("datatype: TYPE_INT(%s)\n",(yyvsp[(1) - (1)].string));}
    break;

  case 62:
#line 213 "yacc.y"
    {printf("datatype: TYPE_STRING(%s)\n",(yyvsp[(1) - (1)].string));}
    break;

  case 63:
#line 215 "yacc.y"
    {printf("datatype: TYPE_FLOAT(%s)\n",(yyvsp[(1) - (1)].string));}
    break;

  case 64:
#line 217 "yacc.y"
    {printf("datatype: TYPE_CHAR(%s)\n",(yyvsp[(1) - (1)].string));}
    break;

  case 65:
#line 219 "yacc.y"
    {printf("datatype: TYPE_BOOL(%s)\n",(yyvsp[(1) - (1)].string));}
    break;


/* Line 1267 of yacc.c.  */
#line 1904 "y.tab.c"
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


#line 224 "yacc.y"


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




