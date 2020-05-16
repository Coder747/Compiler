#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
// #include "arraylist.c"
// #include "structs.h"
#include "structs.h"
#include "arraylist.h"


 void panic(int line)
 {
    (void)fprintf(stderr,"\nPanic in line %d \n",line);
    (void)perror("Semantic error");
    abort();
 } 


 void sendtotest(nodeType* nptr)
{
    if(nptr==NULL)
        return;
    switch(nptr->typeofvariable)
    {
        case Con:
        {   
            printf("%d con\n",nptr->con.intpls);
            break;
        }
        case Id:
        {
            printf("%s id\n",nptr->id.value);
            break;
        }
        case Opr:
        {
            printf(" pls\n");
            sendtotest(nptr->opr.op[0]);
            if(nptr->opr.nops>1)
            sendtotest(nptr->opr.op[1]);
            break;

        }
    } 
}
int excute_int(int x, int y,int operand)
{
    switch(operand)
    {
        case 1:{return x*y; break;}//multiply
        case 2:{return x/y; break;}//divide
        case 3:{return x+y; break;}// add
        case 4:{return x-y; break;}//subtract
        default: {printf("default\n");return 0;}
    } 
}
float excute_float(float x, float y,int operand)
{
    switch(operand)
    {
        case 1:{return x*y; break;}//multiply
        case 2:{return x/y; break;}//divide
        case 3:{return x+y; break;}// add
        case 4:{return x-y; break;}//subtract
        default: return 0.0;
    } 
}

int type1;
void get_final_value(nodeType* nptr,int* final_int,float* final_float,int operand)
{
    
   
    if(nptr==NULL)
        return ;
        
    switch(nptr->typeofvariable)
    {
        case Con:
        {
            if(nptr->con.t==Int)
            {    
                type1=Int;
                *final_int=excute_int(nptr->con.intpls,*final_int, operand);
            }  
            else if(nptr->con.t==Float)
            {
                type1=Float;
                //printf("con %d \n",nptr->con.floatpls);
                *final_float=excute_float(nptr->con.floatpls,*final_float,operand);
            }

            break;
        }
        case Id:
        {
            if(nptr->id.type==Int)
            {    
                type1=Int;
                
                //printf("id %d \n",nptr->id.intpls);
                *final_int=excute_int(nptr->id.intpls,*final_int, operand);
            }  
            else if(nptr->id.type==Float)
            {
                type1=Float;
                printf("id %f \n",nptr->id.floatpls);
                *final_float=excute_float(nptr->id.floatpls,*final_float,operand);
            }
            break;
        }
        case Opr:
        {
            // nptr->generaltype=type1;
            get_final_value(nptr->opr.op[0],final_int,final_float,nptr->opr.oper);
            if(nptr->opr.nops>1)
            get_final_value(nptr->opr.op[1],final_int,final_float,nptr->opr.oper);
          
           //printf("final %d \n",nptr->final_int);
           
                
            break;

        }
    } 
    
        
}


nodeType* search_symboltable(ArrayList*st,nodeType *Nptr,int line)
{
    nodeType* nextdata=NULL;
    for(int i=0;i<st->length;i++)
        {
            nextdata= st->get(st,i);
            if(nextdata==NULL)
            {
                break;
            }
            if(strcmp(Nptr->id.name,nextdata->id.name)==0) // if there exists a variable with the name needed
            { 
                printf("found %s! ", Nptr->id.name);
       
                
                    nextdata->index=i;
                    return nextdata;// return the index
                
            }
        }
        if(st->prev!=NULL)
        {
            nextdata=search_symboltable(st->prev,Nptr,line);
            return nextdata;
        }
        else 
            return NULL;

    }

nodeType* get_info(ArrayList*st,nodeType* Nptr,int line)
{
    int index;
    nodeType* nextdata;
    //nextdata=malloc(sizeof(nodeType));
    nextdata=search_symboltable(st,Nptr,line);
    printf("pls\n");
    if(nextdata!=NULL)
    {
        printf(" checking type of %s is %d \n",Nptr->id.name,nextdata->id.type);
        return nextdata;
    }
    else 
    {
        printf("getting type wasn't found in the symbol table rip\n");
        //panic(line);
    }
    return NULL;
}


nodeType* add_to_symboltable(ArrayList* st, nodeType *Nptr,int line)
{
    nodeType*nextdata;
    nextdata=search_symboltable(st,Nptr,line);

    
    if(nextdata==NULL) // wasn't found in the symboltable
    {
        if(Nptr->id.declaration==0)
        { 
            printf("Undeclared variable\n");
            ////panic(line);
        }
        
        st->add(st,Nptr);
        
    }
    

    else //found in the symbol table
    {
        int index=nextdata->index;  // for removing

       

         if(nextdata->id.type!=Nptr->id.othertype)
        {
            printf("different types hello?\n");
            ////panic(line);
        }
        if(Nptr->constant)
        {
            printf("trying to overwrite a constant variable error\n");
            ////panic(line);
        }
        else if( st->set(st,index,Nptr) == ALSUCCESS)
        { 
            printf("warning varaible got overwritten\n"); 
        }
        else 
            printf("adding to the symbol table failed\n");
    }
    

    if(Nptr->id.type==Int)
        printf("variable (%s) added to the symboltable with value integer(%d) \n ",Nptr->id.name,Nptr->final_int);
    else if (Nptr->id.type==Float)
        printf("variable (%s) added to the symboltable with value Float(%f) \n ",Nptr->id.name,Nptr->final_float);
    else 
        printf("variable (%s) added to the symboltable with value (%s) \n ",Nptr->id.name,Nptr->id.value);


        return  Nptr;
}

nodeType* arithmetic_opr(nodeType *Ntype,nodeType *Ntype1,nodeType *Ntype2,int yylineno,int operation){

                Ntype->typeofvariable= Opr;
                Ntype->opr.oper=operation; // OPERATOR_MULTIPLY
                Ntype->opr.nops=2; // number of operations
                Ntype->opr.op[0]=Ntype1;
                Ntype->opr.op[1]=Ntype2;
                
                Ntype->generaltype=Ntype1->generaltype;
                Ntype->generaltype2=Ntype2->generaltype;
                
                if(Ntype->generaltype!=Ntype->generaltype2)
                {
                    printf("type error \n");
                    panic(yylineno);
                }


                get_final_value(Ntype,&Ntype->final_int,&Ntype->final_float,Ntype->opr.oper);

                return Ntype; 


}

    