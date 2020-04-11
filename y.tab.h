/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SEMICOLON = 258,
     TYPE_INT = 259,
     TYPE_STRING = 260,
     OPERATOR_PLUS = 261,
     OPEARTOR_MINUS = 262,
     OPERATOR_MULTIPLY = 263,
     OPERATOR_DIVIDE = 264,
     OPERATOR_ASSIGNMENT = 265,
     CURLY_OPEN = 266,
     CURLY_CLOSE = 267,
     VALUE_INT = 268,
     VALUE_STRING = 269,
     IDENTIFIER = 270,
     IF = 271,
     SWITCH = 272,
     CASE = 273,
     BREAK = 274,
     COLON = 275,
     DEFAULT = 276,
     L = 277,
     G = 278,
     LE = 279,
     GE = 280,
     EQ = 281,
     NE = 282,
     OR = 283,
     AND = 284,
     ELSE = 285,
     WHILE = 286
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
#define CURLY_OPEN 266
#define CURLY_CLOSE 267
#define VALUE_INT 268
#define VALUE_STRING 269
#define IDENTIFIER 270
#define IF 271
#define SWITCH 272
#define CASE 273
#define BREAK 274
#define COLON 275
#define DEFAULT 276
#define L 277
#define G 278
#define LE 279
#define GE 280
#define EQ 281
#define NE 282
#define OR 283
#define AND 284
#define ELSE 285
#define WHILE 286




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "yacc.y"
{
    int num;
    char* string;
}
/* Line 1529 of yacc.c.  */
#line 116 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

