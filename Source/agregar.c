
int
agregarRegistroCola (struct cita *cita, char nombre[20])
{
  if (cita == NULL)
    {
      printf ("No se pudo encontrar la cita\n");
    }
  else
    {

      if (cita->n == 0)
	{
	  printf
	    ("No hay espacio en esta cita, por favor ingrese en otra fecha\n");
	}
      else
	{
	  printf ("Ingrese su nombre\n");
	  scanf ("%s", &nombre[20]);

	  cita->nombrePaciente[20 - (cita->n)][20] = nombre[20];
	  (cita->n)--;
	  printf ("La cita ha sido agendada satisfactoriamente\n");
	}
    }
  return 0;
}
