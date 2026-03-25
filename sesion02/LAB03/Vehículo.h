#pragma once
#ifndef UNA_VEHICULO_H
#define UNA_VEHICULO_H

#include <string>

namespace UNA {

	class Vehículo
	{
	private:
		std::string placa;
		std::string marca;
		int anio;
		double kilometraje;
		bool activo;

	public:
		Vehículo(std::string placa, std::string marca, int anio, double kilometraje);
		
		std::string getPlaca() const;
		std::string getMarca() const;
		int getAnio() const;
		double getKilometraje() const;
		bool isActivo() const;

		void registrarkilometros(double km);
		void desactivar();
		void reactivar();
		void mostrar() const;
	};
}

#endif


