#include <cctype>
#include "cadenas.h"

std::string extraerPrimerNombre(const std::string& nombreCompleto) {
    int posEspacio = nombreCompleto.find(' ');
    return nombreCompleto.substr(0, posEspacio);
}

std::string extraerPrimerApellido(const std::string& nombreCompleto) {
    int pos1 = nombreCompleto.find(' ');
    int pos2 = nombreCompleto.find(' ', pos1 + 1);
    return nombreCompleto.substr(pos1 + 1, pos2 - pos1 - 1);
}

int contarVocales(const std::string& nombreCompleto) {
    int contador = 0;
    for (int i = 0; i < (int)nombreCompleto.length(); i++) {
        char c = tolower(nombreCompleto[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    return contador;
}

std::string convertirMayusculas(const std::string& nombreCompleto) {
    std::string resultado = nombreCompleto;
    for (int i = 0; i < (int)resultado.length(); i++) {
        resultado[i] = toupper(resultado[i]);
    }
    return resultado;
}

int obtenerLongitud(const std::string& nombreCompleto) {
    return (int)nombreCompleto.length();
}