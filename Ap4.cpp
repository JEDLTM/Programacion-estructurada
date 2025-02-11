/**************************************************Ejercicio 4*******
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA:11-02-2025
PROGRAMA:3 posiles fibonacci
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Elaborar la serie fibonacci utilizando los 3 ciclos básicos (for, while y do-while)

Solicitar al usuario un valor, y la serie debe llegar a un valor igual o menor al indicado por el usuario
El usuario va a elegir con qué ciclo debe trabajar
El programa debe salir cuando el usuario lo indique

*******************************************************************/
#include <iostream>
using namespace std;

void fibonacciFor(int limit) {
    int a = 0, b = 1, c = 0;
    cout << "Serie Fibonacci con ciclo for: ";
    for (int i = 0; c <= limit; ++i) {
        if (i <= 1) c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        if (c <= limit) cout << c << " ";
    }
    cout << endl;
}

void fibonacciWhile(int limit) {
    int a = 0, b = 1, c = 0, i = 0;
    cout << "Serie Fibonacci con ciclo while: ";
    while (c <= limit) {
        if (i <= 1) c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        if (c <= limit) cout << c << " ";
        i++;
    }
    cout << endl;
}

void fibonacciDoWhile(int limit) {
    int a = 0, b = 1, c = 0, i = 0;
    cout << "Serie Fibonacci con ciclo do-while: ";
    do {
        if (i <= 1) c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        if (c <= limit) cout << c << " ";
        i++;
    } while (c <= limit);
    cout << endl;
}

int main() {
    int choice, limit;
    char exitChar;
    do {
        cout << "Ingrese el valor límite de la serie Fibonacci: ";
        cin >> limit;

        cout << "Elija el ciclo a utilizar:\n";
        cout << "1. for\n";
        cout << "2. while\n";
        cout << "3. do-while\n";
        cin >> choice;

        switch(choice) {
            case 1: fibonacciFor(limit); break;
            case 2: fibonacciWhile(limit); break;
            case 3: fibonacciDoWhile(limit); break;
            default: cout << "Opción no válida\n"; break;
        }

        cout << "¿Desea salir del programa? (s/n): ";
        cin >> exitChar;

    } while(exitChar != 's');

    return 0;
}