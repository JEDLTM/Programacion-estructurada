/*Ejercicio 10 *******************************************************
NOMBRE: Jesus Eduardo de la Torre Mayorga
FECHA: 04-03-2025  
PROGRAMA: vectores
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Elaborar un programa con vectores o con arreglos en donde se realicen las operaciones de conjuntos
•	inserción de valores por parte del usuario (dedición por el usuario)
•	Pueden ser valores textuales o numéricos
•	Debe tener borrado y edición de elementos
•	Vaciar conjuntos
•	Realizar las operaciones de conjunto: Unión, Intersección, Diferencia y Complemento
*******************************************************************/
#include <iostream>
#include <vector>

using namespace std;

// Función para imprimir un vector
template<typename T>
void imprimirVector(const vector<T>& v) {
    for (const T& elem : v) {
        cout << elem << " ";
    }
    cout << endl;
}

// Función para insertar valores en un vector
template<typename T>
void insertarValores(vector<T>& v) {
    T valor;
    char continuar;
    do {
        cout << "Ingresa un valor: ";
        cin >> valor;
        v.push_back(valor);
        cout << "¿Deseas ingresar otro valor? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');
}

// Función para borrar y editar elementos
template<typename T>
void borrarEditarElementos(vector<T>& v) {
    int opcion, index;
    T nuevoValor;
    do {
        cout << "1. Borrar elemento\n2. Editar elemento\n3. Salir\nElige una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingresa el índice del elemento a borrar: ";
                cin >> index;
                if (index >= 0 && index < v.size()) {
                    v.erase(v.begin() + index);
                } else {
                    cout << "Índice inválido\n";
                }
                break;
            case 2:
                cout << "Ingresa el índice del elemento a editar: ";
                cin >> index;
                if (index >= 0 && index < v.size()) {
                    cout << "Ingresa el nuevo valor: ";
                    cin >> nuevoValor;
                    v[index] = nuevoValor;
                } else {
                    cout << "Índice inválido\n";
                }
                break;
            case 3:
                return;
            default:
                cout << "Opción inválida\n";
        }
    } while (true);
}

// Función para vaciar un vector
template<typename T>
void vaciarConjunto(vector<T>& v) {
    v.clear();
}

// Función para la unión de dos conjuntos
template<typename T>
vector<T> unionConjuntos(const vector<T>& v1, const vector<T>& v2) {
    vector<T> resultado(v1);
    for (const T& elem : v2) {
        bool encontrado = false;
        for (const T& resElem : resultado) {
            if (resElem == elem) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

// Función para la intersección de dos conjuntos
template<typename T>
vector<T> interseccionConjuntos(const vector<T>& v1, const vector<T>& v2) {
    vector<T> resultado;
    for (const T& elem : v1) {
        for (const T& elem2 : v2) {
            if (elem == elem2) {
                resultado.push_back(elem);
                break;
            }
        }
    }
    return resultado;
}

// Función para la diferencia de dos conjuntos
template<typename T>
vector<T> diferenciaConjuntos(const vector<T>& v1, const vector<T>& v2) {
    vector<T> resultado;
    for (const T& elem : v1) {
        bool encontrado = false;
        for (const T& elem2 : v2) {
            if (elem == elem2) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

// Función para el complemento de un conjunto respecto a un universo
template<typename T>
vector<T> complementoConjunto(const vector<T>& universo, const vector<T>& conjunto) {
    vector<T> resultado;
    for (const T& elem : universo) {
        bool encontrado = false;
        for (const T& elem2 : conjunto) {
            if (elem == elem2) {
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            resultado.push_back(elem);
        }
    }
    return resultado;
}

int main() {
    vector<int> conjunto1, conjunto2, universo;
    int opcion;

    // Rellenar el universo (por ejemplo, del 1 al 10)
    for (int i = 1; i <= 10; ++i) {
        universo.push_back(i);
    }

    do {
        cout << "1. Insertar valores en el conjunto 1\n";
        cout << "2. Insertar valores en el conjunto 2\n";
        cout << "3. Borrar/Editar elementos en el conjunto 1\n";
        cout << "4. Borrar/Editar elementos en el conjunto 2\n";
        cout << "5. Vaciar conjunto 1\n";
        cout << "6. Vaciar conjunto 2\n";
        cout << "7. Unión de los conjuntos\n";
        cout << "8. Intersección de los conjuntos\n";
        cout << "9. Diferencia de los conjuntos\n";
        cout << "10. Complemento del conjunto 1 respecto al universo\n";
        cout << "11. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                insertarValores(conjunto1);
                break;
            case 2:
                insertarValores(conjunto2);
                break;
            case 3:
                borrarEditarElementos(conjunto1);
                break;
            case 4:
                borrarEditarElementos(conjunto2);
                break;
            case 5:
                vaciarConjunto(conjunto1);
                break;
            case 6:
                vaciarConjunto(conjunto2);
                break;
            case 7:
                imprimirVector(unionConjuntos(conjunto1, conjunto2));
                break;
            case 8:
                imprimirVector(interseccionConjuntos(conjunto1, conjunto2));
                break;
            case 9:
                imprimirVector(diferenciaConjuntos(conjunto1, conjunto2));
                break;
            case 10:
                imprimirVector(complementoConjunto(universo, conjunto1));
                break;
            case 11:
                cout << "¡Adiós!\n";
                return 0;
            default:
                cout << "Opción inválida\n";
        }
    } while (true);
}
