//inclusión condicional 
#ifndef FAP14_H
#define FAP14_H

// Función que imprime mis datos personales
void Fap14();

//Fin de la inclusion condicional
#endif // FAP14_H
#include <iostream>
#include <stack>

using namespace std;

void mostrarTorres(stack<int> torre[], int discos) {
    for (int i = discos; i >= 1; i--) {
        for (int j = 0; j < 3; j++) {
            size_t torre_size = torre[j].size();
            size_t idx = static_cast<size_t>(i);
            if (torre_size >= idx) {
                size_t disco = torre_size - idx;
                stack<int> temp = torre[j];
                for (size_t k = 0; k < disco; k++) temp.pop();
                cout << string(static_cast<size_t>(temp.top()), '=') << "\t";
            } else {
                cout << "|\t";
            }
        }
        cout << endl;
    }
    cout << "1\t2\t3\n";
}

void Fap14 () {
    int discos, movimientos = 0;
    stack<int> torre[3];
    
    cout << "TORRES DE HANOI\n";
    cout << "Ingresa el numero de discos (1-10): ";
    cin >> discos;
    
    // Inicializar torre 1
    for (int i = discos; i >= 1; i--) {
        torre[0].push(i);
    }
    
    int minimo = (1 << discos) - 1; // 2^n -1
    cout << "Minimo de movimientos requeridos: " << minimo << endl;
    
    while (true) {
        if (static_cast<int>(torre[2].size()) == discos) {
            cout << "\nFelicidades! Completaste el juego en " << movimientos << " movimientos.\n";
            cout << "Minimo de movimientos posibles: " << minimo << endl;
            cout << "Puntaje: " << (movimientos == minimo ? 100 : 100 - (movimientos - minimo)*5) << "/100";
            break;
        }
        
        int origen, destino;
        cout << "\nMover de torre (1-3): ";
        cin >> origen;
        cout << "a torre (1-3): ";
        cin >> destino;
        
        origen--; destino--; // Ajustar a indices 0-2
        
        if (origen < 0 || origen > 2 || destino < 0 || destino > 2) {
            cout << "Torre no valida!\n";
            continue;
        }
        
        if (torre[origen].empty()) {
            cout << "Torre origen vacia!\n";
            continue;
        }
        
        if (!torre[destino].empty() && torre[origen].top() > torre[destino].top()) {
            cout << "No puedes colocar un disco mas grande sobre uno mas pequeno!\n";
            continue;
        }
        
        int disco = torre[origen].top();
        torre[origen].pop();
        torre[destino].push(disco);
        movimientos++;
        
        cout << "Movimiento #" << movimientos << ": Disco " << disco << " de torre " << origen+1 << " a torre " << destino+1 << endl;
    }
    
   
}