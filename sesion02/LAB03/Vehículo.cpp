#include "Vehículo.h"
#include <iostream>

namespace UNA {
	//constructor
	Vehículo::Vehículo(std::string placa, std::string marca, int anio, double kilometraje) : placa(placa), marca(marca), anio(anio), kilometraje(kilometraje), activo(true) {}

	//Getters
	std::string Vehículo::getPlaca() const { return placa; }
	std::string Vehículo::getMarca() const { return marca; }
	int Vehículo::getAnio() const { return anio; }
	double Vehículo::getKilometraje() const { return kilometraje; }
	bool Vehículo::isActivo() const { return activo; }

	//Registrar los kilometros
	void Vehículo::registrarkilometros(double km) {
		if (!activo) {
			std::cout << "[ERROR] El vehiculo " << placa << " esta fuera de servicio. No se pueden registrar kilometros.\n";

			return;

		}
		if (km <= 0) {
			std::cout << "[ERROR] La cantidad de kilometros debe ser positiva.\n";
			return;

		}
		kilometraje += km;
		std::cout << "[OK] Se registraron " << km << " km al vehiculo " << placa << ". Total: " << kilometraje << " km.\n";

	}
	//Desactivar
	void Vehículo::desactivar() {
		if (!activo) {
			std::cout << "[AVISO] El vehiculo " << placa << " ya esta fuera de servicio.\n";
			return;
		}
		activo = false;
		std::cout << "[OK] Vehiculo " << placa << " puesto fuera de servicio.\n";

	}
	//Reactivar
	void Vehículo::reactivar() {
		if (activo) {
			std::cout << "[AVISO] El vehiculo " << placa << " ya esta activo.\n";
			return;
		}
		activo = true;
		std::cout << "[OK] Vehiculo " << placa << " reactivado.\n";
		
	}
	// Mostrar
	void Vehículo::mostrar() const {
		std::cout << "----------------------\n"
			<< "Placa   :" << placa << "\n"
			<< "Marca   :" << marca << "\n"
			<< "Anio   :" << anio << "\n"
			<< "Kilometraje  :" << kilometraje << "\n"
			<< "Estado   :" << (activo ? "ACTIVO" : "FUERA DE SERVICIO") << "\n";

	}
}
