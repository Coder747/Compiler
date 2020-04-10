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
%token <string> TYPE_INT TYPE_STRING OPERATOR_PLUS OPEARTOR_MINUS OPERATOR_MULTIPLY OPERATOR_DIVIDE OPERATOR_ASSIGNMENT CURLY_OPEN CURLY_CLOSE
%token <string> VALUE_INT
%token <string> VALUE_STRING
%token <string> IDENTIFIER
%token <string> IF THEN L G LE GE EQ NE OR AND ELSE

%right '='
%left AND OR
%left L G LE GE EQ NE
%left OPERATOR_PLUS OPEARTOR_MINUS
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE
%type <string> code line datatype value_i value_s ifstatment statment C_int C_string exp statments

%%

program : code {printf("\nProgram End \n\n");};

code : code line {printf("code: code line --> Line Number (%d) \n", yylineno);}
     |           {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : exp SEMICOLON
            {printf("line: exp(%s)\n",$1);$$=$1;}
            | ifstatment
            {printf("line: ifstatment(%s)\n",$1);$$=$1;}
            | error SEMICOLON   
            ;



      
ifstatment  : IF C_int CURLY_OPEN  statments SEMICOLON CURLY_CLOSE ELSE CURLY_OPEN statments SEMICOLON CURLY_CLOSE
            {printf("ifstatment: IF (%s) C_int(%d) statment(%s) SEMICOLON(%s) ELSE(%s) statment(%s) SEMICOLON(%s)\n",$1,$2,$4,$5,$7,$9,$10);}

            | IF C_int CURLY_OPEN statments SEMICOLON CURLY_CLOSE
            {printf("ifstatment: IF(%s) C_int(%d) statment(%s) SEMICOLON(%s)\n",$1,$2,$3,$4);}

            | IF C_string CURLY_OPEN statments SEMICOLON CURLY_CLOSE ELSE CURLY_OPEN statments SEMICOLON CURLY_CLOSE
            {printf("ifstatment: IF (%s) C_string(%s) statment(%s) SEMICOLON(%s) ELSE(%s) statment(%s) SEMICOLON(%s)\n",$1,$2,$4,$5,$7,$9,$10);}

            | IF C_string CURLY_OPEN statments SEMICOLON CURLY_CLOSE
            {printf("ifstatment: IF(%s) C_string(%s) statment(%s) SEMICOLON(%s)\n",$1,$2,$3,$4);;}
            ;


statment    : ifstatment
            {printf("statment: ifstatment(%s)",$1);}
            |exp
            |C_int
            |C_string
            ;

statments    : statment
             |statments SEMICOLON statment
             ;

C_int       : C_int L C_int
            {printf("C_int: C_int(%d) L(%s) C_int(%d)\n",$1,$2,$3);}
            | C_int G C_int
            {printf("C_int: C_int(%d) G(%s) C_int(%d)\n",$1,$2,$3);}
            | C_int LE C_int
            {printf("C_int: C_int(%d) LE(%s) C_int(%d)\n",$1,$2,$3);}
            | C_int GE C_int
            {printf("C_int: C_int(%d) GE(%s) C_int(%d)\n",$1,$2,$3);}
            | C_int EQ C_int
            {printf("C_int: C_int(%d) EQ(%s) C_int(%d)\n",$1,$2,$3);}
            | C_int NE C_int
            {printf("C_int: C_int(%d) NE(%s) C_int(%d)\n",$1,$2,$3);}
            | C_int OR C_int
            {printf("C_int: C_int(%d) OR(%s) C_int(%d)\n",$1,$2,$3);}
            | C_int AND C_int
            {printf("C_int: C_int(%d) AND(%s) C_int(%d)\n",$1,$2,$3);}
            | value_i
            {printf("C_int: value_i(%d)\n",$1);}
            | IDENTIFIER
            {printf("C_int: IDENTIFIER(%s)\n",$1);}
            ;

C_string    : C_string L C_string
            {printf("C_string: C_string(%s) L(%s) C_string(%s)\n",$1,$2,$3);}
            | C_string G C_string
            {printf("C_string: C_string(%s) G(%s) C_string(%d)\n",$1,$2,$3);}
            | C_string LE C_string
            {printf("C_string: C_string(%s) LE(%s) C_string(%s)\n",$1,$2,$3);}
            | C_string GE C_string
            {printf("C_string: C_string(%s) GE(%s) C_string(%s)\n",$1,$2,$3);}
            | C_string EQ C_string
            {printf("C_string: C_string(%s) EQ(%s) C_string(%s)\n",$1,$2,$3);}
            | C_string NE C_string
            {printf("C_string: C_string(%s) NE(%s) C_string(%s)\n",$1,$2,$3);}
            | C_string OR C_string
            {printf("C_string: C_string(%s) OR(%s) C_string(%s)\n",$1,$2,$3);}
            | C_string AND C_string
            {printf("C_string: C_string(%s) AND(%s) C_string(%s)\n",$1,$2,$3);}
            | value_s
            {printf("C_string: value_s(%s)\n",$1);}
            | IDENTIFIER
            {printf("C_string: IDENTIFIER(%s)\n",$1);}
            ;

exp         :IDENTIFIER OPERATOR_ASSIGNMENT value_i 
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_i(%d) \n",$1,$2,$3);}

            |IDENTIFIER OPERATOR_ASSIGNMENT value_s 
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_s(%s) \n",$1,$2,$3);$$=$1;}

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT value_i 
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_i(%d) \n",$1,$2,$3,$4);}

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT value_s 
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_s(%s) \n",$1,$2,$3,$4);}

            | datatype IDENTIFIER 
            {printf("exp: datatype(%s) IDENTIFIER(%s) \n",$1,$2);}
            ;
        
datatype : TYPE_INT
         {printf("datatype: TYPE_INT(%s)\n",$1);}
         | TYPE_STRING
         {printf("datatype: TYPE_STRING(%s)\n",$1);}
         ;

value_i : VALUE_INT       {printf("value: VALUE_INT(%d)\n",$1);}
        ;

value_s : VALUE_STRING    {printf("value: VALUE_STRING(%s)\n",$1);}
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



