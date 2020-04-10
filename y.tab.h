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
     THEN = 272,
     L = 273,
     G = 274,
     LE = 275,
     GE = 276,
     EQ = 277,
     NE = 278,
     OR = 279,
     AND = 280,
     ELSE = 281
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
#define THEN 272
#define L 273
#define G 274
#define LE 275
#define GE 276
#define EQ 277
#define NE 278
#define OR 279
#define AND 280
#define ELSE 281




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "yacc.y"
{
    int num;
    char* string;
}
/* Line 1529 of yacc.c.  */
#line 106 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

