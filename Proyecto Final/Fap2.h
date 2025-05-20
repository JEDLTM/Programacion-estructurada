//inclusión condicional 
#ifndef FAP2_H
#define FAP2_H

// Función que imprime mis datos personales
void Fap2();

//Fin de la inclusion condicional
#endif // FAP2_H
#include <iostream>
using namespace std;

void Fap2 () {
    // Caracteres de escape
    cout << "Salto de línea\n";
    cout << "Tabulador\tEjemplo\n";
    cout << "Retroceso\bEjemplo\n";
    cout << "Retorno de carro\rEjemplo\n";
    cout << "Comillas dobles\"Ejemplo\"\n";
    cout << "Barra invertida\\Ejemplo\n";

    // Cadenas de control de tipos de salida
    int entero = 42;
    float flotante = 3.14f;
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


}