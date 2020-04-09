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
    OPERATOR_PLUS = 261,
    OPEARTOR_MINUS = 262,
    OPERATOR_MULTIPLY = 263,
    OPERATOR_DIVIDE = 264,
    OPERATOR_ASSIGNMENT = 265,
    ARGUMENT_OPENBRACKET = 266,
    ARGUMENT_CLOSEBRACKET = 267,
    VALUE_INT = 268,
    VALUE_STRING = 269,
    IDENTIFIER = 270,
    ID = 271,
    NUM = 272,
    IF = 273,
    THEN = 274,
    LE = 275,
    GE = 276,
    EQ = 277,
    NE = 278,
    OR = 279,
    AND = 280,
    ELSE = 281,
    L = 282,
    G = 283
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define TYPE_INT 259
#define TYPE_STRING 260
#define OPERATOR_PLUS 261
#define OPEARTOR_MINUS 262
#define OPERATOR_MULTIPLY 263
#define OPERATOR_DIVIDE 264
#define OPERATOR_ASSIGNMENT 265
#define ARGUMENT_OPENBRACKET 266
#define ARGUMENT_CLOSEBRACKET 267
#define VALUE_INT 268
#define VALUE_STRING 269
#define IDENTIFIER 270
#define ID 271
#define NUM 272
#define IF 273
#define THEN 274
#define LE 275
#define GE 276
#define EQ 277
#define NE 278
#define OR 279
#define AND 280
#define ELSE 281
#define L 282
#define G 283

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "yacc.y" /* yacc.c:1909  */

    char* string;

#line 114 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
