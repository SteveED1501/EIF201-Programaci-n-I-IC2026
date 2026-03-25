#pragma once
#ifndef UNA_FLOTA_H
#define UNA_FLOTA_H

#include "Vehículo.h"
#include <string>

namespace UNA {

	class Flota
	{
		private:
			Vehículo** vehiculos;
			int        cantidad;
			int        capacidad;

			void redimensionar();

	public:
		Flota();
		~Flota();

		void agregar(Vehículo* nuevo);
		Vehículo* buscarporPlaca(std::string placa) const;
		void mostrarPorMarca(std::string marca) const;
		bool       eliminar(std::string placa);
		int        contarActivos() const;
		void       mostrarTodos() const;
	};

}
#endif 

