#include"cita.h"
void
mostrarAvisos (int retorno)
{
  if (retorno >= 0 && retorno <= 19)
    {
      printf ("Cita encontrada\n");
    }
  switch (retorno)
    {
    case -1:
      printf ("Cita no encontrada\n");
      break;
    case -2:
      printf ("No hay espacio en esta cita, por favor ingrese otra fecha\n");
      break;
    case -3:
      printf ("Se ha actualizado el registro correctamente\n");
      break;
    case 20:
      printf
	("Existe mas de una cita con un nombre similar,favor de poner cual cita es la de usted: \n");
      break;
    case -4:
      printf ("Cita cancelada con exito\n");
      break;
    case -5:
      printf ("Cita atendida\n");
      break;
    }
}

int
agregarRegistroCola (struct cita *cita, char nombre[200])
{
  int i = 0;
  if (cita == NULL)
    {
      mostrarAvisos (-1);
      return 0;
    }
  else
    {

      if (cita->n == 0)
	{
	  mostrarAvisos (-2);
	  return 0;
	}
      else
	{
	  memset (cita->nombrePaciente[20 - (cita->n)], 0, 25);
	  for (i = 0; i < 20; i++)
	    {
	      cita->nombrePaciente[20 - (cita->n)][i] = nombre[i];
	    }
	  printf ("La cita ha sido agendada satisfactoriamente %s\n",
		  cita->nombrePaciente[20 - (cita->n)]);
	  mostrarRegistroSolo (20 - (cita->n), cita);
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
  int ciclo = 0;
  char nombre[200];
  char nombren[200];
  do
    {
      printf ("Ingrese el nombre de la persona que desea modificar\n");
      scanf ("%s", nombre);
      ciclo = calcularLongitudCaracter (nombre);
    }
  while (ciclo == 1);
  n = buscarRegistroCola (cita, nombre);
  if (cita == NULL)
    {
      mostrarAvisos (-1);
      return 0;
    }
  else
    {
      memset (cita->nombrePaciente[20 - (cita->n)], 0, 25);
      if (n == -1)

	{
	  mostrarAvisos (-1);
	  return 0;
	}

      else
	{
	  if (n != 20)
	    {
	      mostrarAvisos (n);
	      do
		{
		  printf ("Ingrese el nuevo nombre para la cita\n");
		  scanf ("%s", nombren);
		  ciclo = calcularLongitudCaracter (nombren);
		}
	      while (ciclo == 1);
	      for (i = 0; i < 20; i++)

		{
		  cita->nombrePaciente[n][i] = nombren[i];
		}
	      mostrarAvisos (-3);
	      return 0;
	    }
	  else
	    {
	      mostrarAvisos (20);
	      scanf ("%i", &n);
	      printf ("Ingrese el nuevo nombre para la cita\n");
	      scanf ("%s", nombren);

	      for (i = 0; i < 20; i++)

		{
		  cita->nombrePaciente[n][i] = nombren[i];
		}
	      mostrarAvisos (-3);
	      return 0;
	    }
	}
    }
}

void
mostrarRegistroSolo1 (int posicion, struct cita *cita)
{

  switch (posicion)
    {
    case 0:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 10:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 1:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 10:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 2:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 11:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 3:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 11:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 4:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 12:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 5:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 12:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 6:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 13:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 7:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 13:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 8:
      printf ("Cita n° %d       Nombre: %s      Hora de cita: 14:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 9:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 14:30 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 10:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 15:00 hrs\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    }
}

void
mostrarRegistroSolo2 (int posicion, struct cita *cita)
{
  switch (posicion)
    {
    case 11:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 16:00\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 12:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 16:30\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 13:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 17:00\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 14:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 17:30\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 15:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 18:00\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 16:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 18:30\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 17:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 19:00\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 18:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 19:30\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    case 19:
      printf ("Cita n° %d	Nombre: %s	Hora de cita: 20:00\n",
	      posicion + 1, cita->nombrePaciente[posicion]);
      break;
    }
}

void
mostrarRegistroSolo (int posicion, struct cita *cita)
{
  if (posicion >= 0 && posicion <= 10)
    {
      mostrarRegistroSolo1 (posicion, cita);
    }
  else
    {
      mostrarRegistroSolo2 (posicion, cita);
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
  char estado[20] = {
    'C', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a'
  };
  if (cita->nombrePaciente == NULL)
    {
      mostrarAvisos (-1);
      return;
    }
  posicion = buscarRegistroCola (cita, nombre);
  if (posicion == -1)
    {
      mostrarAvisos (-1);
      return;
    }
  if (posicion > -1 && posicion < 20)
    {
      int i = 0;
      for (i = 0; i != 20; i++)
	{
	  cita->nombrePaciente[posicion][i] = estado[i];
	}
      mostrarAvisos (-4);
      return;
    }
  if (posicion == 20)
    {
      int i = 0;
      int tmp = 0;
      scanf ("%d", &tmp);
      mostrarAvisos (20);
      tmp = tmp - 1;
      for (i = 0; i != 20; i++)
	{
	  cita->nombrePaciente[posicion][i] = estado[i];
	}
      mostrarAvisos (-4);
      return;
    }
}

void
atenderCita (struct cita *cita)
{
  int posicion = 0;
  int esElPrimero = 0;
  int i = 0;
  int k = 0;
  char estado2[20] = {
    '-', '-', '-', '-'
  };
  char nombre[20];
  char estado1[20] = {
    'C', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a'
  };
  char estado[20] = {
    'A', 't', 'e', 'n', 'd', 'i', 'd', 'a'
  };
  for (i = 0; i != 20; i++)
    {
      if (esElPrimero == 0)
	{
	  for (k = 0; k != 20; k++)
	    {
	      nombre[k] = cita->nombrePaciente[i][k];
	    }
	  if (strcmp (estado2, nombre) == 0)
	    {
	      mostrarAvisos (-1);
	      return;
	    }
	  if (strcmp (nombre, estado) != 0 && strcmp (nombre, estado1) != 0)
	    {
	      esElPrimero = 1;
	      posicion = i;
	    }
	}
    }
  if (esElPrimero == 0)
    {
      mostrarAvisos (-1);
      return;
    }
  for (i = 0; i != 20; i++)
    {
      cita->nombrePaciente[posicion][i] = estado[i];
    }
  mostrarAvisos (-5);
  return;
}

void
mostrarRegistrosDia (struct cita *cita)
{
  int i = 0;
  for (i = 0; i != 20; i++)
    {
      mostrarRegistroSolo (i, cita);
    }
  return;
}

void
rellenarCola (struct cita *cita)
{
  char relleno[20] = {
    '-', '-', '-', '-'
  };
  int j = 0;
  int i = 0;
  for (j = 0; j != 20; j++)
    {
      for (i = 0; i != 20; i++)
	{
	  cita->nombrePaciente[j][i] = relleno[i];
	}
    }
  return;
}

int
calcularLongitudCaracter (char nombre[200])
{
  int longitud = strlen (nombre);
  if (longitud > 20)
    {

      return 1;
    }
  return 0;
}
