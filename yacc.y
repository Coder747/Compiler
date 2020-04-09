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


%token SEMICOLON TYPE_INT OPERATOR_PLUS OPEARTOR_MINUS OPERATOR_MULTIPLY OPERATOR_DIVIDE OPERATOR_ASSIGNMENT ARGUMENT_OPENBRACKER ARGUMENT_CLOSEBRACKET
%token <string> VALUE_INT
%token <string> IDENTIFIER
%token ID NUM IF THEN LE GE EQ NE OR AND ELSE

%right '='
%left AND OR
%left L G LE GE EQ NE
%left OPERATOR_PLUS OPEARTOR_MINUS
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE
%type <string> code line exp datatype value

%%

program : code {printf("\nprogram: Code \n\n");};

code : code line {printf("code: code line --> Line Number (%d) \n", yylineno);}
     |           {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : IDENTIFIER OPERATOR_ASSIGNMENT exp SEMICOLON
        //x=5 or x=y
            | datatype IDENTIFIER SEMICOLON
            | ifstatment
            | error SEMICOLON  
            | 
            ;



        
ifstatment  : IF E2 statment SEMICOLON ELSE statment SEMICOLON
            | IF E2 statment SEMICOLON
            ;

statment    : ifstatment
            | C
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
            | exp
            ;

E2          : C L C
            | C G C
            | C LE C
            | C GE C
            | C EQ C
            | C NE C
            | C OR C
            | C AND C
            | exp
            ;

exp : value 
    ;
    
datatype : TYPE_INT
         ;

value : IDENTIFIER
      | VALUE_INT
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
        printf("--> Parsing: \n\n");
        yyparse();
    }
    fclose(yyin);
    return 0;
    
    
    
}



