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
    int num;
    char* string;
}
%start program


%token <string> SEMICOLON 
%token <string> TYPE_INT TYPE_STRING OPERATOR_PLUS OPEARTOR_MINUS OPERATOR_MULTIPLY OPERATOR_DIVIDE OPERATOR_ASSIGNMENT ARGUMENT_OPENBRACKET ARGUMENT_CLOSEBRACKET
%token <num> VALUE_INT
%token <string> VALUE_STRING
%token <string> IDENTIFIER
%token <string> IF THEN L G LE GE EQ NE OR AND ELSE

%right '='
%left AND OR
%left L G LE GE EQ NE
%left OPERATOR_PLUS OPEARTOR_MINUS
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE
%type <string> code line datatype value_i value_s ifstatment statment C

%%

program : code {printf("\nProgram End \n\n");};

code : code line {printf("code: code line --> Line Number (%d) \n", yylineno);}
     |           {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : IDENTIFIER OPERATOR_ASSIGNMENT value_i SEMICOLON
            {printf("line: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_i(%d) SEMICOLON(%s)\n",$1,$2,$3,$4);$$=$1;}
            |IDENTIFIER OPERATOR_ASSIGNMENT value_s SEMICOLON
            {printf("line: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_s(%s) SEMICOLON(%s)\n",$1,$2,$3,$4);$$=$1;}
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT value_i SEMICOLON
            {printf("line: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_i(%d) SEMICOLON(%s)\n",$1,$2,$3,$4,$5);$$=$1;}
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT value_s SEMICOLON
            {printf("line: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_s(%s) SEMICOLON(%s)\n",$1,$2,$3,$4,$5);$$=$1;}
            | datatype IDENTIFIER SEMICOLON
            {printf("line: datatype(%s) IDENTIFIER(%s) SEMICOLON(%s)\n",$1,$2,$3);$$=$1;}
            | ifstatment
            {printf("line: ifstatment(%s)\n",$1);$$=$1;}
            | error SEMICOLON   
            ;



        
ifstatment  : IF C statment SEMICOLON ELSE statment SEMICOLON
            {printf("ifstatment: IF (%s) C(%s) statment(%s) SEMICOLON(%s) ELSE(%s) statment(%s) SEMICOLON(%s)\n",$1,$2,$3,$4,$5,$6,$7);$$=$1;}
            | IF C statment SEMICOLON
            {printf("ifstatment: IF(%s) C(%s) statment(%s) SEMICOLON(%s)\n",$1,$2,$3,$4);$$=$1;}
            ;

statment    : ifstatment
            {printf("statment: ifstatment(%s)",$1);$$=$1;}
            | C
            {printf("statment: C(%s)",$1);$$=$1;}
            ;

C           : IDENTIFIER OPERATOR_ASSIGNMENT C
            {printf("C: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) C(%d)\n",$1,$2,$3);}
            | C OPERATOR_PLUS C
            {printf("C: C(%d) OPERATOR_PLUS(%s) C(%d)\n",$1,$2,$3);}
            | C OPEARTOR_MINUS C
            {printf("C: C(%d) OPEARTOR_MINUS(%s) C(%d)\n",$1,$2,$3);$$=$1;}
            | C OPERATOR_MULTIPLY C
            {printf("C: C(%d) OPERATOR_MULTIPLY(%s) C(%d)\n",$1,$2,$3);}
            | C OPERATOR_DIVIDE C
            {printf("C: C(%d) OPERATOR_DIVIDE(%s) C(%d)\n",$1,$2,$3);}
            | C L C
            {printf("C: C(%d) L(%s) C(%d)\n",$1,$2,$3);}
            | C G C
            {printf("C: C(%d) G(%s) C(%d)\n",$1,$2,$3);$$=$1;}
            | C LE C
            {printf("C: C(%d) LE(%s) C(%d)\n",$1,$2,$3);$$=$1;}
            | C GE C
            {printf("C: C(%d) GE(%s) C(%d)\n",$1,$2,$3);$$=$1;}
            | C EQ C
            {printf("C: C(%d) EQ(%s) C(%d)\n",$1,$2,$3);}
            | C NE C
            {printf("C: C(%d) NE(%s) C(%d)\n",$1,$2,$3);}
            | C OR C
            {printf("C: C(%d) OR(%s) C(%d)\n",$1,$2,$3);}
            | C AND C
            {printf("C: C(%d) AND(%s) C(%d)\n",$1,$2,$3);}
            | value_i
            {printf("C: value_i(%d)\n",$1);}
            |IDENTIFIER 
            {printf("C: IDENTIFIER(%s)\n",$1);$$=$1;}
            ;


    
datatype : TYPE_INT
         {printf("datatype: TYPE_INT(%s)\n",$1);$$=$1;}
         | TYPE_STRING
         {printf("datatype: TYPE_STRING(%s)\n",$1);$$=$1;}
         ;

value_i : VALUE_INT       {printf("value: VALUE_INT(%d)\n",$1);$$=$1;}
        ;

value_s : VALUE_STRING    {printf("value: VALUE_STRING(%s)\n",$1);$$=$1;}
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



