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
    OPERATOR_PLUS = 260,
    OPEARTOR_MINUS = 261,
    OPERATOR_MULTIPLY = 262,
    OPERATOR_DIVIDE = 263,
    OPERATOR_ASSIGNMENT = 264,
    ARGUMENT_OPENBRACKER = 265,
    ARGUMENT_CLOSEBRACKET = 266,
    VALUE_INT = 267,
    IDENTIFIER = 268,
    ID = 269,
    NUM = 270,
    IF = 271,
    THEN = 272,
    LE = 273,
    GE = 274,
    EQ = 275,
    NE = 276,
    OR = 277,
    AND = 278,
    ELSE = 279,
    L = 280,
    G = 281
  };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define TYPE_INT 259
#define OPERATOR_PLUS 260
#define OPEARTOR_MINUS 261
#define OPERATOR_MULTIPLY 262
#define OPERATOR_DIVIDE 263
#define OPERATOR_ASSIGNMENT 264
#define ARGUMENT_OPENBRACKER 265
#define ARGUMENT_CLOSEBRACKET 266
#define VALUE_INT 267
#define IDENTIFIER 268
#define ID 269
#define NUM 270
#define IF 271
#define THEN 272
#define LE 273
#define GE 274
#define EQ 275
#define NE 276
#define OR 277
#define AND 278
#define ELSE 279
#define L 280
#define G 281

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "yacc.y" /* yacc.c:1909  */

    char* string;

#line 110 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
