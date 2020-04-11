%option yylineno
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int count=0;
void yyerror(char *);
#include "y.tab.h"
%}

%%
5alsana 		{yylval.string = strdup(yytext); return SEMICOLON;}
rakam 			{yylval.string = strdup(yytext); return TYPE_INT;}
gomla   		{yylval.string = strdup(yytext); return TYPE_STRING;}
shoflykeda		{yylval.string = strdup(yytext); return IF;}
walla			{yylval.string = strdup(yytext); return ELSE;}
talama			{yylval.string = strdup(yytext); return WHILE;}
switch			{yylval.string = strdup(yytext); return SWITCH;}
law			    {yylval.string = strdup(yytext); return CASE;}
break			{yylval.string = strdup(yytext); return BREAK;}
default			{yylval.string = strdup(yytext); return DEFAULT;}
"{"				{yylval.string = strdup(yytext); return CURLY_OPEN;}
"}"				{yylval.string = strdup(yytext); return CURLY_CLOSE;}
"<"				{yylval.string = strdup(yytext); return L;}
">"				{yylval.string = strdup(yytext); return G;}
"<="    		{yylval.string = strdup(yytext); return LE;}
">="    		{yylval.string = strdup(yytext); return GE;}
"=="    		{yylval.string = strdup(yytext); return EQ;}
"!="    		{yylval.string = strdup(yytext); return NE;}
"||"    		{yylval.string = strdup(yytext); return OR;}
"&&"    		{yylval.string = strdup(yytext); return AND;}
":"    		    {yylval.string = strdup(yytext); return COLON;}

\+				{yylval.string = strdup(yytext); return OPERATOR_PLUS;}
\=				{yylval.string = strdup(yytext); return OPERATOR_ASSIGNMENT;}

[0-9]+										{yylval.string = atoi(yytext); return VALUE_INT;}
\"(([a-zA-Z0-9_ ])|\\[a-zA-Z])+\"			{yylval.string = strdup(yytext); return VALUE_STRING;}
[a-zA-Z_]([a-zA-Z_]|[0-9])* 				{yylval.string = strdup(yytext); return IDENTIFIER;}

[\t  ]+						;

\n 							printf("\n");

.							printf("Invalid Character at line number: %d. Character: %s\n",yylineno,strdup(yytext));

%%

int yywrap(void){
	return 1;
}