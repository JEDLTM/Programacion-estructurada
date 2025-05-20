/**************************************************Proyecto final*******
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA:16-05-2025
PROGRAMA:Concentrado de proyectos
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Realizar un concentrado de todos los proyectos realizados en clase
Debe hacer uso de bibliotecas de funciones
El código completo debe estar en github
Elaborar un manual de trabajo de tu proyecto
Sé creativo
*******************************************************************/

#include <iostream>
#include "Fap1.h"
#include "Fap2.h"
#include "Fap3.h"
#include "Fap4.h"
#include "Fap5.h"
#include "Fap6.h"
#include "Fap7.h"
#include "Fap8.h"
#include "Fap9.h"
#include "Fap10.h"
#include "Fap11.h"
#include "Fap12.h"
#include "Fap13.h"
#include "Fap14.h"



using namespace std;

//Inicio de main
int main() {

    int opcion;
    cout << "Profe pongame 10 porfis" << endl;
    

    do {
        cout << "\nMenu de interacciones para para iniciar cada diferente codigo y con ello iniciar cada instancia\n"
                  <<"Coloca unicamente el numero del programa a ejecutar\n"
                  << " (1) Imprimir los datos personales del alumno\n"
                  << " (2) Mostar las distintas cadenas de control\n"
                  << " (3) Someter un numero a ciertas condiciones dependiendo de su valor\n"
                  << " (4) Realizar una serie de fibonacci\n"
                  << " (5) Calcular los multiplos de 3 y 5 de un numero?\n"
                  << " (6) Determinar la suma de los cuadrados de una secuencia de numeros\n"
                  << " (7) Identificar los numeros primos de un numero y posteriormente realizar la suma de estos\n"
                  << " (8) Sumar de un arreglo\n"
                  << " (9) Crear una calculadora que realice la suma, resta y multiplicacion de 2 matrices\n"
                  << " (10) Realizar operaciones de conjuntos mediante vectores\n"
                  << " (11) Realizar algoritmo para generar una secuencia de numeros, dependiendo si este es para o impar\n"
                  << " (12) Verificar si una palabra es palindromo o no\n"
                  << " (13) EL ahorcado\n"
                  << " (14) Torres de Hanoi\n"
                  << "**/Presiona cualquier una letra o simbolo para salir/**\n"
                  << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
              Fap1();
          
            break;
            case 2:
              
                Fap2();
        
            break;
            case 3:
              
           
                Fap3();
          
            break;
            case 4:
               
                Fap4();
          
            break;
            case 5:
               
                Fap5();     

            break;
            case 6:
               
                Fap6();

            break;
            case 7:
               
                Fap7(); 

            break;
            case 8:
               
                Fap8(); 

            break;
            case 9:
               
                Fap9();

            break;
            case 10:
               
                Fap10();        

            break;
            case 11:
               
                Fap11();

            break;
            case 12:
               
                Fap12();

            break;
            case 13:
               
                Fap13();

            break;
            case 14:
               
                Fap14();

            break;
            case 0:
                cout << "Llegamos al final del cuento, gracias!\n";
                cout << "Profe pongame 10 porfi\n";
            break;
            default:
                cout << "Creo que no tengo esa opcion porfa elige entre (0-14)\n";
        }
    } while (opcion != 0);

    return 0;
}