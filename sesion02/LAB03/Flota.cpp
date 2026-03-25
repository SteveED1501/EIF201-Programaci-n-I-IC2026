#include "Flota.h"
#include <iostream>

namespace UNA {
	//Constructor
	Flota::Flota() : cantidad(0), capacidad(3) {
		vehiculos = new Vehículo * [capacidad];

	}
	//Destructor
	Flota::~Flota() {
		for (int i = 0; i < cantidad; i++) {
			delete vehiculos[i];
		}
		delete[] vehiculos;

	}
	void Flota::redimensionar() {
		int nuevaCapacidad = capacidad * 2;
		Vehículo** nuevo = new Vehículo * [nuevaCapacidad];

		for (int i = 0; i < cantidad; i++) {
			nuevo[i] = vehiculos[i];
		}
		delete[] vehiculos;
		vehiculos = nuevo;
		capacidad = nuevaCapacidad;

		std::cout << "[SISTEMA] Arreglo redimensionado. Nueva capacidad: " << capacidad << "\n";

	}

	void Flota::agregar(Vehículo* nuevo) {
		if (cantidad == capacidad) {
			redimensionar();
		}
		vehiculos[cantidad] = nuevo;
		cantidad++;
		std::cout << "[OK] Vehiculo " << nuevo->getPlaca() << " registrado en la flota.\n";

	}

	Vehículo* Flota::buscarporPlaca(std::string placa) const {
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getPlaca() == placa) {
				return vehiculos[i];
			}
		}
		return nullptr;
	}

	void Flota::mostrarPorMarca(std::string marca) const {
		int encontrados = 0;
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getMarca() == marca) {
				vehiculos[i]->mostrar();
				encontrados++;
			}
		}
		if (encontrados == 0) {
			std::cout << "[AVISO] No hay vehiculos de la marca \"" << marca << "\" registrados.\n";

		}
		else {
			std::cout << "Total de vehiculos de la marca \"" << marca << "\": " << encontrados << "\n";
		}

	}
	bool Flota::eliminar(std::string placa) {
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->getPlaca() == placa) {
				if (vehiculos[i]->isActivo()) {
					std::cout << "[ERROR] El vehiculo " << placa
						<< " aun esta activo. Desactivelo antes de darlo de baja.\n";
					return false;
				}
				delete vehiculos[i];

				for (int j = i; j < cantidad - 1; j++) {
					vehiculos[j] = vehiculos[j + 1];
				}
				vehiculos[cantidad - 1] = nullptr;
				cantidad--;

				std::cout << "[OK] Vehiculo " << placa << " eliminado de la flota.\n";
				return true;
			}
		}
		std::cout << "[ERROR] No se encontro el vehiculo con placa \"" << placa << "\".\n";
		return false;
	}
	int Flota::contarActivos() const {
		int contador = 0;
		for (int i = 0; i < cantidad; i++) {
			if (vehiculos[i]->isActivo()) {
				contador++;
			}
		}
		return contador;
	}
	void Flota::mostrarTodos() const {
		if (cantidad == 0) {
			std::cout << "[AVISO] La flota esta vacia.\n";
			return;
		}
		std::cout << "======= FLOTA COMPLETA (" << cantidad << " vehiculo(s)) =======\n";
		for (int i = 0; i < cantidad; i++) {
			vehiculos[i]->mostrar();
		}
		std::cout << "=================================\n";
	}
}