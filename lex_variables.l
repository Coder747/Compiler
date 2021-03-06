%option yylineno
%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "structs.h"
#include "z_arraylist/arraylist.h"
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
bolbol				{yylval.string = strdup(yytext); return TYPE_BOOL;}
sabet 				{yylval.string = strdup(yytext); return CONST;}
shoflykeda			{yylval.string = strdup(yytext); return IF;}
walla				{yylval.string = strdup(yytext); return ELSE;}
talama				{yylval.string = strdup(yytext); return WHILE;}
men					{yylval.string = strdup(yytext); return FOR;}
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

[0-9]+										{yylval.ForConst->intpls = atoi(strdup(yytext)); yylval.ForConst->t=Int;
											return VALUE_INT;
											}

[Tt]rue|[Ff]alse							{yylval.ForConst->others = strdup(yytext); yylval.ForConst->t=Bool;
											 return VALUE_BOOL;
											}
\'[a-zA-z]\'								{yylval.ForConst->others = strdup(yytext); yylval.ForConst->t=Char;
											 return VALUE_CHAR;
											}
\"(([a-zA-Z0-9_ ])|\\[a-zA-Z])+\"			{yylval.ForConst->others = strdup(yytext); yylval.ForConst->t=String;
											 return VALUE_STRING;
											}
[a-zA-Z_]([a-zA-Z_]|[0-9])* 				{yylval.string = strdup(yytext);return IDENTIFIER;}

([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)			{yylval.ForConst->floatpls = atof(strdup(yytext)); yylval.ForConst->t=Float; 
											 return VALUE_FLOAT;}
[\t  ]+										;


\n 							printf("\n");

.							{FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
							fprintf(fpp,"Eh el habd ely enta katbo fe line number: %d. bos tany 3ala: %s\n",yylineno,strdup(yytext));
							fclose(fpp);}

%%
//
int yywrap(void){
	return 1;
}