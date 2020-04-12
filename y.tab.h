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
     TYPE_FLOAT = 261,
     TYPE_BOOL = 262,
     OPERATOR_PLUS = 263,
     OPERATOR_SUBTRACT = 264,
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
     WHILE = 294,
     FOR = 295
   };
#endif
/* Tokens.  */
#define SEMICOLON 258
#define TYPE_INT 259
#define TYPE_STRING 260
#define TYPE_FLOAT 261
#define TYPE_BOOL 262
#define OPERATOR_PLUS 263
#define OPERATOR_SUBTRACT 264
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
#define FOR 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "yacc.y"
{
    int num;
    char* string;
}
/* Line 1529 of yacc.c.  */
#line 134 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

