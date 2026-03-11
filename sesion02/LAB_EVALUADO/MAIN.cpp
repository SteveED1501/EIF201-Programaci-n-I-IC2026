#include <iostream>
#include <iomanip>
#include "paquetes.h"

int main() {
    int cantidad = 0;
    double* pesos = crearRegistro(cantidad);
    ingresarPesos(pesos, cantidad);
    double limite;
    std::cout << std::endl << "Ingrese el limite de peso permitido (kg): ";
    std::cin >> limite;
    const double* punteroMasPesado = buscarMasPesado(pesos, cantidad);
    std::cout << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "+----------------------------------------+" << std::endl;
    std::cout << "| RESUMEN DEL REGISTRO                   |" << std::endl;
    std::cout << "+----------------------------------------+" << std::endl;
    std::cout << "  Paquetes registrados : " << cantidad << std::endl;
    std::cout << "  Peso total           : " << calcularPesoTotal(pesos, cantidad) << " kg" << std::endl;
    std::cout << "  Promedio por paquete : " << calcularPesoTotal(pesos, cantidad) / cantidad << " kg" << std::endl;
    std::cout << "  Limite establecido   : " << limite << " kg" << std::endl;
    std::cout << "  Paquetes sobre limite: " << contarSobreLimite(pesos, cantidad, limite) << std::endl;
    std::cout << "  Paquete mas pesado   : " << *punteroMasPesado << " kg" << std::endl;
    std::cout << "+----------------------------------------+" << std::endl;
    delete[] pesos;
    pesos = nullptr;

    return 0;
}
