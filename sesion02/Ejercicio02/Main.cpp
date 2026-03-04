#include <iostream>
#include "Inversion.h"

void imprimirArreglo(const int arreglo[], int tamano) {
    std::cout << "[ ";
    for (int i = 0; i < tamano; i++) {
        std::cout << arreglo[i];
        if (i < tamano - 1) std::cout << ", ";
    }
    std::cout << " ]" << std::endl;
}

int main() {
    int tamano;

    std::cout << "=== Inversion de Arreglo ===" << std::endl;

    do {
        std::cout << "Ingrese el tamano del arreglo (1 a " << MAX_ELEMENTOS << "): ";
        std::cin >> tamano;
        if (tamano < 1 || tamano > MAX_ELEMENTOS) {
            std::cout << "  [Error] El tamano debe estar entre 1 y " << MAX_ELEMENTOS << "." << std::endl;
        }
    } while (tamano < 1 || tamano > MAX_ELEMENTOS);

    int original[MAX_ELEMENTOS];
    int invertido[MAX_ELEMENTOS];

    std::cout << "Ingrese " << tamano << " numeros enteros:" << std::endl;
    for (int i = 0; i < tamano; i++) {
        std::cout << "  Numero [" << i + 1 << "]: ";
        std::cin >> original[i];
    }

    invertirArreglo(original, invertido, tamano);

    std::cout << "\n--- Resultados ---" << std::endl;
    std::cout << "Arreglo original : ";
    imprimirArreglo(original, tamano);

    std::cout << "Arreglo invertido: ";
    imprimirArreglo(invertido, tamano);

    return 0;
}