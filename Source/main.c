#include"cita.h"
int
main (void)
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
  int opcion = 0;
  printf
    ("	Bienvenido al sistema de registro de citas del consultorio ''Similares''\n");
  printf ("Seleccione una opcion por favor\n");
  printf
    ("1-. Agendar una cita	2-.Consultar la cita\n3-. Cancelar la cita	4-. Modificar su cita\n5-.Mostrar todas las citas para el dia	6-.Salir");
  scanf ("%d", &opcion);
  switch (opcion)
    {
    case 1:
//Agendar
      break;
    case 2:
      printf ("Ingrese su nombre por favor: ");
      scanf ("%s", nombre);
      printf ("\nSeleccione el dia de la cita: ");
      printf
	("1-. Lunes	2-. Martes	3-.Miercoles\n4-. Jueves	5-. Viernes	6-. Sabado");
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
      printf("1-. Lunes	2-. Martes	3-.Miercoles\n4-. Jueves	5-. Viernes	6-. Sabado");
      scanf ("%d", &auxiliar);
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
      break;
    case 5:
//Mostrar todas las citas
      break;
    case 6:
      return 0;
      break;
    }
  return 0;
}
