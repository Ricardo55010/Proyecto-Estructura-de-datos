a.out: main.o cita.o
	gcc main.o cita.o
main.o: main.c
	gcc -c main.c
cita.o: cita.c
	gcc -c cita.c
run: a.out
	./a.out
clear:
	rm a.out main.o cita.o
	
