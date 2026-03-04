#include <iostream>
#include "matriz.h"

int main() {
    int matriz[FILAS][COLS];

    std::cout << "=== Operaciones sobre Matriz 3x3 ===" << std::endl;

    leerMatriz(matriz);
    imprimirMatriz(matriz);
    sumaFilas(matriz);
    sumaColumnas(matriz);
    sumaDiagonal(matriz);

    return 0;
}