%{
#include"symboltable.c"

#define POSIX_SOURCE 


//  void panic(int line)
//  {
//     (void)fprintf(stderr,"\n?Panic in line %d \n",line);
//     (void)perror("Semantic error");
//     abort();
//  } 
// #define PANIC (panic())
 //extern void panic(); 
int yylex(void);
FILE * yyin;
int yylineno;
ArrayList* symboltable;

void yyerror(char *s); 
// nodeType* add_to_symboltable(ArrayList* st, nodeType *Nptr,int line);

%}

%union
{
    int num;
    char* string;
    nodeType* nPtr;
    typeEnum type;
}
%start program
// all non-terminal will be stored with nodeType pointer
// create symboltable.h sybmoltable.c
// send sizeof NodeType for creation
// array of NodeType
// function to add through for loop and going through all the variables
// atleast 5 functions check if the variable is in the array or not.
// another function add into symbol table (int x see if initialzed or not then add it)
// search function, remove function,etc

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

%type <nPtr> code line  ifstatment statment Condition exp statments Whileloop  Forloop switchstmt switchcase default break case repuntil
%type<type> datatype
%type<nPtr> Arithmetic
%%



program : code {printf("\nProgram End \n\n");};

code : code line {printf("code: code line --> Line Number (%d) \n", yylineno);}
     |           {printf("code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : exp
            {printf("line: exp( )\n");}
            | error SEMICOLON   
            ;

switchcase  : SWITCH BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN switchstmt CURLY_CLOSE
            {printf("switchcase: SWITCH( ) Condition( ) CURLY_OPEN switchstmt( ) CURLY_CLOSE lineNumber(%d)\n",yylineno);}
            ;

default     : DEFAULT COLON statments
            {printf("default: DEFAULT( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
            | DEFAULT COLON statments break
            {printf("default: DEFAULT( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
            ;

switchstmt  : case 
            {printf("switchstmt: case( ) lineNumber(%d)\n",yylineno);}
            | switchstmt case
            {printf("switchstmt: switchstmt( ) case( ) lineNumber(%d)\n",yylineno);}
            ;

case        : CASE Condition COLON statments 
            {printf("case: CASE( ) Condition( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
            | CASE  Condition COLON statments break
            {printf("case: CASE( ) Condition( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
            | default
            {printf("case: default( ) lineNumber(%d)\n",yylineno);}
            ;

break       : BREAK SEMICOLON
            {printf("break: BREAK( ) SEMICOLON( ) lineNumber(%d)\n",yylineno);}
            ;

repuntil    : REPEAT CURLY_OPEN statments UNTIL BRACKET_OPEN Condition BRACKET_CLOSE CURLY_CLOSE
            {printf("repuntil: REPEAT( ) CURLY_OPEN statments( ) UNTIL( ) Condition( ) CURLY_CLOSE lineNumber(%d)\n",yylineno);}
            ;



Whileloop   : WHILE BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Whileloop: WHILE( ) Condition( ) CURLY_OPEN statments( ) CURLY_CLOSE lineNumber(%d)\n" ,yylineno);}
            ;

Forloop     : FOR BRACKET_OPEN IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON Condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic  BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Forloop: FOR( ) BRACKET_OPEN IDENTIFIER( ) OPERATOR_ASSIGNMENT VALUE_INT( ) SEMICOLON condition( ) SEMICOLON IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) BRACKET_CLOSE CURLY_OPEN statments( ) CURLY_CLOSE lineNumber(%d)\n",yylineno);}
            |FOR BRACKET_OPEN datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON Condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic  BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE
            {printf("Forloop: FOR( ) BRACKET_OPEN datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT VALUE_INT( ) SEMICOLON condition( ) SEMICOLON IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) BRACKET_CLOSE CURLY_OPEN statments( ) CURLY_CLOSE lineNumber(%d)\n",yylineno);}
            ;


ifstatment  : IF BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments CURLY_CLOSE ELSE CURLY_OPEN statments CURLY_CLOSE
            {printf("ifstatment: IF ( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE CURLY_OPEN statment( ) CURLY_CLOSE ELSE( ) CURLY_OPEN statment( ) CURLY_CLOSE lineNumber(%d)\n",yylineno);}

            | IF BRACKET_OPEN Condition BRACKET_CLOSE CURLY_OPEN statments  CURLY_CLOSE
            {printf("ifstatment: IF( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE CURLY_OPEN statment( ) CURLY_CLOSE lineNumber(%d) \n",yylineno);}
            ;


statment    :exp
            {printf("statment: exp( ) lineNumber(%d)\n",yylineno);}
            ;

statments    : statment
             {printf("statments: statment( ) lineNumber(%d)\n",yylineno);}
             |statments statment
             {printf("statments: statments( ) statment( )lineNumber(%d)\n",yylineno);}
             ;

Condition   : Condition L Condition
            {printf("Condition: Condition( ) L( ) Condition( ) lineNumber(%d)\n",yylineno);}
            | Condition G Condition
            {printf("Condition: Condition( ) G( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition LE Condition
            {printf("Condition: Condition( ) LE( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition GE Condition
            {printf("Condition: Condition( ) GE( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition EQ Condition
            {printf("Condition: Condition( ) EQ( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition NE Condition
            {printf("Condition: Condition( ) NE( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition OR Condition
            {printf("Condition: Condition( ) OR( ) Condition( ) lineNumber(%d)\n",yylineno);}
            | Condition AND Condition
            {printf("Condition: Condition( ) AND( ) Condition( )lineNumber(%d)\n",yylineno);}
            |Arithmetic
            {printf("Condition: Arithmetic lineNumber(%d)\n",yylineno);}
            | VALUE_STRING
            {printf("Condition: VALUE_STRING( ) lineNumber(%d)\n",yylineno);}
            ;


Arithmetic  :Arithmetic OPERATOR_MULTIPLY Arithmetic
            {printf("Arithmetic: Arithmetic( ) OPERATOR_MULTIPLY( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_DIVIDE Arithmetic
            {printf("Arithmetic: Arithmetic( ) OPERATOR_DIVIDE( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | OPERATOR_NOT Arithmetic
            {printf("Arithmetic: OPERATOR_NOT( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_PLUS Arithmetic
            {printf("Arithmetic: Arithmetic( ) OPERATOR_PLUS( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_SUBTRACT Arithmetic
            {printf("Arithmetic: Arithmetic( ) OPERATOR_SUBTRACT( ) Arithmetic( ) lineNumber(%d)\n",yylineno);}
            | BRACKET_OPEN Arithmetic BRACKET_CLOSE
            {printf("Arithmetic: BRACKET_OPEN Arithmetic( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);}

            | VALUE_INT 
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.type=Int;
                Ntype->id.v=$1;
                $$=Ntype;
                printf("Arithmetic: VALUE_INT( ) lineNumber(%d)\n",yylineno);
            }

            | VALUE_FLOAT 
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.type=Float;
                Ntype->id.v=$1;
                $$=Ntype;
                printf("Arithmetic: VALUE_FLOAT( ) lineNumber(%d)\n",yylineno);
            }

            | VALUE_BOOL
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.type=Bool;
                Ntype->id.v=$1;
                $$=Ntype;
                printf("Arithmetic: VALUE_BOOL( ) lineNumber(%d)\n",yylineno);
            }

            | IDENTIFIER 
            {   
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.name=$1;
                Ntype->id.type=get_type(symboltable,Ntype,yylineno);
                Ntype->id.v= get_value(symboltable,Ntype,yylineno);
                $$=Ntype;
                printf("Arithmetic: IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
            ;



exp         :IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                nodeType* Ntype1;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.name=$1; Ntype1=$3;
                Ntype->id.v= Ntype1->id.v;
                if(Ntype->id.type!=Ntype1->id.type)
                {
                   printf("5ayeshna fel type\n"); 
                }
                Ntype->id.type= Ntype1->id.type;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp : IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }

            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->const1=true;Ntype->id.declaration=true;Ntype->type=Id;Ntype->id.type=$2; Ntype->id.name=$3; Ntype->id.v=$5;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: CONST( ) datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_INT( ) lineNumber(%d) \n",yylineno);
            }

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->const1=false;Ntype->id.declaration=true;Ntype->id.type=$1; Ntype->id.name=$2; Ntype->id.v=$5;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp : datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }

            | IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.name=$1; Ntype->id.type=String ; Ntype->id.v=$3;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            }

            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->const1=true;Ntype->id.declaration=true; Ntype->id.type=$2; Ntype->id.name=$3; Ntype->id.v=$5;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: CONST( ) datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d) \n",yylineno);
            }

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->const1=false;Ntype->id.declaration=true;Ntype->id.type=$1; Ntype->id.name=$2; Ntype->id.v=$4;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            } 

            |   IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.name=$1; Ntype->id.v=$3; Ntype->type=Char;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);

            }

            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->const1=true;Ntype->id.declaration=true; Ntype->id.name=$3; Ntype->id.v=$5;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: CONST( ) datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d) \n",yylineno);
            }
             
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->const1=false;Ntype->id.declaration=true; Ntype->id.name=$2; Ntype->id.v=$4;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            } 
                
            | datatype IDENTIFIER SEMICOLON 
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->const1=false; Ntype->id.declaration=true; Ntype->id.type=$1;Ntype->id.name=$2;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: datatype( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }

            | ifstatment
            {printf("exp: ifstatment( )lineNumber(%d)\n",yylineno);}

            | Whileloop
            {printf("exp: Whileloop( )lineNumber(%d)\n",yylineno);}

            | switchcase
            {printf("exp: switchcase( ) lineNumber(%d)\n",yylineno);}
            | repuntil
            {printf("exp: repuntil( ) lineNumber(%d)\n",yylineno);}

            |Forloop
            {printf("exp: Forloop( ) lineNumber(%d)\n",yylineno);}
            ;
        
datatype :TYPE_INT
        {
            $$=Int;
             printf("datatype: TYPE_INT( )\n");
        }
        | TYPE_STRING
         {
             $$=String;
            printf("datatype: TYPE_STRING( )\n");
        }
        | TYPE_FLOAT
        {
            $$=Float;
             printf("datatype: TYPE_FLOAT( )\n");
        }
        | TYPE_CHAR
        {
            $$=Char;
            printf("datatype: TYPE_CHAR( )\n");
        }
        | TYPE_BOOL
        {
            $$=Bool;
            printf("datatype: TYPE_BOOL( )\n");
        }
         ;



%%

void yyerror(char *s){
    printf("Error: %s\n",s);
}


int main (void)
{
    
     symboltable=newArrayListSized(sizeof(nodeType),100);
     

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



