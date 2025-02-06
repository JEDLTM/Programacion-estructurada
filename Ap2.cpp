/**************************************************Ejercicio 2*******
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA:04-02-2025
PROGRAMA:6 caracteres y 6 cadenas de control
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Elabora en C/C++ un programa en donde pongas en práctica
al menos 6 caracteres de escape
y 6 cadenas de control de tipos de salida,
sé específico en tu programa en donde las estás usando, ejemplo
Salto de línea "\n" = (que se observe el resultado)
*******************************************************************/
#include <iostream>
using namespace std;

int main() {
    // Caracteres de escape
    cout << "Salto de línea\n";
    cout << "Tabulador\tEjemplo\n";
    cout << "Retroceso\bEjemplo\n";
    cout << "Retorno de carro\rEjemplo\n";
    cout << "Comillas dobles\"Ejemplo\"\n";
    cout << "Barra invertida\\Ejemplo\n";

    // Cadenas de control de tipos de salida
    int entero = 42;
    float flotante = 3.14;
    double doble = 2.7182818284;
    char caracter = 'A';
    string cadena = "Hola Mundo";
    bool booleano = true;

    cout << "Entero: " << entero << endl;
    cout << "Flotante: " << flotante << endl;
    cout << "Doble: " << doble << endl;
    cout << "Caracter: " << caracter << endl;
    cout << "Cadena: " << cadena << endl;
    cout << "Booleano: " << booleano << endl;

    return 0;
}
