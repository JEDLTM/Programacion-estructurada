//inclusión condicional 
#ifndef FAP9_H
#define FAP9_H

// Función que imprime mis datos personales
void Fap9();

//Fin de la inclusion condicional
#endif // FAP9_H
#include <iostream>
#include <cstdlib>  // Para usar la funcion rand()

using namespace std;

// Funcion para mostrar una matriz cuadrada
// Recibe la matriz y su dimension (número de filas y columnas) y muestra su contenido en pantalla
void mostrarMatriz(int matriz[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << matriz[i][j] << "\t";  // Muestra el valor de la posición [i][j] de la matriz
        }
        cout << endl;  // Salto de línea después de cada fila
    }
}

// Funcion para crear una matriz cuadrada con valores aleatorios entre -100 y 100
// Llama a la funcion rand() para generar números aleatorios entre -100 y 100
void crearMatrizAleatoria(int matriz[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            matriz[i][j] = rand() % 201 - 100;  // Genera números aleatorios entre -100 y 100
        }
    }
}

// Funcion para ingresar los valores de una matriz cuadrada manualmente
// Permite al usuario ingresar los valores para cada posición de la matriz
void ingresarMatriz(int matriz[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            cout << "Ingrese el valor para la posicion (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz[i][j];  // Almacena el valor ingresado por el usuario en la matriz
        }
    }
}

// Funcion para sumar dos matrices cuadradas
// Recorre ambas matrices y suma los valores de las posiciones correspondientes
void sumarMatrices(int matriz1[10][10], int matriz2[10][10], int resultado[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];  // Suma los elementos de las dos matrices
        }
    }
}

// Funcion para restar dos matrices cuadradas
// Recorre ambas matrices y resta los valores de las posiciones correspondientes
void restarMatrices(int matriz1[10][10], int matriz2[10][10], int resultado[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];  // Resta los elementos de las dos matrices
        }
    }
}

// Funcion para multiplicar dos matrices cuadradas
// Recorre las matrices y realiza la multiplicación de cada fila por cada columna
void multiplicarMatrices(int matriz1[10][10], int matriz2[10][10], int resultado[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            resultado[i][j] = 0;  // Inicializa la posición [i][j] del resultado a 0
            for (int k = 0; k < dimension; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];  // Realiza la multiplicación
            }
        }
    }
}

// Funcion para editar un valor en la matriz cuadrada
// Permite al usuario cambiar el valor de una posición específica en la matriz
void editarValor(int matriz[10][10]) {
    int fila, columna, nuevoValor;
    cout << "Ingrese la fila a editar : ";
    cin >> fila;
    cout << "Ingrese la columna a editar : ";
    cin >> columna;
    cout << "Ingrese el nuevo valor: ";
    cin >> nuevoValor;
    matriz[fila - 1][columna - 1] = nuevoValor;  // Asigna el nuevo valor en la posición indicada
}

// Funcion para borrar un valor en la matriz cuadrada (ponerlo en 0)
// Permite al usuario borrar el valor de una posición específica de la matriz (poniéndolo en 0)
void borrarValor(int matriz[10][10]) {
    int fila, columna;
    cout << "Ingrese la fila a borrar : ";
    cin >> fila;
    cout << "Ingrese la columna a borrar : ";
    cin >> columna;
    matriz[fila - 1][columna - 1] = 0;  // Establece el valor de la posición indicada a 0
}

// Funcion para vaciar la matriz cuadrada (poner todos los valores en 0)
// Esta función recorre toda la matriz y pone cada valor en 0
void vaciarMatriz(int matriz[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            matriz[i][j] = 0;  // Asigna 0 a cada elemento de la matriz
        }
    }
}

// Funcion para cambiar los ceros de la matriz por valores aleatorios entre -100 y 100
// Recorre la matriz y reemplaza todos los valores que son igual a 0 por un número aleatorio
void cambiarCerosPorAleatorios(int matriz[10][10], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (matriz[i][j] == 0) {
                matriz[i][j] = rand() % 201 - 100;  // Si el valor es 0, lo reemplaza por un valor aleatorio
            }
        }
    }
}

