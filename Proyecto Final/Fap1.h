//inclusión condicional 
#ifndef FAP1_H
#define FAP1_H

// Función que imprime mis datos personales
void Fap1();

//Fin de la inclusion condicional
#endif // FAP1_H

#include <stdio.h>

//Inicio de made
void Fap1 (){
//Primero declaramos la variables  que son los datos solicitados
char Nombre[] = "Jesus Eduardo de la Torre Mayorga";
int Edad = 19;
char Lugar[]  = "Tepatitlan de Morelos, Jalisco, Mexico";
char Fecha[]= "30 de Enero del 2025";
char Carrera[]  ="Ingenieria en computacion ";
char Semestre[]   =" 2do ";

//Ahora mostramos los datos anteriormente ingresados
printf("Nombre: %s\n", Nombre);
printf("Edad: %d\n", Edad);
printf("Lugar de residencia: %s\n", Lugar);
printf("Fecha: %s\n", Fecha);
printf("Carrera: %s\n", Carrera);
printf("Semestre: %s\n", Semestre);

} 