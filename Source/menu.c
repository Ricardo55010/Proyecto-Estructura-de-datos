#include"cola.h"
#include "menu.h"

void
mostrar_menu (void)
{
  puts
    ("	\nBienvenido al sistema de registro de citas del consultorio ''Similares''\n");
  puts ("Seleccione una opcion por favor\n\n");
  puts ("1-. Agendar una cita\n2-. Consultar la cita.\n3-. Cancelar la cita");
  puts
    ("4-. Modificar su cita\n5-. Mostrar todas las citas para el dia.\n6-. Atender cita \n7-. Salir");
}

void
seleccionarOpcionMenu (void)
{
  struct cita Lunes;
  struct cita Martes;
  struct cita Miercoles;
  struct cita Jueves;
  struct cita Viernes;
  struct cita Sabado;
  Lunes.n = 20;
  Martes.n = 20;
  Miercoles.n = 20;
  Jueves.n = 20;
  Viernes.n = 20;
  Sabado.n = 20;
  rellenarCola (&Lunes);
  rellenarCola (&Martes);
  rellenarCola (&Miercoles);
  rellenarCola (&Jueves);
  rellenarCola (&Viernes);
  rellenarCola (&Sabado);
  int opcion = 0;
  do
    {
      mostrar_menu ();
      scanf ("%d", &opcion);
      switch (opcion)
	{
	case 1:
	  agendarMenu (&Lunes, &Martes, &Miercoles, &Jueves, &Viernes,
		       &Sabado);
	  break;
	case 2:
	  consultarMenu (&Lunes, &Martes, &Miercoles, &Jueves, &Viernes,
			 &Sabado);
	  break;
	case 3:
	  cancelarMenu (&Lunes, &Martes, &Miercoles, &Jueves, &Viernes,
			&Sabado);
	  break;
	case 4:
	  modificarMenu (&Lunes, &Martes, &Miercoles, &Jueves, &Viernes,
			 &Sabado);
	  break;
	case 5:
	  mostrarMenu (&Lunes, &Martes, &Miercoles, &Jueves, &Viernes,
		       &Sabado);
	  break;
	case 6:
	  atenderMenu (&Lunes, &Martes, &Miercoles, &Jueves, &Viernes,
		       &Sabado);
	  break;
	case 7:
	  printf ("Saliendo del sistema \n");
	  break;
	}
    }
  while (opcion != 7);
}

void
agendarMenu (struct cita *Lunes, struct cita *Martes, struct cita *Miercoles,
	     struct cita *Jueves, struct cita *Viernes, struct cita *Sabado)
{
  char nombre[20];
  int auxiliar = 0;
  printf ("Agendando cita\n");
  printf ("Ingrese su nombre por favor: ");
  scanf ("%19s[^\n]", nombre);
  calcularLongitudCaracter (nombre);
  printf ("\nSeleccione el dia que quiere su cita:\n ");
  printf
    ("1-. Lunes     2-. Martes      3-.Miercoles\n4-. Jueves        5-. Viernes     6-. Sabado: ");
  scanf ("%d", &auxiliar);
  switch (auxiliar)
    {
    case 1:
      agregarRegistroCola (Lunes, nombre);
      break;
    case 2:
      agregarRegistroCola (Martes, nombre);
      break;
    case 3:
      agregarRegistroCola (Miercoles, nombre);
      break;
    case 4:
      agregarRegistroCola (Jueves, nombre);
      break;
    case 5:
      agregarRegistroCola (Viernes, nombre);
      break;
    case 6:
      agregarRegistroCola (Sabado, nombre);
      break;

    default:
      printf ("No existe\n");
      break;
    }
}

void
mostrarMenu (struct cita *Lunes, struct cita *Martes, struct cita *Miercoles,
	     struct cita *Jueves, struct cita *Viernes, struct cita *Sabado)
{
  int auxiliar = 0;
  printf ("Mostrando registros");
  printf ("\nSeleccione el dia a visualizar: \n");
  printf
    ("1-. Lunes  2-. Martes  3-. Miercoles\n4-. Jueves  5-.Viernes  6-.Sabado: ");
  scanf ("%d", &auxiliar);
  switch (auxiliar)
    {
    case 1:
      mostrarRegistrosDia (Lunes);
      break;
    case 2:
      mostrarRegistrosDia (Martes);
      break;
    case 3:
      mostrarRegistrosDia (Miercoles);
      break;
    case 4:
      mostrarRegistrosDia (Jueves);
      break;
    case 5:
      mostrarRegistrosDia (Viernes);
      break;
    case 6:
      mostrarRegistrosDia (Sabado);
      break;
    default:
      printf ("Opcion inexistente");
      break;
    }
}

