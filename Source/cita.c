#include"cita.h"

int
agregarRegistroCola (struct cita *cita, char nombre[20])
{
  int i = 0;
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
	  for (i = 0; i < 20; i++)
	    {
	      cita->nombrePaciente[20 - (cita->n)][i] = nombre[i];
	    }
	  printf ("La cita ha sido agendada satisfactoriamente %s\n",
		  cita->nombrePaciente[20 - (cita->n)]);
	  (cita->n)--;

	  return 0;
	}
    }
}

int
actualizarRegistroCola (struct cita *cita)
{
  int i = 0;
  int n;
  char nombre[20];
  char nombren[20];
  printf ("Ingrese el nombre de la persona que desea modificar\n");
  scanf ("%s", nombre);
  n = buscarRegistroCola (cita, nombre);
  if (cita == NULL)
    {
      printf ("No se pudo encontra la cita\n");
      return 0;
    }
  else
    {
      if (n == -1)

	{
	  printf ("Lo sentimos el elemento no existe \n");
	  return 0;
	}

      else
	{
	  if (n != 20)
	    {
	      printf ("Se encontro el nombre a modificar\n");
	      printf ("Ingrese el nuevo nombre para la cita\n");
	      scanf ("%s", nombren);

	      for (i = 0; i < 20; i++)

		{
		  cita->nombrePaciente[n][i] = nombren[i];
		}
	      printf ("Se ha actualizado el registro correctamente\n");
	      return 0;
	    }
	  else
	    {
	      printf
		("Existe mas de una cita con un nombre similar\n Ingrese el numero del elemento que de sea actualizar\n");
	      scanf ("%i", &n);
	      printf ("Ingrese el nuevo nombre para la cita\n");
	      scanf ("%s", nombren);

	      for (i = 0; i < 20; i++)

		{
		  cita->nombrePaciente[n][i] = nombren[i];
		}
	      printf ("Se ha actualizado el registro correctamente\n");
	      return 0;
	    }
	}
    }
}


void
mostrarRegistroSolo (int posicion, struct cita *cita)
{
  switch (posicion)
    {
    case 0:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 10:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 1:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 10:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 2:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 11:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 3:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 11:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 4:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 12:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 5:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 12:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 6:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 13:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 7:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 13:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 8:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 14:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 9:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 14:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 10:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 15:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 11:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 16:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 12:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 16:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 13:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 17:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 14:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 17:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 15:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 18:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 16:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 18:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 17:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 19:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 18:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 19:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 19:
      printf ("Cita n° %d	Nombre: %s      Hora de cita: 20:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    }
}


int
buscarRegistroCola (struct cita *cita, char nombre[20])
{
  int i = 0;
  int cont = 0;
  if (cita->nombrePaciente == NULL)
    {
      return -1;
    }
  for (i = 0; i != 20; i++)
    {
      if (strcmp (cita->nombrePaciente[i], nombre) == 0)
	{
	  cont++;
	}
    }
  if (cont == 0)
    {
      return -1;
    }
  if (cont == 1)
    {
      for (i = 0; i != 20; i++)
	{
	  if (strcmp (cita->nombrePaciente[i], nombre) == 0)
	    {
	      return i;
	    }
	}
    }
  if (cont >= 2)
    {
      for (i = 0; i != 20; i++)
	{
	  if (strcmp (cita->nombrePaciente[i], nombre) == 0)
	    {
	      mostrarRegistroSolo (i, cita);
	    }
	}
      return 20;
    }
  return 0;
}

void
eliminarRegistroCola (struct cita *cita, char nombre[20])
{
  int posicion;
  char estado[20] = { 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a' };
  if (cita->nombrePaciente == NULL)
    {
      return;
    }
  posicion = buscarRegistroCola (cita, nombre);
  if (posicion == -1)
    {
      printf ("\nCita no encontrada\n");
      return;
    }
  if (posicion > -1 && posicion < 20)
    {
      int i = 0;
      for (i = 0; i != 20; i++)
	{
	  cita->nombrePaciente[posicion][i] = estado[i];
	}
      printf ("\nCita cancelada con exito\n");
      return;
    }
  if (posicion == 20)
    {
      int i = 0;
      int tmp = 0;
      printf
	("\nHay mas de una cita registrada con el mismo nombre, favor de poner cual cita es la de usted :");
      scanf ("%d", &tmp);
      tmp = tmp - 1;
      for (i = 0; i != 20; i++)
	{
	  cita->nombrePaciente[posicion][i] = estado[i];
	}
      printf ("\nCita cancelada con exito\n");
      return;
    }
}

void
atenderCita (struct cita *cita, char nombre[20])
{
  int posicion = 0;
  char estado[20] = { 'A', 't', 'e', 'n', 'd', 'i', 'd', 'o' };
  if (cita->nombrePaciente == NULL)
    {
      return;
    }
  posicion = buscarRegistroCola (cita, nombre);
  if (posicion == -1)
    {
      printf ("\nCita no encontrada\n");
      return;
    }
  if (posicion > -1 && posicion < 20)
    {
      int i = 0;
      for (i = 0; i != 20; i++)
	{
	  cita->nombrePaciente[posicion][i] = estado[i];
	}
      printf ("\nCita atendida\n");
      return;
    }
  if (posicion == 20)
    {
      int i = 0;
      int tmp = 0;
      printf
	("\nHay mas de una cita registrada con el mismo nombre, favor de poner cual cita es la de usted :");
      scanf ("%d", &tmp);
      tmp = tmp - 1;
      for (i = 0; i != 20; i++)
	{
	  cita->nombrePaciente[posicion][i] = estado[i];
	}
      printf ("\nCita atendida\n");
      return;
    }
}

void
mostrarRegistrosDia (struct cita *cita)
{
  int i = 0;
  char estado[20] = { 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a' };
  char estado1[20] = { 'A', 't', 'e', 'n', 'd', 'i', 'd', 'o' };

  for (i = 0; i != 20; i++)
    {
      if (strcmp (cita->nombrePaciente[i], estado) == 0
	  || strcmp (cita->nombrePaciente[i], estado1) == 0)
	{
	}
      else
	{
	  mostrarRegistroSolo (i, cita);
	}
    }
  return;
}

void rellenarCola(struct cita *cita){
	char relleno[20]={'-','-','-','-'};
	int j=0;
	int i=0;
	for(j=0;j!=20;j++){
	for(i=0;i!=20;i++){
	cita->nombrePaciente[j][i]=relleno[i];
	}
	}
return;
}
