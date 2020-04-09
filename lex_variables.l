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
5alsana 		return SEMICOLON;
rakam 			return TYPE_INT;
gomla   		return TYPE_STRING;
shoflykeda		return IF;
walla			return ELSE;
"<"				return L;
">"				return G;
"<="    		return LE;
">="    		return GE;
"=="    		return EQ;
"!="    		return NE;
"||"    		return OR;
"&&"    		return AND;

\+		return OPERATOR_PLUS;
\=		return OPERATOR_ASSIGNMENT;

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