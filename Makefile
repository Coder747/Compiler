TEST = test_files/test.txt
ARRAY = z_arraylist

all: y.tab.c lex.yy.c a.out run

y.tab.c: yacc.y symboltable.c structs.h $(TEST)
	yacc -d yacc.y

lex.yy.c: lex_variables.l
	flex lex_variables.l

a.out: lex.yy.c y.tab.c
	gcc $(ARRAY)/arraylist.c lex.yy.c y.tab.c -ll
	
run: a.out
	./a.out

clean:
	clear && printf '\e[3J'
	> Outputs/Quadruples.txt
	> Outputs/Parsing.txt
	> Outputs/Errors-Warnings.txt
	> Outputs/SymbolTable.txt
clear:
	rm y.tab.c
	rm y.tab.h
	rm lex.yy.c
	rm a.out

