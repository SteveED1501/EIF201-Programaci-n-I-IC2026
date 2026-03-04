#include <iostream>
#include <iomanip> 
#include "matriz.h"

void leerMatriz(int matriz[][COLS]) {
    std::cout << "Ingrese los 9 valores de la matriz (fila por fila):" << std::endl;
    for (int i = 0; i < FILAS; i++) {
        std::cout << "  Fila " << i + 1 << ":" << std::endl;
        for (int j = 0; j < COLS; j++) {
            std::cout << "    Columna " << j + 1 << ": ";
            std::cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(const int matriz[][COLS]) {
    std::cout << "\nMatriz ingresada:" << std::endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << std::setw(6) << matriz[i][j];
        }
        std::cout << std::endl;
    }
}

void sumaFilas(const int matriz[][COLS]) {
    std::cout << "\nSuma por filas:" << std::endl;
    for (int i = 0; i < FILAS; i++) {
        int suma = 0;
        for (int j = 0; j < COLS; j++) {
            suma += matriz[i][j];
        }
        std::cout << "  Fila " << i + 1 << ": " << suma << std::endl;
    }
}

void sumaColumnas(const int matriz[][COLS]) {
    std::cout << "\nSuma por columnas:" << std::endl;
    for (int j = 0; j < COLS; j++) {
        int suma = 0;
        for (int i = 0; i < FILAS; i++) {
            suma += matriz[i][j];
        }
        std::cout << "  Columna " << j + 1 << ": " << suma << std::endl;
    }
}

void sumaDiagonal(const int matriz[][COLS]) {
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        suma += matriz[i][i];
    }
    std::cout << "\nSuma de la diagonal principal: " << suma << std::endl;
}