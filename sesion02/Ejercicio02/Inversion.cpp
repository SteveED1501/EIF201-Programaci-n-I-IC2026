#include "Inversion.h"
void invertirArreglo(const int original[], int invertido[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        invertido[i] = original[tamano - 1 - i];
    }
}