// Funcion para seleccionar la matriz con la que se desea interactuar
// Permite al usuario elegir entre la matriz 1 o la matriz 2 para realizar las acciones posteriores
void seleccionarMatriz(int& matrizSeleccionada) {
    cout << "¿En que matriz desea interactuar?\n";
    cout << "1. Matriz 1\n";
    cout << "2. Matriz 2\n";
    cout << "Elija 1 o 2: ";
    cin >> matrizSeleccionada;
    while (matrizSeleccionada != 1 && matrizSeleccionada != 2) {
        cout << "Opcion no valida. Elija 1 o 2: ";
        cin >> matrizSeleccionada;
    }
}

void Fap9 () {
    int matriz1[10][10], matriz2[10][10], resultado[10][10];
    int dimension, opcion, matrizSeleccionada;

    // Solicita la dimension de la matriz cuadrada (es una matriz cuadrada, por lo que filas = columnas)
    cout << "Ingrese la dimension de la matriz cuadrada (entre 2 y 10): ";
    cin >> dimension;

    // Verifica que la dimension sea valida (entre 2 y 10)
    if (dimension < 2 || dimension > 10) {
        cout << "La dimension de la matriz debe ser entre 2 y 10." << endl;
        return;  // Sale si la dimension no es valida
    }

    // Menu principal
    while (true) {
        cout << "\nSeleccione una opcion:\n";
        cout << "1. Crear matrices aleatorias\n";
        cout << "2. Ingresar valores manualmente en las matrices\n";
        cout << "3. Mostrar matrices\n";
        cout << "4. Sumar matrices\n";
        cout << "5. Restar matrices\n";
        cout << "6. Multiplicar matrices\n";
        cout << "7. Editar un valor en una matriz\n";
        cout << "8. Borrar un valor en una matriz\n";
        cout << "9. Vaciar matrices\n";
        cout << "10. Cambiar ceros por aleatorios\n";
        cout << "11. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                crearMatrizAleatoria(matriz1, dimension);
                crearMatrizAleatoria(matriz2, dimension);
                cout << "Matrices creadas aleatoriamente." << endl;
                break;
            case 2:
                cout << "Ingrese los valores de la primera matriz:" << endl;
                ingresarMatriz(matriz1, dimension);
                cout << "Ingrese los valores de la segunda matriz:" << endl;
                ingresarMatriz(matriz2, dimension);
                break;
            case 3:
                cout << "\nMatriz 1:" << endl;
                mostrarMatriz(matriz1, dimension);
                cout << "\nMatriz 2:" << endl;
                mostrarMatriz(matriz2, dimension);
                break;
            case 4:
                sumarMatrices(matriz1, matriz2, resultado, dimension);
                cout << "\nResultado de la suma:" << endl;
                mostrarMatriz(resultado, dimension);
                break;
            case 5:
                restarMatrices(matriz1, matriz2, resultado, dimension);
                cout << "\nResultado de la resta:" << endl;
                mostrarMatriz(resultado, dimension);
                break;
            case 6:
                multiplicarMatrices(matriz1, matriz2, resultado, dimension);
                cout << "\nResultado de la multiplicacion:" << endl;
                mostrarMatriz(resultado, dimension);
                break;
            case 7:
                seleccionarMatriz(matrizSeleccionada);
                if (matrizSeleccionada == 1) {
                    editarValor(matriz1);
                } else {
                    editarValor(matriz2);
                }
                break;
            case 8:
                seleccionarMatriz(matrizSeleccionada);
                if (matrizSeleccionada == 1) {
                    borrarValor(matriz1);
                } else {
                    borrarValor(matriz2);
                }
                break;
            case 9:
                seleccionarMatriz(matrizSeleccionada);
                if (matrizSeleccionada == 1) {
                    vaciarMatriz(matriz1, dimension);
                } else {
                    vaciarMatriz(matriz2, dimension);
                }
                cout << "Matriz vaciada." << endl;
                break;
            case 10:
                seleccionarMatriz(matrizSeleccionada);
                if (matrizSeleccionada == 1) {
                    cambiarCerosPorAleatorios(matriz1, dimension);
                } else {
                    cambiarCerosPorAleatorios(matriz2, dimension);
                }
                cout << "Ceros cambiados por valores aleatorios." << endl;
                break;
            case 11:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente nuevamente." << endl;
        }
    }

   
}
