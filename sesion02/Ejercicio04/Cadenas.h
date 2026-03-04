#ifndef CADENAS_H
#define CADENAS_H

#include <string>

std::string extraerPrimerNombre(const std::string& nombreCompleto);
std::string extraerPrimerApellido(const std::string& nombreCompleto);
int contarVocales(const std::string& nombreCompleto);
std::string convertirMayusculas(const std::string& nombreCompleto);
int obtenerLongitud(const std::string& nombreCompleto);

#endif