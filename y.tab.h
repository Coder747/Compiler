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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "yacc.y"
{
    int num;
    char* string;
}
/* Line 1529 of yacc.c.  */
#line 140 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

