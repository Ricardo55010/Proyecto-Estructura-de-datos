#include<stdio.h>
#include<string.h>
#include"cita.h"
int
main (void)
{
struct cita Lunes;
struct cita Martes;
struct cita Miercoles;
struct cita Jueves;
struct cita Viernes;
struct cita Sabado;
int opcion=0;
printf("	Bienvenido al sistema de registro de citas del consultorio ''Similares''\n");
printf("Seleccione una opcion por favor\n");
printf("1-. Agendar una cita	2-.Consultar la cita\n3-. Cancelar la cita	4-. Modificar su cita\n5-.Mostrar todas las citas para el dia	6-.Salir");
scanf("%d",&opcion);
  return 0;
}
