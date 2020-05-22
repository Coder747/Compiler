#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "structs.h"
#include "z_arraylist/arraylist.h"

ArrayList* symboltable;
ArrayList* tableptr;

 void panic(int line)
 {
    
    // (void)fprintf(stderr,"\nPanic in line %d \n",line);
    // (void)perror("Semantic error");
    FILE *fp = fopen("Outputs/Errors-Warnings.txt","a");
    fprintf(fp,"Semantic Error at line number %d\n",line);
    abort();
 } 


int count1=0; int count2=0;int ops=0; 

 void sendtotest(nodeType* nptr,int operand)
{
    FILE *fp;
    fp =fopen("Outputs/Quadruples.txt","a"); 
    if(nptr==NULL)
        return;
        
    switch(nptr->typeofvariable)
    {
        
        case Con:
        {   
             if(nptr->con.t==Int)
            {    
                fprintf(fp,"MOV R%d,%d\n", count1,nptr->con.intpls);
                ops++;
                nptr->taken=true;
            }  
            else if(nptr->con.t==Float)
            {
               fprintf(fp,"MOV Rf%d,%f\n", count1,nptr->con.floatpls);
               ops++;
            }  
            else
                fprintf(fp,"MOV R%d,%s\n", count1,nptr->con.others); 
            count1++;      
            break;
        }
        case Id:
        {
           if(nptr->id.type==Int)
            {    
                
                if(nptr->id.check==store)// store
                    fprintf(fp,"STOREi %s, R%d \n",nptr->id.name,count1==0?0:count1-1);//--count is a temporary solution
                else if (nptr->id.check==load)
                    fprintf(fp,"LOADi R%d,%s \n",count1,nptr->id.name);
                else if(nptr->id.check==loadops)
                {

                    fprintf(fp,"LOADi R%d,%s \n",count1,nptr->id.name);
                    ops++;
                }
                count1++; 
            }  
            else if(nptr->id.type==Float)
            {
                 if(nptr->id.check==store)// store
                fprintf(fp,"STOREf %s, R%d \n",nptr->id.name,count1==0?0:count1-1);//--count is a temporary solution
                else 
                fprintf(fp,"LOADf R%d,%s \n",count1,nptr->id.name);
                count1++;
            }
              else if(nptr->id.type==String)
            {
                if(nptr->id.check==load)
                    fprintf(fp,"LOADs R%d,%s\n",count1,nptr->id.name);     //if input contains a string
                else 
                fprintf(fp,"STOREs %s, R%d \n",nptr->id.name,count1==0?0:count1-1);
                count1++;
            }
            else if(nptr->id.type==Char)
            {
                if(nptr->id.check==load)
                    fprintf(fp,"LOADc R%d,%s\n",count1,nptr->id.name);     //if input contains a string
                else 
                fprintf(fp,"STOREc %s, R%d \n",nptr->id.name,count1==0?0:count1-1);
                count1++;   //if input contains a string

            }
            else if(nptr->id.type==Bool)
            {
                if(nptr->id.check==load)
                fprintf(fp,"LOADb R%d,%s\n", count1,nptr->id.name);     //if input contains a string
                else
                fprintf(fp,"STOREb %s, R%d \n",nptr->id.name,count1==0?0:count1-1);
                count1++;
            }  
            break;
        }
        case Opr:
        {
            
            
             operand= nptr->opr.oper;
             fprintf(fp,"oprand = %d\n",operand);
            //if(!nptr->opr.op[0]->taken)
                sendtotest(nptr->opr.op[0],operand);
                
                
            //if(!nptr->opr.op[1]->taken)
                sendtotest(nptr->opr.op[1],operand);//
           
            
            break;

        }
    } 
        printf("ops = %d \n",ops);
                if(ops==2)
                {
                    switch(operand)
                    {
                        case 1:{fprintf(fp,"MUL R%d,R%d,R%d\n",count1,count1-1,count1-2);break;}
                        case 2:{fprintf(fp,"DIV R%d,R%d,R%d\n",count1,count1-1,count1-2);break;}
                        case 3:{fprintf(fp,"ADD R%d,R%d,R%d\n",count1,count1-1,count1-2);break;}
                        case 4:{fprintf(fp,"SUB R%d,R%d,R%d\n",count1,count1-1,count1-2);break;}
                    }
                    count1++;
                    ops=0;
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
                *final_int=excute_int(nptr->con.intpls,*final_int, operand);

            }  
            else if(nptr->con.t==Float)
            {
               
                //printf("con %d \n",nptr->con.floatpls);
                *final_float=excute_float(nptr->con.floatpls,*final_float,operand);
            }

            break;
        }
        case Id:
        {
            if(nptr->id.type==Int)
            {    
                
                //printf("id %d \n",nptr->id.intpls);
                *final_int=excute_int(nptr->id.intpls,*final_int, operand);
            }  
            else if(nptr->id.type==Float)
            {
                printf("id %f \n",nptr->id.floatpls);
                //*final_float=excute_float(nptr->id.floatpls,*final_float,operand);
            }
            break;
        }
        case Opr:
        {
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
                //printf("found %s! ", Nptr->id.name);
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
    if(nextdata!=NULL)
    {
        printf(" getting variable %s \n",Nptr->id.name);
        return nextdata;
    }
    else 
    {
        printf("variable %s wasn't found in the symbol table rip\n",Nptr->id.name);
        panic(line);
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
            printf("different types error?\n");
            panic(line);
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
                Ntype->opr.oper=operation; // OPERATOR
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