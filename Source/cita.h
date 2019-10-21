#ifndef __CITA_H__
#define __CITA_H__

#include<stdio.h>
#include<string.h>
struct cita
{
  char nombrePaciente[20][20];
  int n;
  int tamano;
};

int agregarRegistroCola (struct cita *, char[20]);
int actualizarRegistroCola (struct cita *);
int buscarRegistroCola (struct cita *, char[20]);
void mostrarRegistroSolo (int, struct cita *);
void eliminarRegistroCola (struct cita *, char[20]);
#endif