void
consultarMenu1 (int pos, char nombre[20], struct cita *cita)
{
  pos = buscarRegistroCola (cita, nombre);
  if (pos == -1)
    {
      printf ("\nNo existe ese nombre en este dia\n");
    }
  if (pos > -1 && pos < 20)
    {
      printf ("\nCita encontrada\n");
      mostrarRegistroSolo (pos, cita);
    }
  if (pos == 20)
    {
      printf ("\nCitas encontradas con el mismo nombre");
    }
}

void
consultarMenu (struct cita *Lunes, struct cita *Martes,
	       struct cita *Miercoles, struct cita *Jueves,
	       struct cita *Viernes, struct cita *Sabado)
{
  char nombre[20];
  int pos = 0;
  int auxiliar = 0;
  printf ("Ingrese su nombre por favor: ");
  scanf ("%19s[^\n]", nombre);
  calcularLongitudCaracter (nombre);
  printf ("\nSeleccione el dia de la cita: ");
  printf
    ("1-. Lunes	2-. Martes	3-.Miercoles\n4-. Jueves	5-. Viernes	6-. Sabado: ");
  scanf ("%d", &auxiliar);
  switch (auxiliar)
    {
    case 1:
      consultarMenu1 (pos, nombre, Lunes);
      break;
    case 2:
      consultarMenu1 (pos, nombre, Martes);
      break;
    case 3:
      consultarMenu1 (pos, nombre, Miercoles);
      break;
    case 4:
      consultarMenu1 (pos, nombre, Jueves);
      break;
    case 5:
      consultarMenu1 (pos, nombre, Viernes);
      break;
    case 6:
      consultarMenu1 (pos, nombre, Sabado);
      break;
    default:
      printf ("\nNo existe\n");
      break;
    }
}

void
cancelarMenu (struct cita *Lunes, struct cita *Martes, struct cita *Miercoles,
	      struct cita *Jueves, struct cita *Viernes, struct cita *Sabado)
{
  int auxiliar = 0;
  char nombre[20];
  printf ("Ingrese el dia de la cita a cancelar\n");
  printf
    ("1-. Lunes	2-. Martes	3-.Miercoles\n4-. Jueves	5-. Viernes	6-. Sabado: ");
  scanf ("%d", &auxiliar);
  printf ("\nIngrese su nombre por favor: ");
  scanf ("%19s[^\n]", nombre);
  calcularLongitudCaracter (nombre);
  switch (auxiliar)
    {
    case 1:
      eliminarRegistroCola (Lunes, nombre);
      break;
    case 2:
      eliminarRegistroCola (Martes, nombre);
      break;
    case 3:
      eliminarRegistroCola (Miercoles, nombre);
      break;
    case 4:
      eliminarRegistroCola (Jueves, nombre);
      break;
    case 5:
      eliminarRegistroCola (Viernes, nombre);
      break;
    case 6:
      eliminarRegistroCola (Sabado, nombre);
      break;
    default:
      break;
    }
}

void
modificarMenu (struct cita *Lunes, struct cita *Martes,
	       struct cita *Miercoles, struct cita *Jueves,
	       struct cita *Viernes, struct cita *Sabado)
{
  int auxiliar = 0;
  printf ("Modificando cita");
  printf ("\nSeleccione el dia que escogio previamente para su cita:\n ");
  printf
    ("1-. Lunes     2-. Martes      3-.Miercoles\n4-. Jueves        5-. Viernes     6-. Sabado: ");
  scanf ("%d", &auxiliar);
  switch (auxiliar)
    {
    case 1:
      actualizarRegistroCola (Lunes);
      break;
    case 2:
      actualizarRegistroCola (Martes);
      break;
    case 3:
      actualizarRegistroCola (Miercoles);
      break;
    case 4:
      actualizarRegistroCola (Jueves);
      break;
    case 5:
      actualizarRegistroCola (Viernes);
      break;
    case 6:
      actualizarRegistroCola (Sabado);
      break;
    default:
      printf ("No existe\n");
      break;
    }
}

void
atenderMenu (struct cita *Lunes, struct cita *Martes, struct cita *Miercoles,
	     struct cita *Jueves, struct cita *Viernes, struct cita *Sabado)
{
  int auxiliar = 0;
  printf ("Ingrese el dia de la cita atendida\n");
  printf
    ("1-. Lunes	2-. Martes	3-. MIercoles\n4-. Jueves	5-. Viernes	6-. Sabado: ");
  scanf ("%d", &auxiliar);
  switch (auxiliar)
    {
    case 1:
      atenderCita (Lunes);
      break;
    case 2:
      atenderCita (Martes);
      break;
    case 3:
      atenderCita (Miercoles);
      break;
    case 4:
      atenderCita (Jueves);
      break;
    case 5:
      atenderCita (Viernes);
      break;
    case 6:
      atenderCita (Sabado);
      break;
    default:
      break;
    }
}
