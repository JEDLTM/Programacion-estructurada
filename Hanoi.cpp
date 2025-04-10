/************************************************************  
NOMBRE: Jesus Eduardo de la Torre Mayorga  
FECHA: 10-04-2025  
PROGRAMA: Torres de HANOI
CARRERA: Ingenieria en computacion
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA  
PROFESOR: Sergio Franco Casillas  
DESCRIPCION: Realizar la siguiente actividad, elaborar el juego de las TORRES DE HANOI
Contar el número de movimientos y si estos fueron los mínimos (optimos) para la cantidad de discos
Identificar los discos en movimiento
Puede elegir el número de discos, entre 1 y 10
Se puede idear la forma de generar un puntaje de acuerdo con el número de movimientos


**************************************************************/
#include <iostream>
#include <stack>
using namespace std;

void mostrarTorres(stack<int> torre[], int discos) {
    for (int i = discos; i >= 1; i--) {
        for (int j = 0; j < 3; j++) {
            if (torre[j].size() >= i) {
                int disco = torre[j].size() - i;
                stack<int> temp = torre[j];
                for (int k = 0; k < disco; k++) temp.pop();
                cout << string(temp.top(), '=') << "\t";
            } else {
                cout << "|\t";
            }
        }
        cout << endl;
    }
    cout << "1\t2\t3\n";
}

int main() {
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
        mostrarTorres(torre, discos);
        
        if (torre[2].size() == discos) {
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
    
    return 0;
}