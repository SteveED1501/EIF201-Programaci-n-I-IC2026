#include "Estadistica.h"
int obtenerMayor(const int arreglo[], int tamano) {
	int mayor = arreglo[0];
	for (int i = 1; i < tamano; i++) {
		if (arreglo[i] > mayor) {
			mayor = arreglo[i];
		}
	}
	return mayor;
}

int obtenerMenor(const int arreglo[], int tamano) {
	int menor = arreglo[0];
	for (int i = 1; i < tamano; i++) {
		if (arreglo[i] < menor) {
			menor = arreglo[i];
		}
	}
	return menor;
}

int calcularSuma(const int arreglo[], int tamano) {
	int suma = 0;
	for (int i = 0; i < tamano; i++) {
		suma += arreglo[i];
	}
	return suma;
}
double calcularPromedio(const int arreglo[], int tamano) {
	int suma = calcularSuma(arreglo, tamano);
	return (double)suma / tamano;
}