//inclusión condicional 
#ifndef FAP12_H
#define FAP12_H

// Función que imprime mis datos personales
void Fap12();

//Fin de la inclusion condicional
#endif // FAP12_H
#include <iostream>
using namespace std;

void Fap12 () {
    string palabra;
	cout << "Ingrese una palabra que unicamente sea en minusculas: ";
	cin >> palabra;

	// Contar numero de caracteres
	std::string::size_type num_caracteres = palabra.length();
	cout << "Numero de caracteres: " << num_caracteres << endl;

	// Contar vocales y consonantes
	std::string::size_type vocales = 0, consonantes = 0;
	for (std::string::size_type i = 0; i < num_caracteres; i++) {
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
	for (std::string::size_type i = 0; i < num_caracteres / static_cast<std::string::size_type>(2); i++) {
		if (palabra[i] != palabra[num_caracteres - static_cast<std::string::size_type>(1) - i]) {
			es_palindromo = false;
			break;
		}
	}

	if (es_palindromo) {
		cout << "La palabra \"" << palabra << "\" es un palindromo." << endl;
	} else {
		cout << "La palabra \"" << palabra << "\" no es un palindromo." << endl;
	}

   
}