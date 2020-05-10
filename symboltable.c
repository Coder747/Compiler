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
                printf("NULL");
                    return -1;
            }
            if(strcmp(Nptr->id.name,nextdata->id.name)==0) // if there exists a variable with the name needed
            { 
               
                if(Nptr->id.declaration==true&& nextdata->id.declaration==true)// redeclaration of the variable
                {
                    printf("redeclaration of the variable error");
                    panic(line);
                    
                }
                
                else if(Nptr->id.type != nextdata->id.type) // conflict of types
                {
                    printf("Different type error\n");
                    panic(line);
                }
                else
                {
                    // printf("%d %d \n",Nptr->type,nextdata->type);
                    printf("warning varaible gets overwritted\n"); 
                }
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
        return nextdata->type;
    }
    else 
    {
        printf("getting type wasn't found in the symbol table rip\n");
        panic(line);
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
        return nextdata->id.v;
    }
    else 
    {
        printf("getting value wasn't found in the symbol table rip\n");
        panic(line);
    }
    return NULL;
}


    nodeType* add_to_symboltable(ArrayList* st, nodeType *Nptr,int line)
{
        int index=search_symboltable(st,Nptr,line);
        if(index==-1)
        {
            if(!Nptr->id.declaration)
           { 
               printf("Undeclared variable\n");
                panic(line);
           }
           st->add(st,Nptr);
        }
        else 
        {
           if( st->remove(st,index) == ALSUCCESS) 
                st->add(st,Nptr);
        }
        
    return  Nptr;
}