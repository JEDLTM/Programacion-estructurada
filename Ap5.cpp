/**************************************************Ejercicio 5*******
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA:11-02-2025
PROGRAMA:Multiplos de 3 y 5
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Realizar la siguiente actividad de programación:

El usuario final proporcion a un número entre 0 y 1000, es decir, no debe haber residuos
El programa debe encontrar todos los múltiplos de 3 y 5 
El programa debe mostrar cuántos multiplos de 3, cuantos de 5 y realizar total de aquellos que fueron encontrados para cada elemento.

*******************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num, count_3 = 0, count_5 = 0;
    cout << "Ingresa un número entre 0 y 1000: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            if (i % 3 == 0) {
                cout << i << "\t";
                count_3++;
            }
            if (i % 5 == 0) {
                cout << i << "\t";
                count_5++;
            }
            cout << endl;
        }
    }

    cout << "Cantidad de múltiplos de 3: " << count_3 << endl;
    cout << "Cantidad de múltiplos de 5: " << count_5 << endl;
    cout << "Total de elementos encontrados: " << count_3 + count_5 << endl;

    return 0;
}
