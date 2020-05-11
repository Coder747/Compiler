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

int search_symboltable(ArrayList*st,nodeType *Nptr,int line)
{
    for(int i=0;i<st->length;i++)
        {
            nodeType* nextdata=NULL;
            nextdata= st->get(st,i);
            if(nextdata==NULL)
            {
                return -1;
            }
            if(strcmp(Nptr->id.name,nextdata->id.name)==0) // if there exists a variable with the name needed
            { 
                return i;// return the index
            }
           
    }
     return -1;

    }

typeEnum get_type(ArrayList*st,nodeType* Nptr,int line)
{
    int index;
    index=search_symboltable(st,Nptr,line);
    if(index!=-1)
    {
        nodeType* nextdata=NULL;
        nextdata= st->get(st,index);
        printf("%s checking type  %s \n",Nptr->id.name,nextdata->id.name);
        return nextdata->id.type;
    }
    else 
    {
        printf("getting type wasn't found in the symbol table rip\n");
        //panic(line);
    }
    return noType;
}

char* get_value(ArrayList*st,nodeType* Nptr,int line)
{
    int index;
    index=search_symboltable(st,Nptr,line);
    if(index!=-1)
    {
        nodeType* nextdata=NULL;
        nextdata= st->get(st,index);
        printf("%s checking value  %s \n",Nptr->id.name,nextdata->id.name);
        return nextdata->id.value;
    }
    else 
    {
        printf("getting value wasn't found in the symbol table rip\n");
        //panic(line);
    }
    return NULL;
}


    nodeType* add_to_symboltable(ArrayList* st, nodeType *Nptr,int line)
    {
        int index=search_symboltable(st,Nptr,line);
        if(index==-1)
        {
            if(Nptr->id.declaration==0)
           { 
               printf("Undeclared variable\n");
                //panic(line);
           }
           st->add(st,Nptr);
        }
        else //found in the symbol table
        {
            
            nodeType* nextdata;
            nextdata= st->get(st,index);
            if(Nptr->id.declaration>1)// redeclaration of the variable
            {
                printf("declaration number = %d ", Nptr->id.declaration);
                printf("redeclaration of the variable %s and %s error\n",Nptr->id.name,nextdata->id.name);
                //panic(line);
                
            }
            
            else if(Nptr->id.type != nextdata->id.type) // conflict of types
            {
                printf("Different type error\n");
                //panic(line);
            }
            else if(Nptr->constant)
            {
                printf("trying to overwrite a constant variable error\n");
                //panic(line);
            }
            else  
            {
                if( st->remove(st,index) == ALSUCCESS)
                { 
                    st->add(st,Nptr);
                    printf("warning varaible got overwritten\n"); 
                }
                else 
                    printf("adding to the symbol table failed\n");
            }
           

           
        }
        
        return  Nptr;
            
      

    }