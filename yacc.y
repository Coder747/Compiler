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
ArrayList* tableptr;
int scopenumber;

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
// create tableptr.h sybmoltable.c
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
%type<string> newscope_open newscope_close

%%



program : code {printf("\nProgram End \n\n");};

code : code line {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"code: code line --> Line Number (%d) \n", yylineno);}
     |           {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"code: Epsilon   --> Line Number (%d) \n", yylineno); $$=NULL;}
     ;

line        : exp
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"line: exp( )\n");}
            | error SEMICOLON 
            | error CURLY_CLOSE
            ;

switchcase  : SWITCH BRACKET_OPEN Condition BRACKET_CLOSE newscope_open switchstmt newscope_close
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"switchcase: SWITCH( ) Condition( ) newscope_open switchstmt( ) newscope_close lineNumber(%d)\n",yylineno);}
            ;

default     : DEFAULT COLON statments
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"default: DEFAULT( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
            | DEFAULT COLON statments break
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"default: DEFAULT( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
            ;

switchstmt  : case 
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"switchstmt: case( ) lineNumber(%d)\n",yylineno);}
            | switchstmt case
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"switchstmt: switchstmt( ) case( ) lineNumber(%d)\n",yylineno);}
            ;

case        : CASE Condition COLON statments 
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"case: CASE( ) Condition( ) COLON statments( ) lineNumber(%d)\n",yylineno);}
            | CASE  Condition COLON statments break
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"case: CASE( ) Condition( ) COLON statments( ) break( ) lineNumber(%d)\n",yylineno);}
            | default
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"case: default( ) lineNumber(%d)\n",yylineno);}
            ;

break       : BREAK SEMICOLON
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"break: BREAK( ) SEMICOLON( ) lineNumber(%d)\n",yylineno);}
            ;

repuntil    : REPEAT newscope_open statments UNTIL BRACKET_OPEN Condition BRACKET_CLOSE newscope_close
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"repuntil: REPEAT( ) newscope_open statments( ) UNTIL( ) Condition( ) newscope_close lineNumber(%d)\n",yylineno);}
            ;



Whileloop   : WHILE BRACKET_OPEN Condition BRACKET_CLOSE newscope_open statments newscope_close
            {
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Whileloop: WHILE( ) Condition( ) newscope_open statments( ) newscope_close lineNumber(%d)\n" ,yylineno);
            }
            ;

Forloop     : FOR BRACKET_OPEN IDENTIFIER OPERATOR_ASSIGNMENT VALUE_INT SEMICOLON Condition SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic  BRACKET_CLOSE newscope_open statments newscope_close
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Forloop: FOR( ) BRACKET_OPEN IDENTIFIER( ) OPERATOR_ASSIGNMENT VALUE_INT( ) SEMICOLON condition( ) SEMICOLON IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) BRACKET_CLOSE newscope_open statments( ) newscope_close lineNumber(%d)\n",yylineno);}
            ;

newscope_open:  CURLY_OPEN
            {
                scopenumber++;
                tableptr= createNewScope(tableptr, sizeof(nodeType));
                $$=$1;
            }
newscope_close: CURLY_CLOSE
            {
                scopenumber--;
                tableptr=tableptr->prev;
                $$=$1;
            }

ifstatment  : IF BRACKET_OPEN Condition BRACKET_CLOSE newscope_open statments newscope_close ELSE newscope_open statments newscope_close
            {
            FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"ifstatment: IF ( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE newscope_open statment( ) newscope_close ELSE( ) newscope_open statment( ) newscope_close lineNumber(%d)\n",yylineno);
            }

            | IF BRACKET_OPEN Condition BRACKET_CLOSE newscope_open statments newscope_close
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"ifstatment: IF( ) BRACKET_OPEN Condition( ) BRACKET_CLOSE newscope_open statment( ) newscope_close lineNumber(%d) \n",yylineno);}
            ;


statment    :exp
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"statment: exp( ) lineNumber(%d)\n",yylineno);}
            ;

statments    : statment
             {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"statments: statment( ) lineNumber(%d)\n",yylineno);}
             |statments statment
             {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"statments: statments( ) statment( )lineNumber(%d)\n",yylineno);}
             ;

