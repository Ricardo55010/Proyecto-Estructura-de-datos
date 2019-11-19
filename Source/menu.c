#include"cita.h"
#include "menu.h"

void
mostrar_menu (void)
{
  puts
    ("	Bienvenido al sistema de registro de citas del consultorio ''Similares''\n");
  puts ("Seleccione una opcion por favor\n\n");
  puts ("1-. Agendar una cita\n2-. Consultar la cita.\n3-. Cancelar la cita");
  puts
    ("4-. Modificar su cita\n5-. Mostrar todas las citas para el dia.\n6-. Cita atendida\n7-. Salir");
}

void
seleccionarOpcionMenu (void)
{
  int auxiliar = 0;
  int pos = 0;
  char nombre[20];
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
//Agendar
	  printf ("Agendando cita\n");
	  printf ("Ingrese su nombre por favor: ");
	  scanf ("%s", nombre);
	  printf ("\nSeleccione el dia que quiere su cita:\n ");
	  printf
	    ("1-. Lunes     2-. Martes      3-.Miercoles\n4-. Jueves        5-. Viernes     6-. Sabado: ");
	  scanf ("%d", &auxiliar);
	  switch (auxiliar)
	    {
	    case 1:
	      agregarRegistroCola (&Lunes, nombre);
	      break;
	    case 2:
	      agregarRegistroCola (&Martes, nombre);
	      break;
	    case 3:
	      agregarRegistroCola (&Miercoles, nombre);
	      break;
	    case 4:
	      agregarRegistroCola (&Jueves, nombre);
	      break;
	    case 5:
	      agregarRegistroCola (&Viernes, nombre);
	      break;
	    case 6:
	      agregarRegistroCola (&Sabado, nombre);
	      break;

	    default:
	      printf ("No existe\n");
	      break;
	    }

	  break;

	case 2:
	  printf ("Ingrese su nombre por favor: ");
	  scanf ("%s", nombre);
	  printf ("\nSeleccione el dia de la cita: ");
	  printf
	    ("1-. Lunes	2-. Martes	3-.Miercoles\n4-. Jueves	5-. Viernes	6-. Sabado: ");
	  scanf ("%d", &auxiliar);
	  switch (auxiliar)
	    {
	    case 1:
	      pos = buscarRegistroCola (&Lunes, nombre);
	      if (pos == -1)
		{
		  printf ("\nNo existe ese nombre en este dia\n");
		}
	      if (pos > -1 && pos < 20)
		{
		  printf ("\nCita encontrada\n");
		  mostrarRegistroSolo (pos, &Lunes);
		}
	      if (pos == 20)
		{
		  printf ("\nCitas encontradas con el mismo nombre");
		}
	      break;
	    case 2:
	      pos = buscarRegistroCola (&Martes, nombre);
	      if (pos == -1)
		{
		  printf ("\nNo existe ese nombre en este dia\n");
		}
	      if (pos > -1 && pos < 20)
		{
		  printf ("\nCita encontrada\n");
		  mostrarRegistroSolo (pos, &Martes);
		}
	      if (pos == 20)
		{
		  printf ("\nCitas encontradas con el mismo nombre");
		}
	      break;
	    case 3:
	      pos = buscarRegistroCola (&Miercoles, nombre);
	      if (pos == -1)
		{
		  printf ("\nNo existe ese nombre en este dia\n");
		}
	      if (pos > -1 && pos < 20)
		{
		  printf ("\nCita encontrada\n");
		  mostrarRegistroSolo (pos, &Miercoles);
		}
	      if (pos == 20)
		{
		  printf ("\nCitas encontradas con el mismo nombre");
		}
	      break;
	    case 4:
	      pos = buscarRegistroCola (&Jueves, nombre);
	      if (pos == -1)
		{
		  printf ("\nNo existe ese nombre en este dia\n");
		}
	      if (pos > -1 && pos < 20)
		{
		  printf ("\nCita encontrada\n");
		  mostrarRegistroSolo (pos, &Jueves);
		}
	      if (pos == 20)
		{
		  printf ("\nCitas encontradas con el mismo nombre");
		}
	      break;
	    case 5:
	      pos = buscarRegistroCola (&Viernes, nombre);
	      if (pos == -1)
		{
		  printf ("\nNo existe ese nombre en este dia\n");
		}
	      if (pos > -1 && pos < 20)
		{
		  printf ("\nCita encontrada\n");
		  mostrarRegistroSolo (pos, &Viernes);
		}
	      if (pos == 20)
		{
		  printf ("\nCitas encontradas con el mismo nombre");
		}
	      break;
	    case 6:
	      pos = buscarRegistroCola (&Sabado, nombre);
	      if (pos == -1)
		{
		  printf ("\nNo existe ese nombre en este dia\n");
		}
	      if (pos > -1 && pos < 20)
		{
		  printf ("\nCita encontrada\n");
		  mostrarRegistroSolo (pos, &Sabado);
		}
	      if (pos == 20)
		{
		  printf ("\nCitas encontradas con el mismo nombre");
		}
	      break;
	    default:
	      printf ("\nNo existe\n");
	      break;
	    }
	  break;
	case 3:
	  printf ("Ingrese el dia de la cita a cancelar\n");
	  printf
	    ("1-. Lunes	2-. Martes	3-.Miercoles\n4-. Jueves	5-. Viernes	6-. Sabado: ");
	  scanf ("%d", &auxiliar);
	  printf ("\nIngrese su nombre por favor: ");
	  scanf ("%s", nombre);
	  switch (auxiliar)
	    {
	    case 1:
	      eliminarRegistroCola (&Lunes, nombre);
	      break;
	    case 2:
	      eliminarRegistroCola (&Martes, nombre);
	      break;
	    case 3:
	      eliminarRegistroCola (&Miercoles, nombre);
	      break;
	    case 4:
	      eliminarRegistroCola (&Jueves, nombre);
	      break;
	    case 5:
	      eliminarRegistroCola (&Viernes, nombre);
	      break;
	    case 6:
	      eliminarRegistroCola (&Sabado, nombre);
	      break;
	    default:

	      break;
	    }
	  break;
	case 4:
//MOdificar
	  printf ("Modificando cita");
	  printf
	    ("\nSeleccione el dia que escogio previamente para su cita:\n ");
	  printf
	    ("1-. Lunes     2-. Martes      3-.Miercoles\n4-. Jueves        5-. Viernes     6-. Sabado: ");
	  scanf ("%d", &auxiliar);
	  switch (auxiliar)
	    {
	    case 1:
	      actualizarRegistroCola (&Lunes);
	      break;
	    case 2:
	      actualizarRegistroCola (&Martes);
	      break;
	    case 3:
	      actualizarRegistroCola (&Miercoles);
	      break;
	    case 4:
	      actualizarRegistroCola (&Jueves);
	      break;
	    case 5:
	      actualizarRegistroCola (&Viernes);
	      break;
	    case 6:
	      actualizarRegistroCola (&Sabado);
	      break;
	    default:
	      printf ("No existe\n");
	      break;
	    }
	  break;
	case 5:
//Mostrar todas las citas
	  printf ("Mostrando registros");
	  printf ("\nSeleccione el dia a visualizar: \n");
	  printf
	    ("1-. Lunes  2-. Martes  3-. Miercoles\n4-. Jueves  5-.Viernes  6-.Sabado: ");
	  scanf ("%d", &auxiliar);
	  switch (auxiliar)
	    {
	    case 1:
	      mostrarRegistrosDia (&Lunes);
	      break;
	    case 2:
	      mostrarRegistrosDia (&Martes);
	      break;
	    case 3:
	      mostrarRegistrosDia (&Miercoles);
	      break;
	    case 4:
	      mostrarRegistrosDia (&Jueves);
	      break;
	    case 5:
	      mostrarRegistrosDia (&Viernes);
	      break;
	    case 6:
	      mostrarRegistrosDia (&Sabado);
	      break;
	    default:
	      printf ("Opcion inexistente");
	      break;
	    }
	  break;

	case 6:
	  printf ("Ingrese el dia de la cita atendida\n");
	  printf
	    ("1-. Lunes	2-. Martes	3-. MIercoles\n4-. Jueves	5-. Viernes	6-. Sabado: ");
	  scanf ("%d", &auxiliar);
	  printf ("\nIngrese su nombre por favor: ");
	  scanf ("%s", nombre);
	  switch (auxiliar)
	    {
	    case 1:
	      atenderCita (&Lunes, nombre);
	      break;
	    case 2:
	      atenderCita (&Martes, nombre);
	      break;
	    case 3:
	      atenderCita (&Miercoles, nombre);
	      break;
	    case 4:
	      atenderCita (&Jueves, nombre);
	      break;
	    case 5:
	      atenderCita (&Viernes, nombre);
	      break;
	    case 6:
	      atenderCita (&Sabado, nombre);
	      break;
	    default:
	      break;
	    }
	  break;
	case 7:
	  break;
	}
    }
  while (opcion != 7);
}
