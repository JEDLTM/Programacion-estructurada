//inclusión condicional 
#ifndef FAP11_H
#define FAP11_H

// Función que imprime mis datos personales
void Fap11();

//Fin de la inclusion condicional
#endif // FAP11_H
#include <iostream>
using namespace std;

int contarPasos(int n) {
    int pasos = 0;  // Contador para el número de pasos
    while (n != 1) {  // Mientras n no sea 1, continuamos el proceso
        if (n % 2 == 0) {  // Si n es par
            n = n / 2;  // Dividimos n por 2
        } else {  // Si n es impar
            n = n * 3 + 1;  // Multiplicamos n por 3 y sumamos 1
        }
        pasos++;  // Incrementamos el contador de pasos
    }
    return pasos;  // Retornamos el número total de pasos
}

void Fap11 () {
    int num1, num2;  // Variables para almacenar los dos números ingresados por el usuario

    // Solicitamos al usuario que ingrese dos números enteros
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Calculamos el número de pasos para cada número
    int pasosNum1 = contarPasos(num1);
    int pasosNum2 = contarPasos(num2);

    // Mostramos el número de pasos para cada número
    cout << "El numero " << num1 << " toma " << pasosNum1 << " pasos para llegar a 1." << endl;
    cout << "El numero " << num2 << " toma " << pasosNum2 << " pasos para llegar a 1." << endl;

    // Determinamos cuál de los dos números tiene más pasos
    if (pasosNum1 > pasosNum2) {
        cout << "El numero " << num1 << " tiene mas pasos que " << num2 << "." << endl;
    } else if (pasosNum2 > pasosNum1) {
        cout << "El numero " << num2 << " tiene mas pasos que " << num1 << "." << endl;
    } else {
        cout << "Ambos numeros tienen la misma cantidad de pasos." << endl;
    }

    // Fin del programa
   
}