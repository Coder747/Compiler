%option yylineno
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count=0;
void yyerror(char *);
#include "y.tab.h"
%}

%%
; 		return SEMICOLON;
int 	return TYPE_INT;
if		return IF;
else	return ELSE;
"<"		return L;
">"		return G;
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
"||"    return OR;
"&&"    return AND;

\+		return OPERATOR_PLUS;
\=		return OPERATOR_ASSIGNMENT;

[0-9]+						{yylval.string = strdup(yytext); return VALUE_INT;}
[a-zA-Z_]([a-zA-Z_]|[0-9])* {yylval.string = strdup(yytext); return IDENTIFIER;}

[\t  ]+						;

\n 							printf("\n");

.							printf("Invalid Character at line number: %d. Character: %s\n",yylineno,strdup(yytext));

%%

int yywrap(void){
	return 1;
}