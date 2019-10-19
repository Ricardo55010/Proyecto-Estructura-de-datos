#ifndef __CITA_H__
#define __CITA_H__

#include<stdlib.h>
#include<stdio.h>
struct cita
{
  char nombrePaciente[20][20];
  int n;
  int tamano;
};

int agregarRegistroCola (struct cita *, char);
int actualizarRegistroCola (struct cita *);
#endif
