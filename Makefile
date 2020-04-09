LEX=lex_variables.l
main: $(LEX)
	yacc -d yacc.y
	flex $(LEX)
	gcc lex.yy.c y.tab.c -ll
	make run
	
run: lex.yy.c
	./a.out

clean:
	rm -rf *.c
	rm -rf *.out