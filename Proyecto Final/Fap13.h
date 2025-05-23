//inclusión condicional 
#ifndef FAP13_H
#define FAP13_H

// Función que imprime mis datos personales
void Fap13();

//Fin de la inclusion condicional
#endif // FAP13_H
#include <iostream>
using namespace std;
// Banco de palabras ampliado con animales
const char* animales[20] = {
    "PERRO", "GATO", "LEON", "RANA", "ARMADILLO",
    "ZEBRA", "JIRAFA", "TIGRE", "AJOLOTE", "ELEFANTE",
    "CANGURO", "DELFIN", "KOALA", "LORO", "MARIPOSA",
    "OSO", "PANDA", "RINOCERONTE", "SERPIENTE", "TORTUGA"
};

void aMayusculas(char* palabra) {
    for(int i = 0; palabra[i]; i++) {
        if(palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabra[i] -= 32;
        }
    }
}

bool esVocal(char letra) {
    return letra == 'A' || letra == 'E' || letra == 'I' || 
           letra == 'O' || letra == 'U';
}

unsigned int pseudoAleatorio(unsigned int max) {
    static unsigned int semilla = 12345;
    semilla = (8253729U * semilla + 2396403U);
    if(max == 0U) {
        return 0U;
    }
    return semilla % max;
}

void mostrarTablero(const char* palabra, const char* adivinadas, int intentos, int jugador) {
    cout << "\nTurno Jugador " << jugador;
    cout << "\nIntentos: " << intentos;
    cout << "\nPalabra: ";
    
    for(int i = 0; palabra[i]; i++) {
        bool adivinada = false;
        for(int j = 0; adivinadas[j]; j++) {
            if(palabra[i] == adivinadas[j]) {
                adivinada = true;
                break;
            }
        }
        cout << (adivinada ? palabra[i] : '_') << " ";
    }
    
    cout << "\nLetras usadas: " << adivinadas << "\n";
}

void Fap13 () {
    cout << "AHORCADO DE ANIMALES\n1. Vs CPU\n2. 2 Jugadores\nOpcion: ";
    int opcion;
    cin >> opcion;
    
    char palabra[20];
    if(opcion == 1) {
        unsigned int indice = pseudoAleatorio(20U); // 20 animales disponibles
        int i = 0;
        while(animales[indice][i]) {
            palabra[i] = animales[indice][i];
            i++;
        }
        palabra[i] = '\0';
    } else {
        cout << "Jugador 1, ingresa palabra: ";
        cin >> palabra;
        aMayusculas(palabra);
        system("cls||clear");
    }
    
    char adivinadas[27] = {0};
    int intentosJ1 = 6, intentosJ2 = 6;
    int jugador = 1;
    int totalJ1 = 0, totalJ2 = 0;
    
    while(true) {
        if((jugador == 1 && intentosJ1 <= 0) || (jugador == 2 && intentosJ2 <= 0)) {
            jugador = jugador == 1 ? 2 : 1;
            continue;
        }
        
        cout << "Letra: ";
        int letra_int;
        cin >> letra_int;
        char letra = static_cast<char>(toupper(static_cast<unsigned char>(letra_int)));
        
        bool repetida = false;
        for(int i = 0; adivinadas[i]; i++) {
            if(adivinadas[i] == letra) {
                repetida = true;
                cout << "Letra repetida!\n";
                break;
            }
        }
        if(repetida) continue;
        
        int len = 0;
        while(adivinadas[len]) len++;
        adivinadas[len] = letra;
        adivinadas[len+1] = '\0';
        
        jugador == 1 ? totalJ1++ : totalJ2++;
        
        bool correcta = false;
        for(int i = 0; palabra[i]; i++) {
            if(palabra[i] == letra) {
                correcta = true;
                break;
            }
        }
        
        if(!correcta) {
            if(esVocal(letra)) {
                cout << "Vocal incorrecta! -1 intento extra\n";
                jugador == 1 ? intentosJ1-- : intentosJ2--;
            }
            jugador == 1 ? intentosJ1-- : intentosJ2--;
        }
        
        bool gano = true;
        for(int i = 0; palabra[i]; i++) {
            bool encontrada = false;
            for(int j = 0; adivinadas[j]; j++) {
                if(palabra[i] == adivinadas[j]) {
                    encontrada = true;
                    break;
                }
            }
            if(!encontrada) {
                gano = false;
                break;
            }
        }
        
        if(gano) {
            mostrarTablero(palabra, adivinadas, jugador == 1 ? intentosJ1 : intentosJ2, jugador);
            cout << "Jugador " << jugador << " gana!\n";
            cout << "Intentos J1: " << totalJ1;
            if(opcion == 2) cout << ", J2: " << totalJ2;
            break;
        }
        
        jugador = jugador == 1 ? 2 : 1;
        
        if(intentosJ1 <= 0 && intentosJ2 <= 0) {
            cout << "Perdieron! La palabra era: " << palabra << "\n";
            break;
        }
    }
   
}