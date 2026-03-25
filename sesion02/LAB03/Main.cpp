#include <iostream>
#include <string>
#include "Flota.h"

int main() {
    UNA::Flota flota;
    int opcion = 0;

    do {
        std::cout << "\n===== FlotaExpress: Registro de Vehiculos =====\n"
            << "1. Registrar vehiculo\n"
            << "2. Buscar vehiculo por placa\n"
            << "3. Mostrar vehiculos por marca\n"
            << "4. Registrar kilometros a un vehiculo\n"
            << "5. Desactivar vehiculo (fuera de servicio)\n"
            << "6. Reactivar vehiculo\n"
            << "7. Eliminar vehiculo (dar de baja definitiva)\n"
            << "8. Mostrar flota completa\n"
            << "9. Mostrar cantidad de vehiculos activos\n"
            << "10. Salir\n"
            << "Opcion: ";
        std::cin >> opcion;
        std::cin.ignore();  

        if (opcion == 1) {
            std::string placa, marca;
            int    anio;
            double km;

            std::cout << "Placa       : "; std::getline(std::cin, placa);
            std::cout << "Marca       : "; std::getline(std::cin, marca);
            std::cout << "Anio        : "; std::cin >> anio;
            std::cout << "Kilometraje : "; std::cin >> km;
            std::cin.ignore();

            UNA::Vehículo* v = new UNA::Vehículo(placa, marca, anio, km);
            flota.agregar(v);

        }
        else if (opcion == 2) {
            std::string placa;
            std::cout << "Placa a buscar: "; std::getline(std::cin, placa);

            UNA::Vehículo* v = flota.buscarporPlaca(placa);
            if (v != nullptr) {
                v->mostrar();
            }
            else {
                std::cout << "[ERROR] Vehiculo con placa \"" << placa << "\" no encontrado.\n";
            }

        }
        else if (opcion == 3) {
            std::string marca;
            std::cout << "Marca a buscar: "; std::getline(std::cin, marca);
            flota.mostrarPorMarca(marca);

        }
        else if (opcion == 4) {
            std::string placa;
            double km;
            std::cout << "Placa del vehiculo : "; std::getline(std::cin, placa);
            std::cout << "Kilometros a sumar : "; std::cin >> km;
            std::cin.ignore();

            UNA::Vehículo* v = flota.buscarporPlaca(placa);
            if (v != nullptr) {
                v->registrarkilometros(km);
            }
            else {
                std::cout << "[ERROR] Vehiculo no encontrado.\n";
            }

        }
        else if (opcion == 5) {
            std::string placa;
            std::cout << "Placa del vehiculo: "; std::getline(std::cin, placa);

            UNA::Vehículo* v = flota.buscarporPlaca(placa);
            if (v != nullptr) {
                v->desactivar();
            }
            else {
                std::cout << "[ERROR] Vehiculo no encontrado.\n";
            }

        }
        else if (opcion == 6) {
            std::string placa;
            std::cout << "Placa del vehiculo: "; std::getline(std::cin, placa);

            UNA::Vehículo* v = flota.buscarporPlaca(placa);
            if (v != nullptr) {
                v->reactivar();
            }
            else {
                std::cout << "[ERROR] Vehiculo no encontrado.\n";
            }

        }
        else if (opcion == 7) {
            std::string placa;
            std::cout << "Placa del vehiculo a eliminar: "; std::getline(std::cin, placa);
            flota.eliminar(placa);

        }
        else if (opcion == 8) {
            flota.mostrarTodos();

        }
        else if (opcion == 9) {
            std::cout << "Vehiculos activos en la flota: " << flota.contarActivos() << "\n";

        }
        else if (opcion != 10) {
            std::cout << "[AVISO] Opcion invalida.\n";
        }

    } while (opcion != 10);

    std::cout << "Sistema cerrado. Memoria liberada. Hasta luego.\n";
    return 0;
}