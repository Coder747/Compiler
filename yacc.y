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
%type <string> code line datatype value_i value_s ifstatment statment E2 C

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
            {printf("C: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) C(%d)\n",$1,$2,$3);$$=$1;}
            | C OPERATOR_PLUS C
            {printf("C: C(%s) OPERATOR_PLUS(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C OPEARTOR_MINUS C
            {printf("C: C(%s) OPEARTOR_MINUS(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C OPERATOR_MULTIPLY C
            {printf("C: C(%s) OPERATOR_MULTIPLY(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C OPERATOR_DIVIDE C
            {printf("C: C(%s) OPERATOR_DIVIDE(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C L C
            {printf("C: C(%s) L(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C G C
            {printf("C: C(%s) G(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C LE C
            {printf("C: C(%s) LE(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C GE C
            {printf("C: C(%s) GE(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C EQ C
            {printf("C: C(%s) EQ(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C NE C
            {printf("C: C(%s) NE(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C OR C
            {printf("C: C(%s) OR(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            | C AND C
            {printf("C: C(%s) AND(%s) C(%s)\n",$1,$2,$3);$$=$1;}
            |IDENTIFIER 
            {printf("E2: IDENTIFIER(%s)\n",$1);$$=$1;}
            | value_i
            {printf("C: value_i(%d)\n",$1);$$=$1;}
            | value_s
            {printf("C: value_s(%s)\n",$1);$$=$1;}
            ;

E2          : C L C
            {printf("E2: C(%s) L(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            | C G C
            {printf("E2: C(%s) G(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            | C LE C
            {printf("E2: C(%s) LE(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            | C GE C
            {printf("E2: C(%s) GE(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            | C EQ C
            {printf("E2: C(%s) EQ(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            | C NE C
            {printf("E2: C(%s) NE(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            | C OR C
            {printf("E2: C(%s) OR(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            | C AND C
            {printf("E2: C(%s) AND(%s) C(%s)\n",$1,$2,$3),$$=$1;}
            |IDENTIFIER 
            {printf("E2: IDENTIFIER(%s)\n",$1);$$=$1;}
            | value_i
            {printf("E2: value_i(%d)\n",$1);$$=$1;}
            | value_s
            {printf("E2: value_s(%s)\n",$1);$$=$1;}
            ;


    
datatype : TYPE_INT
         {printf("datatype: TYPE_INT(%s)\n",$1),$$=$1;}
         | TYPE_STRING
         {printf("datatype: TYPE_STRING(%s)\n",$1),$$=$1;}
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



