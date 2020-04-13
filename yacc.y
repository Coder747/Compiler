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
%token <string> TYPE_INT TYPE_STRING TYPE_FLOAT TYPE_BOOL TYPE_CHAR OPERATOR_PLUS OPERATOR_SUBTRACT OPERATOR_MULTIPLY OPERATOR_DIVIDE OPERATOR_ASSIGNMENT CURLY_OPEN CURLY_CLOSE BRACKET_OPEN BRACKET_CLOSE OPERATOR_NOT
%token <string> VALUE_INT 
%token <string> VALUE_STRING VALUE_CHAR VALUE_FLOAT VALUE_BOOL
%token <string> IDENTIFIER CONST 
%token <string> IF SWITCH CASE BREAK COLON DEFAULT REPEAT UNTIL L G LE GE EQ NE OR AND ELSE WHILE FOR

%right OPERATOR_ASSIGNMENT
%left AND OR
%left L G LE GE EQ NE
%left OPERATOR_PLUS OPERATOR_SUBTRACT
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE
%right OPERATOR_NOT
%left BRACKET_OPEN BRACKET_CLOSE

%nonassoc IF
%nonassoc ELSE

%type <string> code line datatype ifstatment statment Condition exp statments Whileloop Arithmetic Forloop switchstmt switchcase default break case repuntil


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
            {printf("switchcase: SWITCH(%s) Condition(%s) CURLY_OPEN switchstmt(%s) CURLY_CLOSE lineNumber(%d)\n",$1,$3,$6,yylineno);}
            ;

default     : DEFAULT COLON statments
            {printf("default: DEFAULT(%s) COLON statments(%s) lineNumber(%d)\n",$1,$3,yylineno);}
            | DEFAULT COLON statments break
            {printf("default: DEFAULT(%s) COLON statments(%s) break(%s) lineNumber(%d)\n",$1,$3,$4,yylineno);}
            ;

switchstmt  : case 
            {printf("switchstmt: case(%s) lineNumber(%d)\n",$1,yylineno);}
            | switchstmt case
            {printf("switchstmt: switchstmt(%s) case(%s) lineNumber(%d)\n",$1,$2,yylineno);}
            ;

case        : CASE Condition COLON statments 
            {printf("case: CASE(%s) Condition(%s) COLON statments(%s) lineNumber(%d)\n",$1,$2,$4,yylineno);}
            | CASE  Condition COLON statments break
            {printf("case: CASE(%s) Condition(%s) COLON statments(%s) break(%s) lineNumber(%d)\n",$1,$2,$4,$5,yylineno);}
            | default
            {printf("case: default(%s) lineNumber(%d)\n",$1,yylineno);}
            ;

break       : BREAK SEMICOLON
            {printf("break: BREAK(%s) SEMICOLON(%s) lineNumber(%d)\n",$1,$2,yylineno);}
            ;

repuntil    : REPEAT CURLY_OPEN statments UNTIL BRACKET_OPEN Condition BRACKET_CLOSE CURLY_CLOSE
            {printf("repuntil: REPEAT(%s) CURLY_OPEN statments(%s) UNTIL(%s) Condition(%s) CURLY_CLOSE lineNumber(%d)\n",
            $1,$3,$4,$6,yylineno);}
            ;



Whileloop   : WHILE BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Whileloop: WHILE(%s) Condition( %s ) CURLY_OPEN statments(%s) CURLY_CLOSE lineNumber(%d)\n" ,$1,$3,$6,yylineno);}
            ;

Forloop     : FOR BRACKET_OPEN IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON Condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic  BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Forloop: FOR(%s) BRACKET_OPEN IDENTIFIER(%s) OPERATOR_ASSIGNMENT VALUE_INT(%s) SEMICOLON condition(%s) SEMICOLON IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) BRACKET_CLOSE CURLY_OPEN statments(%s) CURLY_CLOSE lineNumber(%d)\n",$1,$3,$5,$7,$9,$11,$14,yylineno);}
            |FOR BRACKET_OPEN datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON Condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic  BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Forloop: FOR(%s) BRACKET_OPEN datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT VALUE_INT(%s) SEMICOLON condition(%s) SEMICOLON IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) BRACKET_CLOSE CURLY_OPEN statments(%s) CURLY_CLOSE lineNumber(%d)\n",$1,$3,$4,$6,$8,$10,$12,$15,yylineno);}
            ;


ifstatment  : IF BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE ELSE CURLY_OPEN statments CURLY_CLOSE
            {printf("ifstatment: IF (%s) BRACKET_OPEN Condition(%s) BRACKET_CLOSE CURLY_OPEN statment(%s) CURLY_CLOSE ELSE(%s) CURLY_OPEN statment(%s) CURLY_CLOSE lineNumber(%d)\n"
            ,$1,$3,$6,$8,$10,yylineno);}

            | IF BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments  CURLY_CLOSE
            {printf("ifstatment: IF(%s) BRACKET_OPEN Condition(%d) BRACKET_CLOSE CURLY_OPEN statment(%s) CURLY_CLOSE lineNumber(%d) \n",$1,$3,$6,yylineno);}
            ;


