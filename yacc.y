%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
int yylex(void);
FILE * yyin;
int yylineno;
void yyerror(char *s);
%}

%union
{
    char* string;
}
%start program


%token <string> SEMICOLON 
%token <string> TYPE_INT TYPE_STRING OPERATOR_PLUS OPEARTOR_MINUS OPERATOR_MULTIPLY OPERATOR_DIVIDE OPERATOR_ASSIGNMENT ARGUMENT_OPENBRACKET ARGUMENT_CLOSEBRACKET
%token <string> VALUE_INT
%token <string> VALUE_STRING
%token <string> IDENTIFIER
%token <string> IF THEN LE GE EQ NE OR AND ELSE

%right '='
%left AND OR
%left L G LE GE EQ NE
%left OPERATOR_PLUS OPEARTOR_MINUS
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE
%type <string> code line datatype value ifstatment statment E2 C

%%

program : code {printf("\nProgram End \n\n");};

code : code line {printf("code: code line --> Line Number (%d) \n", yylineno);}
     |           {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : IDENTIFIER OPERATOR_ASSIGNMENT value SEMICOLON
            {printf("line: IDENTIFIER(%s) OPERATOR_ASSIGNMENT value(%s) SEMICOLON(%s)\n",$1,$3,$4);$$=$1;}

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT value SEMICOLON
            {printf("line: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT value(%s) SEMICOLON(%s)\n",$1,$2,$4,$5);$$=$1;}
            | datatype IDENTIFIER SEMICOLON
            {printf("line: datatype(%s) IDENTIFIER(%s) SEMICOLON(%s)\n",$1,$2,$3);$$=$1;}
            | ifstatment
            {printf("line: ifstatment(%s)\n",$1);$$=$1;}
            | error SEMICOLON   
            ;



        
ifstatment  : IF E2 statment SEMICOLON ELSE statment SEMICOLON
            {printf("ifstatment: IF (%s) E2(%s) statment(%s) SEMICOLON(%s) ELSE(%s) statment(%s) SEMICOLON(%s)\n",$1,$2,$3,$4,$5,$6,$7);$$=$1;}
            | IF E2 statment SEMICOLON
            {printf("ifstatment: IF(%s) E2(%s) statment(%s) SEMICOLON(%s)\n",$1,$2,$3,$4);$$=$1;}
            ;

statment    : ifstatment
            {printf("statment: ifstatment(%s)",$1);$$=$1;}
            | C
            {printf("statment: C(%s)",$1);$$=$1;}
            ;

C           : IDENTIFIER OPERATOR_ASSIGNMENT C
            | C OPERATOR_PLUS C
            | C OPEARTOR_MINUS C
            | C OPERATOR_MULTIPLY C
            | C OPERATOR_DIVIDE C
            | C L C
            | C G C
            | C LE C
            | C GE C
            | C EQ C
            | C NE C
            | C OR C
            | C AND C
            | value
            ;

E2          : C L C
            | C G C
            | C LE C
            | C GE C
            | C EQ C
            | C NE C
            | C OR C
            | C AND C
            | value
            ;


    
datatype : TYPE_INT
         | TYPE_STRING
         ;

value : IDENTIFIER      {printf("value: VALUE_INT(%d)\n",$1);}
      | VALUE_INT       {printf("value: VALUE_INT(%d)\n",$1);}
      | VALUE_STRING    {printf("value: VALUE_STRING(%s)\n",$1);}
      ;
%%

void yyerror(char *s){
    printf("Error: %s\n",s);
}

int main (void)
{
    yyin = fopen("test.txt","r+");
    if(yyin == NULL)
        printf("Error NULL \n");
    else{
        printf("Parsing... \n\n");
        yyparse();
    }
    fclose(yyin);
    return 0;
    
    
    
}



