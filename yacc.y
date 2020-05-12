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
    Const* ForConst;
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
%token <ForConst> VALUE_STRING VALUE_CHAR VALUE_FLOAT VALUE_BOOL VALUE_INT 
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

%type<ForConst> Boolexp
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
            {
                
                printf("Whileloop: WHILE( ) Condition( ) CURLY_OPEN statments( ) CURLY_CLOSE lineNumber(%d)\n" ,yylineno);
            }
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
            | Boolexp
            {printf("Condition: Boolexp lineNumber(%d)\n",yylineno);}
            ;


Arithmetic  :Arithmetic OPERATOR_MULTIPLY Arithmetic
            {
             printf("Arithmetic: Arithmetic( ) OPERATOR_MULTIPLY( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_DIVIDE Arithmetic
            {printf("Arithmetic: Arithmetic( ) OPERATOR_DIVIDE( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_PLUS Arithmetic
            {printf("Arithmetic: Arithmetic( ) OPERATOR_PLUS( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_SUBTRACT Arithmetic
            {printf("Arithmetic: Arithmetic( ) OPERATOR_SUBTRACT( ) Arithmetic( ) lineNumber(%d)\n",yylineno);}
            | BRACKET_OPEN Arithmetic BRACKET_CLOSE
            {printf("Arithmetic: BRACKET_OPEN Arithmetic( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);}

            | VALUE_INT 
            {
                nodeType* Ntype;
                Const* ptr;
                ptr=$1;
                Ntype=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Con; //constant number
                Ntype->id.type=Int;
                Ntype->id.value=ptr->v;
                $$=Ntype;
                
                printf("Arithmetic: VALUE_INT( ) lineNumber(%d)\n",yylineno);

            }

            | VALUE_FLOAT 
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$1;
                Ntype->id.value=ptr->v;
                Ntype->typeofvariable=Con; //constant number
                Ntype->id.type=Float;
                $$=Ntype;
                
                printf("Arithmetic: VALUE_FLOAT( ) lineNumber(%d)\n",yylineno);
            }

            | IDENTIFIER 
            {   
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Id;
                Ntype->id.name=$1;
                Ntype1=get_info(symboltable,Ntype,yylineno);
                Ntype->id.type= Ntype1->id.type;
                Ntype->id.value= Ntype1->id.value;
                $$=Ntype;
                printf("Arithmetic: IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
            ;



Boolexp     :BRACKET_OPEN VALUE_BOOL BRACKET_CLOSE 
            {printf("Boolexp: BRACKET_OPEN VALUE_BOOL( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);$$=$2;}
            | OPERATOR_NOT VALUE_BOOL
            {
                Const* ptr;
                ptr=malloc(sizeof(Const));
                ptr=$2;
                if (strcmp(ptr->v,"true")==0)
                    ptr->v="false";
                else 
                    ptr->v="true";
                $$=ptr;
                printf("Boolexp: OPERATOR_NOT( ) VALUE_BOOL( )lineNumber(%d)\n",yylineno);
            }
            |VALUE_BOOL
            {
                $$=$1;
                printf("Boolexp:VALUE_BOOL( )lineNumber(%d)\n",yylineno)
            ;}

exp         :IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                Ntype=malloc(sizeof(nodeType));
                arthmetic_ptr=malloc(sizeof(nodeType));
                arthmetic_ptr=$3;
                Ntype->typeofvariable=Id;
                Ntype->id.name=$1; 
                Ntype->id.value= arthmetic_ptr->id.value;
                Ntype->id.othertype= arthmetic_ptr->id.type;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp : IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }
            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                Ntype=malloc(sizeof(nodeType));
                arthmetic_ptr=malloc(sizeof(nodeType));
                arthmetic_ptr=$5;
                Ntype->constant=true;
                Ntype->id.declaration++;
                Ntype->typeofvariable=Id;
                Ntype->id.type=$2; 
                Ntype->id.name=$3; 
                Ntype->id.value= arthmetic_ptr->id.value;
                Ntype->id.othertype=arthmetic_ptr->id.type;

                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: CONST( ) datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_INT( ) lineNumber(%d) \n",yylineno);
            }

            | datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                Ntype=malloc(sizeof(nodeType));
                arthmetic_ptr=malloc(sizeof(nodeType));
                arthmetic_ptr=$4;
                Ntype->constant=false;
                Ntype->id.declaration++;
                Ntype->id.type=$1; 
                Ntype->id.name=$2; 
                Ntype->id.value= arthmetic_ptr->id.value;
                Ntype->id.othertype=arthmetic_ptr->id.type;
                
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp : datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }
            | datatype IDENTIFIER SEMICOLON 
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->constant=false;
                Ntype->id.declaration++; 
                Ntype->id.type=$1;
                Ntype->id.name=$2;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: datatype( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
            | IDENTIFIER OPERATOR_ASSIGNMENT Boolexp SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$3;
                Ntype->id.value=ptr->v;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->id.name= $1;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) Boolexp( ) lineNumber(%d)\n",yylineno);
            }

            | CONST TYPE_BOOL IDENTIFIER OPERATOR_ASSIGNMENT Boolexp SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$5;
                Ntype->id.value=ptr->v;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->id.declaration++;
                Ntype->typeofvariable=Id;
                Ntype->id.name=$3; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                printf("exp: CONST( ) TYPE_BOOL( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_BOOL( ) lineNumber(%d) \n",yylineno);
            }

            | TYPE_BOOL IDENTIFIER OPERATOR_ASSIGNMENT Boolexp SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$4;
                Ntype->id.value=ptr->v;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->constant=false;
                Ntype->id.declaration++;
                Ntype->id.name=$2; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp : datatype( ) TYPE_BOOL( ) OPERATOR_ASSIGNMENT VALUE_BOOL( ) lineNumber(%d)\n",yylineno);
            }
            | TYPE_BOOL IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=Bool;  
                Ntype->id.name=$2; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp : datatype( ) TYPE_BOOL( ) lineNumber(%d)\n",yylineno);
            }

            

            | CONST TYPE_STRING IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));

                Const* ptr;
                ptr=$5;
                Ntype->id.value=ptr->v;
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=$3; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: CONST( ) TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d) \n",yylineno);
            }

            | TYPE_STRING IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->constant=false;
                Const* ptr;
                ptr=$4;
                Ntype->id.value=ptr->v;
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=$2; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            } 

            | TYPE_STRING IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=String; 
                Ntype->id.name=$2; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: TYPE_STRING( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            } 
            | IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$3;
                Ntype->id.value=ptr->v;
                Ntype->id.othertype= String;
                Ntype->typeofvariable=Id;
                Ntype->id.name=$1; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            }

            | CONST TYPE_CHAR IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$5;
                Ntype->id.value=ptr->v;
                Ntype->id.othertype=Char;
                Ntype->id.type=Char; 
                if(Ntype->id.type!=ptr->t)
                {
                    printf("different type pls\n");
                }
                Ntype->constant=true;
                Ntype->id.declaration++; 
                Ntype->typeofvariable=Id;
                Ntype->id.name=$3; 

                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: CONST( ) TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d) \n",yylineno);
            }
             
            | TYPE_CHAR IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$4;
                Ntype->id.value=ptr->v;
                Ntype->id.othertype=Char;
                Ntype->id.type=Char; 
                if(Ntype->id.type!=ptr->t)
                {
                    printf("different type pls\n");
                }
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 

                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            } 
            
            | TYPE_CHAR IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->constant=false;
                Ntype->id.type=Char; 
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: TYPE_CHAR( ) IDENTIFIER( )lineNumber(%d)\n",yylineno);
            } 
            | IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$3;
                Ntype->id.value=ptr->v;
                Ntype->id.othertype=Char; 
               
                Ntype->typeofvariable=Id;
                Ntype->id.name=$1;
                $$=add_to_symboltable(symboltable,Ntype,yylineno);
                
                printf("exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
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
        | TYPE_FLOAT
        {
            $$=Float;
            printf("datatype: TYPE_FLOAT( )\n");
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



