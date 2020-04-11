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
%token <string> IF SWITCH CASE BREAK COLON DEFAULT L G LE GE EQ NE OR AND ELSE WHILE

%right OPERATOR_ASSIGNMENT
%left AND OR
%left L G LE GE EQ NE
%left OPERATOR_PLUS OPEARTOR_MINUS
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE
%type <string> code line datatype value_i value_s ifstatment statment Condition exp statments Whileloop

%%

program : code {printf("\nProgram End \n\n");};

code : code line {printf("code: code line --> Line Number (%d) \n", yylineno);}
     |           {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : exp
            {printf("line: exp(%s)\n",$1);}
            | error SEMICOLON   
            ;

switchcase  : SWITCH Condition CURLY_OPEN switchstmt CURLY_CLOSE
            {printf("switchcase: SWITCH Condition CURLY_OPEN switchstmt CURLY_CLOSE lineNumber(%d)\n",yylineno);}
            ;

default     : DEFAULT COLON statments
            {printf("default: DEFAULT COLON statments lineNumber(%d)\n",yylineno);}
            | DEFAULT COLON statments break
            {printf("default: DEFAULT COLON statments break lineNumber(%d)\n",yylineno);}
            ;

switchstmt  : case 
            {printf("switchstmt: case lineNumber(%d)\n",yylineno);}
            | switchstmt case
            {printf("switchstmt: switchstmt case lineNumber(%d)\n",yylineno);}
            ;

case        : CASE Condition COLON statments 
            {printf("case: CASE Condition COLON statments lineNumber(%d)\n",yylineno);}
            | CASE Condition COLON statments break
            {printf("case: CASE Condition COLON statments break lineNumber(%d)\n",yylineno);}
            | default
            {printf("case: default lineNumber(%d)\n",yylineno);}
            ;

break       : BREAK SEMICOLON
            {printf("break: BREAK SEMICOLON lineNumber(%d)\n",yylineno);}
            ;


Whileloop   : WHILE Condition CURLY_OPEN statments CURLY_CLOSE
            {printf("Whileloop: WHILE(%s) Condition( %d ) CURLY_OPEN( %s ) statments(%s) CURLY_CLOSE( %s ) lineNumber(%d)\n" ,$1,$2,$3,$4,$5,yylineno);}
            ;

      
ifstatment  : IF Condition CURLY_OPEN statments CURLY_CLOSE ELSE CURLY_OPEN statments CURLY_CLOSE
            {printf("ifstatment: IF (%s) Condition(%d) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s ) ELSE(%s) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s ) lineNumber(%d)\n",$1,$2,$3,$4,$5,$6,$7,$8,$9,yylineno);}

            | IF Condition CURLY_OPEN statments  CURLY_CLOSE
            {printf("ifstatment: IF(%s) Condition(%d) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s )\n",$1,$2,$3,$4,$5,yylineno);}
            ;


statment    :exp
            ;

statments    : statment
             |statments statment
             ;

Condition   : Condition L Condition
            {printf("Condition: Condition(%d) L(%s) Condition(%d)\n",$1,$2,$3);}
            | Condition G Condition
            {printf("Condition: Condition(%d) G(%s) Condition(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition LE Condition
            {printf("Condition: Condition(%d) LE(%s) Condition(%d)\n",$1,$2,$3);}
            | Condition GE Condition
            {printf("Condition: Condition(%d) GE(%s) Condition(%d)\n",$1,$2,$3);}
            | Condition EQ Condition
            {printf("Condition: Condition(%d) EQ(%s) Condition(%d)\n",$1,$2,$3);}
            | Condition NE Condition
            {printf("Condition: Condition(%d) NE(%s) Condition(%d)\n",$1,$2,$3);}
            | Condition OR Condition
            {printf("Condition: Condition(%d) OR(%s) Condition(%d)\n",$1,$2,$3);}
            | Condition AND Condition
            {printf("Condition: Condition(%d) AND(%s) Condition(%d)\n",$1,$2,$3);}
            | value_i
            {printf("Condition: value_i(%d) lineNumber(%d)\n",$1,yylineno);}
            | value_s
            {printf("Condition: value_s(%d) lineNumber(%d)\n",$1,yylineno);}
            | IDENTIFIER
            {printf("Condition: IDENTIFIER(%s) lineNumber(%d)\n",$1,yylineno);}
            ;



exp         :IDENTIFIER OPERATOR_ASSIGNMENT value_i SEMICOLON
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_i(%d) lineNumer(%d) \n",$1,$2,$3,yylineno);}

            |IDENTIFIER OPERATOR_ASSIGNMENT value_s SEMICOLON
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_s(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT value_i SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_i(%d) lineNumber(%d) \n",$1,$2,$3,$4,yylineno);}

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT value_s SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) value_s(%s) lineNumber(%d)\n",$1,$2,$3,$4,yylineno);}

            | datatype IDENTIFIER SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) lineNumber(%d)\n",$1,$2,yylineno);}
            | ifstatment
            {printf("exp: ifstatment(%s)lineNumber(%d)\n",$1,yylineno);}
            | Whileloop
            {printf("exp: Whileloop(%s)lineNumber(%d)\n",$1,yylineno);}
            | switchcase
            {printf("exp: switchcase() lineNumber(%d)\n",yylineno);}
            ;
        
datatype : TYPE_INT
         {printf("datatype: TYPE_INT(%s)\n",$1);}
         | TYPE_STRING
         {printf("datatype: TYPE_STRING(%s)\n",$1);}
         ;

value_i : VALUE_INT       {printf("value: VALUE_INT(%d) lineNumber(%d)\n",$1,yylineno);}
        ;

value_s : VALUE_STRING    {printf("value: VALUE_STRING(%s)lineNumber(%d)\n ",$1,yylineno);}
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



