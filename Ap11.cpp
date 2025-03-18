/*Ejercicio 11 ******************************************************* 
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA: 18-03-2025
PROGRAMA:Pasos a seguir
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Considere el siguiente algoritmo para generar una secuencia de números. Comience con un número entero n.
Si n es par, divida por 2. Si n es impar, multiplique por 3 y sume 1.
Repita este proceso con el nuevo valor de n, terminando cuando n = 1.
Por ejemplo, la siguiente secuencia de números se generará para n = 22:

22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1

Realice el proceso anterior cuando el usuario proporciona 2 valores y debe especificar cual de ellos tiene más resultantes que el anterior....
*******************************************************************/ 

#include <iostream>  // Incluimos la librería iostream para entrada/salida estándar

using namespace std;  // Usamos el espacio de nombres std para evitar escribir std::

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

int main() {
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

    return 0;  // Fin del programa
}