//inclusión condicional 
#ifndef FAP5_H
#define FAP5_H

// Función que imprime mis datos personales
void Fap5();

//Fin de la inclusion condicional
#endif // FAP5_H
#include <iostream>
using namespace std;

void Fap5 () {
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


   
}