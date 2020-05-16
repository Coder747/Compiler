LEX=lex_variables.l
main: $(LEX)
	yacc -d yacc.y
	flex $(LEX)
	gcc arraylist.c lex.yy.c y.tab.c -ll
	make run
	
run: lex.yy.c
	./a.out

clean:
	clear && printf '\e[3J'
clear:
	rm y.tab.c
	rm y.tab.h
	rm lex.yy.c
	rm a.out