#include <iostream>
#include <string>
#include "cadenas.h"

int main() {
    std::string nombreCompleto;

    std::cout << "=== Procesamiento de Nombre Completo ===" << std::endl;
    std::cout << "Formato esperado: PrimerNombre PrimerApellido SegundoApellido" << std::endl;
    std::cout << "Ingrese su nombre completo: ";

    std::getline(std::cin, nombreCompleto);

    std::cout << "\n--- Resultados ---" << std::endl;
    std::cout << "Primer nombre      : " << extraerPrimerNombre(nombreCompleto) << std::endl;
    std::cout << "Primer apellido    : " << extraerPrimerApellido(nombreCompleto) << std::endl;
    std::cout << "Cantidad de vocales: " << contarVocales(nombreCompleto) << std::endl;
    std::cout << "En mayusculas      : " << convertirMayusculas(nombreCompleto) << std::endl;
    std::cout << "Longitud total     : " << obtenerLongitud(nombreCompleto) << " caracteres" << std::endl;

    return 0;
}