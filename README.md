# Proyecto Estructuras de datos
Sistema computacional para el registro de citas de un consultorio médico

## *Integrantes*
1. Rivera Pérez Ricardo
2. Montoya Uribe Miguel Angel
3. Alanis Garduño Mireya
### *Grupo : 1CV10*
#### *Instrucciones*
Para ejecutar el programa poner el comando ***make run***
Una vez ejectado el programa desplejara una serie de opciones disponibles para el usuario, las opciones disponibles son las siguientes:
1. Agendar una cita: Registra una cita usando el nombre del paciente y el día de la cita en cuestión
2. Consultar la cita: Ingresando el nombre del paciente y el día de la cita mostrara en panatalla el registro y la hora asignada
3. Cancelar la cita: Ingresando el nombre del paciente y el día de la cita se etiquetara el registro con la leyenda **CANCELADA**
4. Modificar la cita: Ingresando el nombre del paciente y el día de la cita podrá cambiar el nombre del paciente
5. Mostrar todas las citas para el día:Ingresando el día de la cita deplegara en pantalla todas los registros del día exceptuando los registros con la leyenda ***ATENDIDA*** y ***CANCELDA***
6. Cita atendida: Ingresando el nombre del paciente y el día de la cita se etiquetara el registro con la leyenda ***ATENDIDA*** 
7. Salir: terminará la ejecución del programa
#### *Casos especiales*
1. Al momento de modificar y/o cancelar un registro puede que salgan dos o más registros con el mismo nombre y deberá elegir el suyo
2. Al momento de agendar si ya no hay espacio en el día seleccionado deberá buscar otro día
3.Al momento de consultar si no aparece su nombre deberá buscar en otro día
4. Si en cualquier menú del programa selecciona una opción no señalada el programa se reiniciara
