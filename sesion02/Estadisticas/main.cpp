#include <iostream>
#include "Estadistica.h"

int main() {
	int numero[TAMANO];

	std::cout << " Estadisticas de arreglo " << std::endl;
	std::cout << "ingrese " << TAMANO << "numero enteros:" << std::endl;

	for (int i = 0; i < TAMANO; i++) {
		std::cout << " Numero [" << i + 1 << "]: ";
		std::cin >> numero[i];
	}
	std::cout << "\n--- Resultados ---" << std::endl;
	std::cout << "Valor maximo  : " << obtenerMayor(numero, TAMANO) << std::endl;
	std::cout << "Valor minimo  : " << obtenerMenor(numero, TAMANO) << std::endl;
	std::cout << "Suma total    : " << calcularSuma(numero, TAMANO) << std::endl;
	std::cout << "Promedio      : " << calcularPromedio(numero, TAMANO) << std::endl;

	return 0;
}
