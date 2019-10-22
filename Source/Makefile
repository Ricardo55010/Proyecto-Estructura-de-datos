a.out: main.o cita.o
	gcc main.o cita.o
main.o: main.c
	gcc -c -Wall main.c
cita.o: cita.c
	gcc -c -Wall cita.c
run: a.out
	./a.out
clear:
	rm -fr a.out main.o cita.o
	
