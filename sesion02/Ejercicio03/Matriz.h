#ifndef MATRIZ_H
#define MATRIZ_H

const int FILAS = 3;
const int COLS = 3;

void leerMatriz(int matriz[][COLS]);
void imprimirMatriz(const int matriz[][COLS]);
void sumaFilas(const int matriz[][COLS]);
void sumaColumnas(const int matriz[][COLS]);
void sumaDiagonal(const int matriz[][COLS]);

#endif