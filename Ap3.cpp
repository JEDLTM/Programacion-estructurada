/**************************************************Ejercicio 3*******
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA:04-02-2025
PROGRAMA:5 en 5 o10 en 10
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Elaborar un programa en C++ donde se le pida un número al usuario y que tome en cuenta las siguiente condiciones:

Si el número es mayor a 0 y menor a 500, subir de 5 en 5, 100 veces.
Si el número es mayor a 500 y menor a 1000, subir el número de 10 en 10, 50 veces
Si el número es mayor a 1000, “No se puede calcular el valor”.
Debe hacer un ciclo en donde pregunte si desea terminar el programa.
Contar con las veces que realizó una operación.
En todo momento mostrar valores
Elaborar diagrama de flujo.
*******************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num;
    char continuar;
    int contadorOperaciones = 0;
// solicitamos el numero al usuario
    do {
        cout << "Ingrese un número: ";
        cin >> num;
//mediante esta serie de if y else determinamos que numero es e iniciamos la sumas y las imprimimos en la terminal
        if (num > 0 && num < 500) {
            cout << "Incrementando de 5 en 5, 100 veces:" << endl;
            for (int i = 0; i < 100; ++i) {
                num += 5;
                cout << "Valor actual: " << num << endl;
            }
        } else if (num > 500 && num < 1000) {
            cout << "Incrementando de 10 en 10, 50 veces:" << endl;
            for (int i = 0; i < 50; ++i) {
                num += 10;
                cout << "Valor actual: " << num << endl;
            }
        } else if (num > 1000) {
            cout << "No se puede calcular el valor." << endl;
        }
//preguntamos si quiere que termine el prorama o vuelva a ejecutarse
        contadorOperaciones++;
        cout << "¿Desea terminar el programa? (s/n): ";
        cin >> continuar;
    } while (continuar != 's');
//por final imprimimos en la terminal el nmero de operaciones realizadas
    cout << "Número de operaciones realizadas: " << contadorOperaciones << endl;

    return 0;
}
