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
	    cita->nombrePaciente[20 - (cita->n)][i] = nombre[i]:
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

	  cita->nombreRegistro[n][i] = nombre[i];
	}
      printf ("Se ha actualizado el registro correctamente\n");
      return 0;

    }


  return 0;
}
