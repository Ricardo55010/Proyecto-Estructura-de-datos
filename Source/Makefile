a.out: main.o cola.o menu.o
	gcc main.o cola.o menu.o
menu.o:
	gcc -c -Wall menu.c
main.o: main.c
	gcc -c -Wall main.c
cola.o: cola.c
	gcc -c -Wall cola.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o cola.o menu.o cola.c~ cola.h~ menu.c~ menu.h~ main.c~
indent: main.c cola.c menu.c cola.h menu.h
	indent main.c cola.c menu.c cola.h menu.h
