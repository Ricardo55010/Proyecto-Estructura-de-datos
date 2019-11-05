a.out: main.o cita.o menu.o
	gcc main.o cita.o menu.o
menu.o:
	gcc -c -Wall menu.c
main.o: main.c
	gcc -c -Wall main.c
cita.o: cita.c
	gcc -c -Wall cita.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o cita.o menu.o
	