statment    :exp
            {printf("statment: exp(%s) lineNumber(%d)\n",$1,yylineno);}
            ;

statments    : statment
            {printf("statments: statment(%s) lineNumber(%d)\n",$1,yylineno);}
             |statments statment
             {printf("statments: statments(%s) statment(%s)lineNumber(%d)\n",$1,$2,yylineno);}
             ;

Condition   : Condition L Condition
            {printf("Condition: Condition(%s) L(%s) Condition(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition G Condition
            {printf("Condition: Condition(%s) G(%s) Condition(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition LE Condition
            {printf("Condition: Condition(%s) LE(%s) Condition(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition GE Condition
            {printf("Condition: Condition(%s) GE(%s) Condition(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition EQ Condition
            {printf("Condition: Condition(%s) EQ(%s) Condition(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition NE Condition
            {printf("Condition: Condition(%s) NE(%s) Condition(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition OR Condition
            {printf("Condition: Condition(%s) OR(%s) Condition(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Condition AND Condition
            {printf("Condition: Condition(%s) AND(%s) Condition(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            |Arithmetic
            {printf("Condition: Arithmetic lineNumber(%d)\n",yylineno);}
            | VALUE_STRING
            {printf("Condition: VALUE_STRING(%s) lineNumber(%d)\n",$1,yylineno);}
            ;


Arithmetic  :Arithmetic OPERATOR_MULTIPLY Arithmetic
            {printf("Arithmetic: Arithmetic(%s) OPERATOR_MULTIPLY(%s) Arithmetic(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Arithmetic OPERATOR_DIVIDE Arithmetic
            {printf("Arithmetic: Arithmetic(%s) OPERATOR_DIVIDE(%s) Arithmetic(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | OPERATOR_NOT Arithmetic
            {printf("Arithmetic: OPERATOR_NOT(%s) Arithmetic(%s)lineNumber(%d)\n",$1,$2,yylineno);}
            | Arithmetic OPERATOR_PLUS Arithmetic
            {printf("Arithmetic: Arithmetic(%s) OPERATOR_PLUS(%s) Arithmetic(%s)lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | Arithmetic OPERATOR_SUBTRACT Arithmetic
            {printf("Arithmetic: Arithmetic(%s) OPERATOR_SUBTRACT(%s) Arithmetic(%s) lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | BRACKET_OPEN Arithmetic BRACKET_CLOSE
            {printf("Arithmetic: BRACKET_OPEN Arithmetic(%s) BRACKET_CLOSE lineNumber(%d)\n",$1,$2,$3,yylineno);}
            | VALUE_INT
            {printf("Arithmetic: VALUE_INT(%s) lineNumber(%d)\n",$1,yylineno);}
            | VALUE_FLOAT
            {printf("Arithmetic: VALUE_INT(%s) lineNumber(%d)\n",$1,yylineno);}
            | VALUE_BOOL
            {printf("Arithmetic: VALUE_BOOL(%s) lineNumber(%d)\n",$1,yylineno);}
            | IDENTIFIER
            {printf("Arithmetic: IDENTIFIER(%s) lineNumber(%d)\n",$1,yylineno);}
            ;



exp         :IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {printf("exp : IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) lineNumber(%d)\n",$1,$3,yylineno);}

            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {printf("exp: CONST(%s) datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT(%s) VALUE_INT(%s) lineNumber(%d) \n",$1,$2,$3,$4,$5,yylineno);}

            |datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {printf("exp : datatype(%s) IDENTIFIER(%s) OPERATOR_ASSIGNMENT Arithmetic(%s) lineNumber(%d)\n",$1,$2,$4,yylineno);}

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


            | datatype IDENTIFIER SEMICOLON
            {printf("exp: datatype(%s) IDENTIFIER(%s) lineNumber(%d)\n",$1,$2,yylineno);}

            | ifstatment
            {printf("exp: ifstatment(%s)lineNumber(%d)\n",$1,yylineno);}

            | Whileloop
            {printf("exp: Whileloop(%s)lineNumber(%d)\n",$1,yylineno);}

            | switchcase
            {printf("exp: switchcase(%s) lineNumber(%d)\n",$1,yylineno);}
            | repuntil
            {printf("exp: repuntil(%s) lineNumber(%d)\n",$1,yylineno);}

            |Forloop
            {printf("exp: Forloop(%s) lineNumber(%d)\n",$1,yylineno);}
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



