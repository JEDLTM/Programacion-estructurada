/**************************************************Ejercicio 6*******
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA: 11-02-2025
PROGRAMA: 6 suma de cuadrados
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Determinar la suma de los cuadrados de una secuencia de números dada por un usuario:
ej: el usuario coloca el número 5, por lo tanto se debe determinar lo siguiente
1^2 + 2^^ + 3^2 + 4^2 + 5^2 = ?
1+4+9+16+25 = 55
El programa debe enviar un error si el valor que se somete es menor a 0 
y también si es mayor a un determinado valor, es decir, el valor introducido por el usuario 
NO debe ser mayor a lo que te permita el tipo de datos long.
*******************************************************************/

#include <iostream>
using namespace std;

int main() {
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

    return 0;
} // Terminamos main
