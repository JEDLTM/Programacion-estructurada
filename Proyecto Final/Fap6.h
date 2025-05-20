//inclusión condicional 
#ifndef FAP6_H
#define FAP6_H

// Función que imprime mis datos personales
void Fap6();

//Fin de la inclusion condicional
#endif // FAP6_H
#include <iostream>
using namespace std;

void Fap6() {
    bool menu = true; // Solo asignación
    char op; // Cambio a char simple en lugar de array

    // Definimos el valor máximo permitido para evitar el desbordamiento de int
    const int MAX_N = 46340; // sqrt(2^31 - 1)

    while(menu) { // Bucle while para el menú
        cout << "1. Iniciamos la suma de cuadrados" << endl;
        cout << "2. Terminamos el programa" << endl;
        cin >> op;

        switch (op) {
            case '1': {
                int n;
                cout << "Introduce un numero: "; // Solicitamos al usuario que nos ayude ingresando el número máximo
                cin >> n; // Guardamos el número como variable n

                // Si el número es menor a cero, mostramos un mensaje de error
                if (n < 0) {
                    cout << "Error: No puede ser cero o negativo." << endl;
                } 
                // Si el número es mayor al límite permitido para evitar desbordamiento, mostramos un mensaje de error
                else if (n > MAX_N) {
                    cout << "Error: El numero excede el valor maximo permitido para evitar desbordamiento de int." << endl;
                } 
                // Si el número es válido, calculamos la suma de los cuadrados
                else {
                    int suma = 0;

                    for (int i = 1; i <= n; ++i) {
                        suma += i * i;
                    } // Fin del bucle for

                    // Imprimimos la suma de los números al cuadrado
                    cout << "La suma de los cuadrados de 1 a " << n << " es: " << suma << endl;
                }

                break; // Terminamos la función del caso '1'
            }

            case '2': {
                menu = false;
                cout << "Saliendo" << endl;
                break; // Terminamos la función del caso '2'
            }

            default: {
                cout << "Opcian no valida. Por favor, elige una opción valida." << endl;
                break; // En caso de opción no válida
            }
        } // Cierre del switch
    } // Terminamos el bucle while

}