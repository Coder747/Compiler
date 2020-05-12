#include <stdbool.h>

typedef enum { Con, Id, Opr } nodeEnum;

typedef enum { Int, Float, Char,String, Bool, ConstInt, ConstFloat, ConstChar, ConstBool, ConstString ,noType} typeEnum;



typedef struct
{
    typeEnum t;
    char* v;
}Const; /* constants numbers/strings/etc*/
typedef struct 
{
    typeEnum type;
    typeEnum othertype;
	int scope;
	char* name;
	bool same;
	char* value;
	int declaration;
} idNodeType;/* identifiers */

/* operators */
typedef struct {
    int oper;                   /* operator */
    int nops;                   /* number of operands */	
    struct nodeTypeTag *op[1];	/* operands, extended at runtime */
} oprNodeType;

 typedef struct nodeTypeTag 
{
    nodeEnum typeofvariable;
    bool constant;
    union 
    {
        
        idNodeType id;          /* identifiers */
        oprNodeType opr;        /* operators */
    };
} nodeType;

