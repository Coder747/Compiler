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
5alsana 			{yylval.string = strdup(yytext); return SEMICOLON;}
rakam 				{yylval.string = strdup(yytext); return TYPE_INT;}
3ayem				{yylval.string = strdup(yytext); return TYPE_FLOAT;}
gomla   			{yylval.string = strdup(yytext); return TYPE_STRING;}
7arf   				{yylval.string = strdup(yytext); return TYPE_CHAR;}
sa7ghalat			{yylval.string = strdup(yytext); return TYPE_BOOL;}
sabet 				{yylval.string = strdup(yytext); return CONST;}
shoflykeda			{yylval.string = strdup(yytext); return IF;}
walla				{yylval.string = strdup(yytext); return ELSE;}
talama				{yylval.string = strdup(yytext); return WHILE;}
for					{yylval.string = strdup(yytext); return FOR;}
garabkeda			{yylval.string = strdup(yytext); return SWITCH;}
law			    	{yylval.string = strdup(yytext); return CASE;}
lawmafesh			{yylval.string = strdup(yytext); return DEFAULT;}
eksar				{yylval.string = strdup(yytext); return BREAK;}
karar				{yylval.string = strdup(yytext); return REPEAT;}
le7ad				{yylval.string = strdup(yytext); return UNTIL;}
"{"					{yylval.string = strdup(yytext); return CURLY_OPEN;}
"}"					{yylval.string = strdup(yytext); return CURLY_CLOSE;}
"<"					{yylval.string = strdup(yytext); return L;}
">"					{yylval.string = strdup(yytext); return G;}
"<="    			{yylval.string = strdup(yytext); return LE;}
">="    			{yylval.string = strdup(yytext); return GE;}
"=="    			{yylval.string = strdup(yytext); return EQ;}
"!="    			{yylval.string = strdup(yytext); return NE;}
"||"    			{yylval.string = strdup(yytext); return OR;}
"&&"    			{yylval.string = strdup(yytext); return AND;}
":"    		    	{yylval.string = strdup(yytext); return COLON;}
"("					{yylval.string = strdup(yytext); return BRACKET_OPEN;}
")"					{yylval.string = strdup(yytext); return BRACKET_CLOSE;}
\+					{yylval.string = strdup(yytext); return OPERATOR_PLUS;}
\=					{yylval.string = strdup(yytext); return OPERATOR_ASSIGNMENT;}
\*					{yylval.string = strdup(yytext); return OPERATOR_MULTIPLY;}
\/					{yylval.string = strdup(yytext); return OPERATOR_DIVIDE;}
\-					{yylval.string = strdup(yytext); return OPERATOR_SUBTRACT;}
\!					{yylval.string = strdup(yytext); return OPERATOR_NOT;}

[0-9]+										{yylval.string = strdup(yytext); return VALUE_INT;}
[Tt]rue|[Ff]alse							{yylval.string = strdup(yytext); return VALUE_BOOL;}
\'[a-zA-z]\'								{yylval.string = strdup(yytext); return VALUE_CHAR;}
\"(([a-zA-Z0-9_ ])|\\[a-zA-Z])+\"			{yylval.string = strdup(yytext); return VALUE_STRING;}
[a-zA-Z_]([a-zA-Z_]|[0-9])* 				{yylval.string = strdup(yytext); return IDENTIFIER;}
([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)			{yylval.string = strdup(yytext); return VALUE_FLOAT;}
[\t  ]+										;


\n 							printf("\n");

.							printf("Eh el habd ely enta katbo fe line number: %d. bos tany 3ala: %s\n",yylineno,strdup(yytext));

%%

int yywrap(void){
	return 1;
}