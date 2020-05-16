#include <stdbool.h>

typedef enum { Con, Id, Opr } nodeEnum;

typedef enum { Float,Int, Char,String, Bool, ConstInt, ConstFloat, ConstChar, ConstBool, ConstString ,noType} typeEnum;



typedef struct
{
    typeEnum t;
    char* others;
    int intpls;
    float floatpls;
}Const; /* constants numbers/strings/etc*/

typedef struct 
{
    typeEnum type;
    typeEnum othertype;
	int scope;
	char* name;
	char* value;
    int intpls;
    float floatpls;
	int declaration;
} idNodeType;/* identifiers */


/* operators */
typedef struct {
    int oper;                   /* operator 1= multiply 2 = divide 3 = add 4 = subtract*/
    int nops;                   /* number of operands */
    struct nodeTypeTag *op[1];	/* operands, extended at runtime */
} oprNodeType;

 typedef struct nodeTypeTag 
{
    nodeEnum typeofvariable;
    bool constant;
    int final_int;
    float final_float;
    typeEnum generaltype;
    typeEnum generaltype2;
    int registerno;
    int index;
    union 
    {
        Const con;
        idNodeType id;          /* identifiers */
        oprNodeType opr;        /* operators */
    };
} nodeType;

