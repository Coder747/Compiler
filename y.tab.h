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
    OPERATOR_PLUS = 263,
    OPEARTOR_MINUS = 264,
    OPERATOR_MULTIPLY = 265,
    OPERATOR_DIVIDE = 266,
    OPERATOR_ASSIGNMENT = 267,
    CURLY_OPEN = 268,
    CURLY_CLOSE = 269,
    VALUE_INT = 270,
    BOOL = 271,
    VALUE_STRING = 272,
    IDENTIFIER = 273,
    CONST = 274,
    IF = 275,
    SWITCH = 276,
    CASE = 277,
    BREAK = 278,
    COLON = 279,
    DEFAULT = 280,
    REPEAT = 281,
    UNTIL = 282,
    L = 283,
    G = 284,
    LE = 285,
    GE = 286,
    EQ = 287,
    NE = 288,
    OR = 289,
    AND = 290,
    ELSE = 291,
    WHILE = 292
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define TYPE_INT 259
#define TYPE_STRING 260
#define TYPE_FLOAT 261
#define TYPE_BOOL 262
#define OPERATOR_PLUS 263
#define OPEARTOR_MINUS 264
#define OPERATOR_MULTIPLY 265
#define OPERATOR_DIVIDE 266
#define OPERATOR_ASSIGNMENT 267
#define CURLY_OPEN 268
#define CURLY_CLOSE 269
#define VALUE_INT 270
#define BOOL 271
#define VALUE_STRING 272
#define IDENTIFIER 273
#define CONST 274
#define IF 275
#define SWITCH 276
#define CASE 277
#define BREAK 278
#define COLON 279
#define DEFAULT 280
#define REPEAT 281
#define UNTIL 282
#define L 283
#define G 284
#define LE 285
#define GE 286
#define EQ 287
#define NE 288
#define OR 289
#define AND 290
#define ELSE 291
#define WHILE 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "yacc.y" /* yacc.c:1909  */

    int num;
    char* string;

#line 133 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
