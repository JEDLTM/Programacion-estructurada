//inclusión condicional 
#ifndef FAP8_H
#define FAP8_H

// Función que imprime mis datos personales
void Fap8();

//Fin de la inclusion condicional
#endif // FAP8_H
#include <iostream>
using namespace std;

void Fap8 () {
    float arreglo[10] = {0.0}; // Arreglo con 10 espacios inicializados en 0
    int opcion;
    int posicion;
    float valor;

    while (true) {
        // Mostrar el menu de opciones
        cout << "\nMenu:\n";
        cout << "1. Ingresar valor\n";
        cout << "2. Mostrar lista de valores\n";
        cout << "3. Mostrar sumatoria de todos los elementos\n";
        cout << "4. Borrar un elemento\n";
        cout << "5. Editar un elemento\n";
        cout << "6. Vaciar arreglo\n";
        cout << "7. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Ingresar valor en una posicion especifica del arreglo
                cout << "Ingresa la posicion (0-9): ";
                cin >> posicion;
                if (posicion < 0 || posicion >= 10) {
                    cout << "Posicion invalida!\n";
                    break;
                }
                cout << "Ingresa el valor: ";
                cin >> valor;
                arreglo[posicion] = valor;
                break;

            case 2:
                // Mostrar lista de valores del arreglo
                cout << "Lista de valores:\n";
                for (int i = 0; i < 10; ++i) {
                    cout << "Posicion " << i << ": " << arreglo[i] << endl;
                }
                break;

            case 3: {
                // Mostrar sumatoria de todos los elementos del arreglo
                float sumatoria = 0.0;
                for (int i = 0; i < 10; ++i) {
                    sumatoria += arreglo[i];
                }
                cout << "Sumatoria de todos los elementos: " << sumatoria << endl;
                break;
            }

            case 4:
                // Borrar un elemento especifico del arreglo (ponerlo en 0)
                cout << "Ingresa la posicion del elemento a borrar (0-9): ";
                cin >> posicion;
                if (posicion < 0 || posicion >= 10) {
                    cout << "Posicion invalida!\n";
                    break;
                }
                arreglo[posicion] = 0.0;
                cout << "Elemento borrado!\n";
                break;

            case 5:
                // Editar el valor de un elemento especifico del arreglo
                cout << "Ingresa la posicion del elemento a editar (0-9): ";
                cin >> posicion;
                if (posicion < 0 || posicion >= 10) {
                    cout << "Posicion invalida!\n";
                    break;
                }
                cout << "Ingresa el nuevo valor: ";
                cin >> valor;
                arreglo[posicion] = valor;
                cout << "Elemento editado!\n";
                break;

            case 6:
                // Vaciar el arreglo (poner todos los elementos en 0)
                for (int i = 0; i < 10; ++i) {
                    arreglo[i] = 0.0;
                }
                cout << "Arreglo vaciado!\n";
                break;

            case 7:
                // Salir del programa
                cout << "Saliendo del programa...\n";
                break;

            default:
                // Manejar opcion invalida
                cout << "Opcion invalida!\n";
                break;
        }
    }
   
}