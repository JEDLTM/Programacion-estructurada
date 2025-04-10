/************************************************************
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA: 10-04-2025
PROGRAMA: Palindromos
CARRERA: Ingenieria en computacion
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION:Realizar un programa que me permita identificar si una palabra es palindromo
Que cuente el numero de caracteres
Que cuente el numero de vocales
Que cuente el numero de consonantes
Enviar en un documento PDF Las capturas de su ejecucion y en .ZIP los archivos de codigo fuente
**************************************************************/


#include <iostream>

using namespace std;

int main() {

	string palabra;
	cout << "Ingrese una palabra que unicamente sea en minusculas: ";
	cin >> palabra;

	// Contar numero de caracteres
	int num_caracteres = palabra.length();
	cout << "Numero de caracteres: " << num_caracteres << endl;

	// Contar vocales y consonantes
	int vocales = 0, consonantes = 0;
	for (int i = 0; i < num_caracteres; i++) {
		char c = palabra[i];
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			vocales++;
		} else if (c >= 'a' && c <= 'z') {
			consonantes++;
		}
	}
	cout << "Numero de vocales: " << vocales << endl;
	cout << "Numero de consonantes: " << consonantes << endl;

	// Verificar si es palindromo
	bool es_palindromo = true;
	for (int i = 0; i < num_caracteres / 2; i++) {
		if (palabra[i] != palabra[num_caracteres - 1 - i]) {
			es_palindromo = false;
			break;
		}
	}

	if (es_palindromo) {
		cout << "La palabra \"" << palabra << "\" es un palindromo." << endl;
	} else {
		cout << "La palabra \"" << palabra << "\" no es un palindromo." << endl;
	}

	return 0;
}