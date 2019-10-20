#include"cita.h"
int
agregarRegistroCola (struct cita *cita, char nombre)
{
  if (cita == NULL)
    {
      printf ("No se pudo encontrar la cita\n");
      return 0;
    }
  else
    {

      if (cita->n == 0)
	{
	  printf
	    ("No hay espacio en esta cita, por favor ingrese en otra fecha\n");
	  return 0;
	}
      else
	{
	  for (int i = 0; i < 20; i++)
	    {
	      cita->nombrePaciente[20 - (cita->n)][i] = nombre[i];
	    }
	  (cita->n)--;
	  printf ("La cita ha sido agendada satisfactoriamente\n");
	  return 0;
	}
    }
}




int
actualizarRegistroCola (struct cita *cita)
{
  int n;
  char nombre[20];
  mostrar (cita);
  printf ("Ingrese el nombre de la persona que desea modificar\n");
  scanf ("%s", &nombre);
  n = buscar (cita, nombre);
  if (n == -1)
    {
      printf ("Lo sentimos el elemento no existe \n");
      return 0;
    }
  else
    {

      for (int i = 0; i < 20; i++)
	{

	  cita->nombrePaciente[n][i] = nombre[i];
	}
      printf ("Se ha actualizado el registro correctamente\n");
      return 0;

    }


  return 0;
}

void
mostrarRegistroSolo (int posicion, struct cita cita)
{
  switch (posicion)
    {
    case 0:
      printf ("Nombre: %s	Hora de cita: 10:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 1:
      printf ("Nombre: %s      Hora de cita: 10:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 2:
      printf ("Nombre: %s      Hora de cita: 11:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 3:
      printf ("Nombre: %s      Hora de cita: 11:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 4:
      printf ("Nombre: %s      Hora de cita: 12:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 5:
      printf ("Nombre: %s      Hora de cita: 12:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 6:
      printf ("Nombre: %s      Hora de cita: 13:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 7:
      printf ("Nombre: %s      Hora de cita: 13:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 8:
      printf ("Nombre: %s      Hora de cita: 14:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 9:
      printf ("Nombre: %s      Hora de cita: 14:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 10:
      printf ("Nombre: %s      Hora de cita: 15:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 11:
      printf ("Nombre: %s      Hora de cita: 16:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 12:
      printf ("Nombre: %s      Hora de cita: 16:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 13:
      printf ("Nombre: %s      Hora de cita: 17:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 14:
      printf ("Nombre: %s      Hora de cita: 17:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 15:
      printf ("Nombre: %s      Hora de cita: 18:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 16:
      printf ("Nombre: %s      Hora de cita: 18:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 17:
      printf ("Nombre: %s      Hora de cita: 19:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 18:
      printf ("Nombre: %s      Hora de cita: 19:30 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    case 19:
      printf ("Nombre: %s      Hora de cita: 20:00 hrs\n",
	      cita.nombrePaciente[posicion]);
      break;
    }
}
