#include <iostream> 
using namespace std;

// Función que verifica si un número es primo
bool esPrimo(int num) {
    if (num < 2)
        return false; // Números menores a 2 no son primos
    for (int i = 2; i * i <= num; ++i) // Iteramos desde 2 hasta la raíz cuadrada de num
        if (num % i == 0)
            return false; // Si es divisible por algún número, no es primo
    return true; // Si no encontró divisores, es primo
}

int main() {
    bool menu = true;
    while (menu) { // Bucle while para el menú
        int op; // Definimos la variable `op` aquí
        cout << "1. Iniciamos la suma de primos" << endl;
        cout << "2. Terminamos el programa" << endl;
        cin >> op;

        switch (op) {
            case 1: {
                int limite, suma = 0; // Declaramos variables para el límite ingresado y la suma de primos
                cout << "Introduce un numero: "; // Pedimos al usuario un número
                cin >> limite; // Leemos el número ingresado

                // Iteramos desde 2 hasta el límite ingresado
                for (int i = 2; i <= limite; ++i)
                    if (esPrimo(i)) suma += i; // Si el número es primo, lo sumamos

                // Mostramos el resultado de la suma de los primos encontrados
                cout << "Suma de primos: " << suma << endl;
                break; // Terminamos la función del caso '1'
            }

            case 2: {
                menu = false;
                cout << "Saliendo" << endl;
                break; // Terminamos la función del caso '2'
            }

            default: {
                cout << "Opción no válida. Por favor, elige una opción válida." << endl;
                break; // En caso de opción no válida
            }
        } // Cierre del switch
    } // Terminamos el bucle while

    return 0;
} // Terminamos main