Condition   : Condition L Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) L( ) Condition( ) lineNumber(%d)\n",yylineno);}
            | Condition G Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) G( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition LE Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) LE( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition GE Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) GE( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition EQ Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) EQ( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition NE Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) NE( ) Condition( )lineNumber(%d)\n",yylineno);}
            | Condition OR Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) OR( ) Condition( ) lineNumber(%d)\n",yylineno);}
            | Condition AND Condition
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Condition( ) AND( ) Condition( )lineNumber(%d)\n",yylineno);}
            |Arithmetic
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Arithmetic lineNumber(%d)\n",yylineno);}
            | VALUE_STRING
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: VALUE_STRING( ) lineNumber(%d)\n",yylineno);}
            | Boolexp
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Condition: Boolexp lineNumber(%d)\n",yylineno);}
            ;



             

Arithmetic  :Arithmetic OPERATOR_MULTIPLY Arithmetic
            {// mul=1,divide=2,add=3,sub=4
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=$1;
                Ntype2=$3;
                
                Ntype->final_int=1;
                Ntype->final_float=1.0;
                
                Ntype=arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,1); //MULTIPLY = 1
                
               // sendtotest(Ntype,1);
                $$=Ntype;
             FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_MULTIPLY( ) Arithmetic( )lineNumber(%d)\n",yylineno);
            }
            | Arithmetic OPERATOR_DIVIDE Arithmetic
            {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=$1;
                Ntype2=$3;

                Ntype->final_int=1;
                Ntype->final_float=1.0;
                
                Ntype=arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,2);  //DIVIDE = 2
                ops=0;
                //sendtotest(Ntype,2);
                $$=Ntype;

                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_DIVIDE( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_PLUS Arithmetic
            {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=$1;
                Ntype2=$3;

                Ntype->final_int=0;
                Ntype->final_float=0.0;
                
                Ntype=arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,3);  //ADD = 3
                //sendtotest(Ntype,3);
                $$=Ntype;
                
            
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_PLUS( ) Arithmetic( )lineNumber(%d)\n",yylineno);}
            | Arithmetic OPERATOR_SUBTRACT Arithmetic
            {
                nodeType* Ntype;
                nodeType* Ntype1;
                nodeType* Ntype2;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype2=malloc(sizeof(nodeType));
                Ntype1=$1;
                Ntype2=$3;

                Ntype->final_int=0;
                Ntype->final_float=0.0;

                arithmetic_opr(Ntype,Ntype1,Ntype2,yylineno,4);   //SUBTRACT = 4
                //sendtotest(Ntype,4);
                $$=Ntype;
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: Arithmetic( ) OPERATOR_SUBTRACT( ) Arithmetic( ) lineNumber(%d)\n",yylineno);}
            | BRACKET_OPEN Arithmetic BRACKET_CLOSE
            {
                nodeType* Ntype;
                nodeType*  Ntype1;
                Ntype=malloc(sizeof(nodeType));
                Ntype1=malloc(sizeof(nodeType));
                Ntype1=$2;
                Ntype->generaltype=Ntype1->generaltype;
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: BRACKET_OPEN Arithmetic( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);
                $$=Ntype;
            }

            | VALUE_INT 
            {
                nodeType* Ntype;
                Const* ptr;
                ptr=$1;
                Ntype=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Con; //constant number
                Ntype->con=*ptr;
                Ntype->final_int=ptr->intpls;
                Ntype->generaltype=Int;
                $$=Ntype;
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: VALUE_INT( ) lineNumber(%d)\n",yylineno);

            }

            | VALUE_FLOAT 
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$1;
                Ntype->typeofvariable=Con; //constant number
                Ntype->con=*ptr;
                Ntype->final_float=ptr->floatpls;
                Ntype->generaltype=Float;
                $$=Ntype;
                
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: VALUE_FLOAT( ) lineNumber(%d)\n",yylineno);
            }

            | IDENTIFIER 
            {   
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->typeofvariable=Id;
                Ntype->id.name=$1;
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->generaltype=Ntype->id.type;
                Ntype->id.check=loadops;
                $$=Ntype;

                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Arithmetic: IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            }
            ;


Boolexp     :BRACKET_OPEN VALUE_BOOL BRACKET_CLOSE 
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Boolexp: BRACKET_OPEN VALUE_BOOL( ) BRACKET_CLOSE lineNumber(%d)\n",yylineno);$$=$2;}
            | OPERATOR_NOT VALUE_BOOL
            {
                Const* ptr;
                ptr=malloc(sizeof(Const));
                ptr=$2;
                if (strcmp(ptr->others,"true")==0)
                    ptr->others="false"; 
                else 
                    ptr->others="true";
                $$=ptr;
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Boolexp: OPERATOR_NOT( ) VALUE_BOOL( )lineNumber(%d)\n",yylineno);
            }
            |VALUE_BOOL
            {
                $$=$1;
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"Boolexp:VALUE_BOOL( )lineNumber(%d)\n",yylineno);
            }
            
            ;

