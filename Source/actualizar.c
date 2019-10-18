int
actualizarRegistroCola (struct cita *cita)
{
  mostrarRegistroCola (cita);
  int n;
  char nombre[20];
  printf ("Que registro desea actualizar\n");
  scanf ("%i", &n);
  printf ("ingrese la nueva cita\n");
  scanf ("%s", &nombre[20]);
  cita->nombrePaciente[20][n] = nombre[20];



  return 0;
}
