#ifndef __MENU_H__
#define __MENU_H__

#include<stdio.h>
void mostrar_menu (void);
void seleccionarOpcionMenu (void);
void agendarMenu (struct cita *, struct cita *, struct cita *, struct cita *,
		  struct cita *, struct cita *);
void consultarMenu (struct cita *, struct cita *, struct cita *,
		    struct cita *, struct cita *, struct cita *);
void cancelarMenu (struct cita *, struct cita *, struct cita *, struct cita *,
		   struct cita *, struct cita *);
void modificarMenu (struct cita *, struct cita *, struct cita *,
		    struct cita *, struct cita *, struct cita *);
void mostrarMenu (struct cita *, struct cita *, struct cita *, struct cita *,
		  struct cita *, struct cita *);
void atenderMenu (struct cita *, struct cita *, struct cita *, struct cita *,
		  struct cita *, struct cita *);
void consultarMenu1 (int, char[20], struct cita *);
#endif