exp         :IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=$3;
                Ntype->id.name=$1;
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.othertype= arthmetic_ptr->generaltype;
                 if(arthmetic_ptr->typeofvariable==Id)
                {
                    if(arthmetic_ptr->id.type==Int)
                        Ntype->id.intpls=arthmetic_ptr->id.intpls;
                    else
                        Ntype->id.floatpls=arthmetic_ptr->id.floatpls;
                    
                }
                else if(arthmetic_ptr->typeofvariable==Con)
                {
                    if(arthmetic_ptr->con.t==Int)
                        Ntype->id.intpls=arthmetic_ptr->con.intpls;
                    else
                        Ntype->id.floatpls=arthmetic_ptr->con.floatpls;
                }
                else 
                {
                    if(arthmetic_ptr->generaltype==Int)
                        Ntype->id.intpls=arthmetic_ptr->final_int;
                    else
                        Ntype->id.floatpls=arthmetic_ptr->final_float;
                }

                Ntype->typeofvariable=Id;
                Ntype->final_int=arthmetic_ptr->final_int;
                Ntype->final_float=arthmetic_ptr->final_float;
                
                Ntype->id.check=store;
                sendtotest(arthmetic_ptr,-1);
                sendtotest(Ntype,-1);
                ops=0;
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }
            | datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                nodeType * check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=$4;
                Ntype->constant=false;
                Ntype->id.name=$2; 
                Ntype->id.declaration++;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                Ntype->typeofvariable=Id;
                Ntype->id.type=$1; 
                if(arthmetic_ptr->typeofvariable==Id)
                {
                   Ntype->id.othertype= arthmetic_ptr->id.type;
                   if(arthmetic_ptr->id.type==Int)
                        Ntype->id.intpls=arthmetic_ptr->id.intpls;
                    else 
                        Ntype->id.floatpls=arthmetic_ptr->id.floatpls;
                }
                else if(arthmetic_ptr->typeofvariable==Con)
                {
                    
                    Ntype->id.othertype= arthmetic_ptr->con.t;
                    if(arthmetic_ptr->con.t==Int)
                    {
                         Ntype->id.intpls=arthmetic_ptr->con.intpls;
                    }
                    else if (arthmetic_ptr->con.t==Float)
                    {      
                         Ntype->id.floatpls=arthmetic_ptr->con.floatpls;
                    }
                }
                else 
                {
                    Ntype->id.othertype= arthmetic_ptr->generaltype;
                    if(arthmetic_ptr->generaltype==Int)
                    {
                         
                         Ntype->id.intpls=arthmetic_ptr->final_int;
                    }
                    else if (arthmetic_ptr->generaltype==Float)
                    {        
                        
                         Ntype->id.floatpls=arthmetic_ptr->final_float;
                    }
                }

                if(Ntype->id.type!=Ntype->id.othertype)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); fprintf(fpp,"error type miss match\n");
                    panic(yylineno);
                }
                Ntype->final_int=arthmetic_ptr->final_int;
                Ntype->final_float=arthmetic_ptr->final_float;
                Ntype->id.check=store;
                sendtotest(arthmetic_ptr,-1);
                sendtotest(Ntype,-1);

                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT Arithmetic( ) lineNumber(%d)\n",yylineno);
            }


            | CONST datatype IDENTIFIER OPERATOR_ASSIGNMENT Arithmetic SEMICOLON
            {
                nodeType* Ntype;
                nodeType* arthmetic_ptr;
                nodeType* check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.type=$2; 
                Ntype->id.name=$3;
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                arthmetic_ptr=$5;
                Ntype->constant=true;
                Ntype->id.declaration++;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                Ntype->typeofvariable=Id;
                 Ntype->id.check=store;
                Ntype->id.value= arthmetic_ptr->id.value;
                Ntype->id.othertype=arthmetic_ptr->id.type;

                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) datatype( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_INT( ) lineNumber(%d) \n",yylineno);
            }

            
            | datatype IDENTIFIER SEMICOLON 
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.declaration++;
                Ntype->id.name=$2;
                Ntype->typeofvariable=Id;
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                } 
                Ntype->id.type=$1;
                Ntype->id.check=load;
                sendtotest(Ntype,-1);
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: datatype( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);

            }
            | IDENTIFIER OPERATOR_ASSIGNMENT Boolexp SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$3;
                Ntype->con=*ptr;
                Ntype->id.name= $1;
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=ptr->t;
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) Boolexp( ) lineNumber(%d)\n",yylineno);
            }

            | CONST TYPE_BOOL IDENTIFIER OPERATOR_ASSIGNMENT Boolexp SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=$5;
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.check=store;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->id.declaration++;
                Ntype->typeofvariable=Id;
                Ntype->id.name=$3; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) TYPE_BOOL( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_BOOL( ) lineNumber(%d) \n",yylineno);
            }

            | TYPE_BOOL IDENTIFIER OPERATOR_ASSIGNMENT Boolexp SEMICOLON
            {
                
                nodeType* check;
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); 
                fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=$4;
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.check=store;
                Ntype->id.type=Bool;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->constant=false;
                Ntype->id.declaration++;
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : datatype( ) TYPE_BOOL( ) OPERATOR_ASSIGNMENT VALUE_BOOL( ) lineNumber(%d)\n",yylineno);
            }
            | TYPE_BOOL IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                nodeType* check;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=Bool;
                Ntype->id.check=load;  
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp : datatype( ) TYPE_BOOL( ) lineNumber(%d)\n",yylineno);
            }

            | TYPE_BOOL IDENTIFIER OPERATOR_ASSIGNMENT IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=$4;
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                Ntype->id.value=Ntype1->id.value;
                Ntype->id.check=store;
                Ntype->id.type=Bool; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }

             | TYPE_BOOL IDENTIFIER OPERATOR_ASSIGNMENT OPERATOR_NOT IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=$5;
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                if(strcmp(Ntype1->id.value,"true")==0)
                    Ntype->id.value="false";
                else 
                    Ntype->id.value="true";
            
                Ntype->id.check=store;
                Ntype->id.type=Bool; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }



            | CONST TYPE_STRING IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType * check;
                Const* ptr;
                ptr=$5;
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype1->con=*ptr;
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->constant=true;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=$3; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d) \n",yylineno);
            }

            | TYPE_STRING IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=$4;
                Ntype1->con=*ptr;
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.type=String;
                Ntype->id.othertype=ptr->t;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_STRING( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            } 

            | TYPE_STRING IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.scope=scopenumber;
                FILE *fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++;
                Ntype->id.type=String; 
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a"); 
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                Ntype->id.check= load;
                sendtotest(Ntype,-1);
                
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                
                fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_STRING( ) IDENTIFIER( ) lineNumber(%d)\n",yylineno);
            } 
            | IDENTIFIER OPERATOR_ASSIGNMENT VALUE_STRING SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Const* ptr;
                ptr=$3;
                Ntype1->con=*ptr;
                Ntype->id.name=$1; 
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.othertype= String;
                Ntype->id.value=ptr->others;
                Ntype->id.check=store;
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_STRING( ) lineNumber(%d)\n",yylineno);
            }
            | TYPE_STRING IDENTIFIER OPERATOR_ASSIGNMENT IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=$4;
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                Ntype->id.value=Ntype1->id.value;
                Ntype->id.check=store;
                Ntype->id.type=String; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }

            | CONST TYPE_CHAR IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                nodeType* check;
                Const* ptr;
                ptr=$5;
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.scope=scopenumber;
                Ntype->id.check=store;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Ntype->id.othertype=ptr->t;
                Ntype->id.type=Char;
                Ntype->constant=true;
                Ntype->id.declaration++; 
                Ntype->typeofvariable=Id;
                Ntype->id.name=$3; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }

                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: CONST( ) TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d) \n",yylineno);
            }
             
            | TYPE_CHAR IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Const* ptr;
                ptr=$4;
                Ntype1->con=*ptr;
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=ptr->t;
                Ntype->id.check=store;
                Ntype->id.type=Char; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            } 
            | TYPE_CHAR IDENTIFIER OPERATOR_ASSIGNMENT IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype1->id.name=$4;
                Ntype1=get_info(tableptr,Ntype1,yylineno);
                Ntype->id.othertype=Ntype1->id.type;
                Ntype->id.value=Ntype1->id.value;
                Ntype->id.check=store;
                Ntype->id.type=Char; 
                Ntype->constant=false;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }


            | TYPE_CHAR IDENTIFIER SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                nodeType* check;
                Ntype->constant=false;
                Ntype->id.type=Char;
                Ntype->id.check=load;
                Ntype->typeofvariable=Id;
                Ntype->id.declaration++; 
                Ntype->id.name=$2; 
                check = search_symboltable(tableptr,Ntype,yylineno);
                if(check!=NULL)
                {
                    FILE *fpp = fopen("Outputs/Errors-Warnings.txt","a");
                    fprintf(fpp,"redeclaration of the variable %s error line number %d  \n",Ntype->id.name,yylineno);
                    panic(yylineno);
                }
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: TYPE_CHAR( ) IDENTIFIER( )lineNumber(%d)\n",yylineno);
            } 
            | IDENTIFIER OPERATOR_ASSIGNMENT VALUE_CHAR SEMICOLON
            {
                nodeType* Ntype;
                Ntype=malloc(sizeof(nodeType));
                nodeType* Ntype1;
                Ntype1=malloc(sizeof(nodeType));
                Ntype->id.scope=scopenumber;
                FILE * fpp = fopen("Outputs/SymbolTable.txt","a"); fprintf(fpp,"scope = %d\n",Ntype->id.scope);
                Const* ptr;
                ptr=$3;
                Ntype1->con=*ptr;
                Ntype->id.name=$1;
                Ntype=get_info(tableptr,Ntype,yylineno);
                Ntype->id.check=store;
                Ntype->id.value=ptr->others;
                Ntype->id.othertype=Char; 
               
                Ntype->typeofvariable=Id;
                $$=add_to_symboltable(tableptr,Ntype,yylineno);
                sendtotest(Ntype1,-1);
                sendtotest(Ntype,-1);
                fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: IDENTIFIER( ) OPERATOR_ASSIGNMENT( ) VALUE_CHAR( ) lineNumber(%d)\n",yylineno);
            }

            | ifstatment
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: ifstatment( )lineNumber(%d)\n",yylineno);}

            | Whileloop
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: Whileloop( )lineNumber(%d)\n",yylineno);}

            | switchcase
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: switchcase( ) lineNumber(%d)\n",yylineno);}
            | repuntil
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: repuntil( ) lineNumber(%d)\n",yylineno);}

            |Forloop
            {FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"exp: Forloop( ) lineNumber(%d)\n",yylineno);}
            ;
        
datatype :TYPE_INT
        {
            
             FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"datatype: TYPE_INT( )\n");
             $$=Int;
        }
        | TYPE_FLOAT
        {
            
            FILE *fpp = fopen("Outputs/Parsing.txt","a"); fprintf(fpp,"datatype: TYPE_FLOAT( )\n");
            $$=Float;
        }
        ;
        


%%

void yyerror(char *s){
    FILE * fpp = fopen("Outputs/Errors-Warnings.txt","a");
    fprintf(fpp,"Error: %s at line number %d\n",s,yylineno);
    fclose(fpp);
}


int main (void)
{
    symboltable=newArrayListSized(sizeof(nodeType),100);
    tableptr=symboltable;
    scopenumber=0;

    yyin = fopen("test_files/finaltest.txt","r+");
    if(yyin == NULL)
        printf("Error NULL \n");
    else{
        printf("Parsing... \n\n");
        yyparse();
    }
    return 0;
      
}


