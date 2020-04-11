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
    BRACKET_OPEN = 270,
    BRACKET_CLOSE = 271,
    VALUE_INT = 272,
    BOOL = 273,
    VALUE_STRING = 274,
    IDENTIFIER = 275,
    CONST = 276,
    IF = 277,
    SWITCH = 278,
    CASE = 279,
    BREAK = 280,
    COLON = 281,
    DEFAULT = 282,
    REPEAT = 283,
    UNTIL = 284,
    L = 285,
    G = 286,
    LE = 287,
    GE = 288,
    EQ = 289,
    NE = 290,
    OR = 291,
    AND = 292,
    ELSE = 293,
    WHILE = 294
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
#define BRACKET_OPEN 270
#define BRACKET_CLOSE 271
#define VALUE_INT 272
#define BOOL 273
#define VALUE_STRING 274
#define IDENTIFIER 275
#define CONST 276
#define IF 277
#define SWITCH 278
#define CASE 279
#define BREAK 280
#define COLON 281
#define DEFAULT 282
#define REPEAT 283
#define UNTIL 284
#define L 285
#define G 286
#define LE 287
#define GE 288
#define EQ 289
#define NE 290
#define OR 291
#define AND 292
#define ELSE 293
#define WHILE 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "yacc.y" /* yacc.c:1909  */

    int num;
    char* string;

#line 137 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
