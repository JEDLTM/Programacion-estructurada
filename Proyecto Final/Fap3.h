//inclusión condicional 
#ifndef FAP3_H
#define FAP3_H

// Función que imprime mis datos personales
void Fap3();

//Fin de la inclusion condicional
#endif // FAP3_H
#include <iostream>
using namespace std;

void Fap3 () {
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
    
   
}