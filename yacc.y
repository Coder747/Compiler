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
%token <string> TYPE_INT TYPE_STRING TYPE_FLOAT TYPE_BOOL TYPE_CHAR OPERATOR_PLUS OPERATOR_SUBTRACT OPERATOR_MULTIPLY OPERATOR_DIVIDE OPERATOR_ASSIGNMENT CURLY_OPEN CURLY_CLOSE BRACKET_OPEN BRACKET_CLOSE
%token <string> VALUE_INT 
%token <string> VALUE_STRING VALUE_CHAR VALUE_FLOAT VALUE_BOOL
%token <string> IDENTIFIER CONST 
%token <string> IF SWITCH CASE BREAK COLON DEFAULT REPEAT UNTIL L G LE GE EQ NE OR AND ELSE WHILE FOR

%right OPERATOR_ASSIGNMENT
%left AND OR
%left L G LE GE EQ NE
%left OPERATOR_PLUS OPERATOR_SUBTRACT
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE
%left BRACKET_OPEN BRACKET_CLOSE

%nonassoc IF
%nonassoc ELSE

%type <string> code line datatype ifstatment statment Condition exp statments Whileloop Arithmetic Forloop


%%

program : code {printf("\nProgram End \n\n");};

code : code line {printf("code: code line --> Line Number (%d) \n", yylineno);}
     |           {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : exp
            {printf("line: exp(%s)\n",$1);}
            | error SEMICOLON   
            ;

switchcase  : SWITCH BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN switchstmt CURLY_CLOSE
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

case        : CASE Condition  COLON statments 
            {printf("case: CASE Condition COLON statments lineNumber(%d)\n",yylineno);}
            | CASE  Condition COLON statments break
            {printf("case: CASE Condition COLON statments break lineNumber(%d)\n",yylineno);}
            | default
            {printf("case: default lineNumber(%d)\n",yylineno);}
            ;

break       : BREAK SEMICOLON
            {printf("break: BREAK SEMICOLON lineNumber(%d)\n",yylineno);}
            ;

repuntil    : REPEAT CURLY_OPEN statments UNTIL BRACKET_OPEN Condition BRACKET_CLOSE CURLY_CLOSE
            {printf("repuntil: REPEAT CURLY_OPEN statments UNTIL Condition CURLY_CLOSE lineNumber(%d)\n",yylineno);}
            ;



Whileloop   : WHILE BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Whileloop: WHILE(%s) Condition( %d ) CURLY_OPEN( %s ) statments(%s) CURLY_CLOSE( %s ) lineNumber(%d)\n" ,$1,$2,$3,$4,$5,yylineno);}
            ;

Forloop     : FOR BRACKET_OPEN IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON Condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic  BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Forloop: FOR BRACKET_OPEN IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic BRACKET_CLOSE CURLY_OPEN exp CURLY_CLOSE lineNumber(%d)",yylineno);}
            ;


ifstatment  : IF BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE ELSE CURLY_OPEN statments CURLY_CLOSE
            {printf("ifstatment: IF (%s) Condition(%d) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s ) ELSE(%s) CURLY_OPEN( %s ) statment(%s) CURLY_CLOSE( %s ) lineNumber(%d)\n",$1,$2,$3,$4,$5,$6,$7,$8,$9,yylineno);}

            | IF BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments  CURLY_CLOSE
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
            {printf("Condition: Condition(%d) LE(%s) Condition(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition GE Condition
            {printf("Condition: Condition(%d) GE(%s) Condition(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition EQ Condition
            {printf("Condition: Condition(%d) EQ(%s) Condition(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition NE Condition
            {printf("Condition: Condition(%d) NE(%s) Condition(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition OR Condition
            {printf("Condition: Condition(%d) OR(%s) Condition(%d) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition AND Condition
            {printf("Condition: Condition(%d) AND(%s) Condition(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            |Arithmetic
            {printf("Condition: Arithmetic lineNumber(%d)\n",yylineno);}
            | VALUE_STRING
            {printf("Condition: VALUE_STRING(%d) lineNumber(%d)\n",$1,yylineno);}
            ;


Arithmetic  :Arithmetic OPERATOR_MULTIPLY Arithmetic
            {printf("Arithmetic: Arithmetic(%d) OPERATOR_MULTIPLY(%s) Arithmetic(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Arithmetic OPERATOR_DIVIDE Arithmetic
            {printf("Arithmetic: Arithmetic(%d) OPERATOR_DIVIDE(%s) Arithmetic(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Arithmetic OPERATOR_PLUS Arithmetic
            {printf("Arithmetic: Arithmetic(%d) OPERATOR_PLUS(%s) Arithmetic(%d)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Arithmetic OPERATOR_SUBTRACT Arithmetic
            {printf("Arithmetic: Arithmetic(%d) OPERATOR_SUBTRACT(%s) Arithmetic(%d) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | BRACKET_OPEN Arithmetic BRACKET_CLOSE
            {printf("Arithmetic: BRACKET_OPEN Arithmetic(%d) BRACKET_CLOSE lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | VALUE_INT
            {printf("Arithmetic: VALUE_INT(%d) lineNumber(%d)\n",$1,yylineno);}
            | VALUE_FLOAT
            {printf("Arithmetic: VALUE_INT(%d) lineNumber(%d)\n",$1,yylineno);}
            | IDENTIFIER
            {printf("Arithmetic: IDENTIFIER(%s) lineNumber(%d)\n",$1,yylineno);}
            ;



exp         :IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%d) lineNumer(%d) \n",$1,$2,$3,yylineno);}
            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON
            {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%d) lineNumber(%d) \n",$1,$2,$3,$4,$5,yylineno);}
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%d) lineNumber(%d) \n",$1,$2,$3,$4,yylineno);}

            |IDENTIFIER OPERATOR_ASSIGNMENT VALUE_FLOAT SEMICOLON
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_FLOAT(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_FLOAT SEMICOLON
            {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_FLOAT(%s) lineNumber(%d) \n",$1,$2,$3,$4,$5,yylineno);}
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_FLOAT SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_FLOAT(%s) lineNumber(%d)\n",$1,$2,$3,$4,yylineno);}

             |IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d) \n",$1,$2,$3,$4,$5,yylineno);}
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_STRING(%s) lineNumber(%d)\n",$1,$2,$3,$4,yylineno);} 

             |IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d) \n",$1,$2,$3,$4,$5,yylineno);}
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_CHAR(%s) lineNumber(%d)\n",$1,$2,$3,$4,yylineno);} 

             |IDENTIFIER OPERATOR_ASSIGNMENT VALUE_BOOL SEMICOLON
            {printf("exp: IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_BOOL SEMICOLON
            {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d) \n",$1,$2,$3,$4,$5,yylineno);}
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_BOOL SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_BOOL(%s) lineNumber(%d)\n",$1,$2,$3,$4,yylineno);}   

            | IDENTIFIER OPERATOR_ASSIGNMENT IDENTIFIER SEMICOLON

            | datatype IDENTIFIER SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) lineNumber(%d)\n",$1,$2,yylineno);}

            | ifstatment
            {printf("exp: ifstatment(%s)lineNumber(%d)\n",$1,yylineno);}

            | Whileloop
            {printf("exp: Whileloop(%s)lineNumber(%d)\n",$1,yylineno);}

            | switchcase
            {printf("exp: switchcase() lineNumber(%d)\n",yylineno);}
            | repuntil
            {printf("exp: repuntil() lineNumber(%d)\n",yylineno);}

            |Forloop
            {printf("exp: Forloop() lineNumber(%d)\n",yylineno);}
            ;
        
datatype : TYPE_INT
         {printf("datatype: TYPE_INT(%s)\n",$1);}
         | TYPE_STRING
         {printf("datatype: TYPE_STRING(%s)\n",$1);}
         | TYPE_FLOAT
         {printf("datatype: TYPE_FLOAT(%s)\n",$1);}
         | TYPE_CHAR
         {printf("datatype: TYPE_CHAR(%s)\n",$1);}
         | TYPE_BOOL
         {printf("datatype: TYPE_BOOL(%s)\n",$1);}
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



