/**************************************************Ejercicio 1*******
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA:30-01-2025
PROGRAMA:Imprimir en la terminal
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA18
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Elabora en C/C++ un programa que muestre los siguientes datos
Nombre
Edad
Lugar de residencia
Fecha 
Carrera
Semestre
*******************************************************************/

#include <stdio.h>

//Inicio de made
int main (){
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
