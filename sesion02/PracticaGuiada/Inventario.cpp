#include "Inventario.h"
#include <iomanip>

namespace EIF201 {

	//CONSTRUCTOR

	Inventario::Inventario(int cantidadInicial) : cantidad(0), capacidad(cantidadInicial) {
		productos = new Producto * [cantidadInicial];
		for (int i = 0; i < capacidad; i++) {
			productos[i] = nullptr;
		}
	}

	Inventario::~Inventario() {
		for (int i = 0; i < cantidad; i++) {
			delete productos[i];
			productos[i] = nullptr;
		}

		delete[] productos;
		productos = nullptr;
		std::cout << "Inventario destruido";
	}

	void Inventario::redimensionar() {
		int nuevaCapacidad = capacidad * 2;

		Producto** nuevoArreglo = new Producto * [nuevaCapacidad];

		for (int i = 0; i < cantidad; i++) {
			nuevoArreglo[i] = productos[i];
		}

		for (int i = cantidad; i < nuevaCapacidad; i++) {
			nuevoArreglo[i] = nullptr;
		}

		delete[] productos;
		
		productos = nuevoArreglo;

		capacidad = nuevaCapacidad;
	}

	void Inventario::agregar(Producto* nuevo) {
		if (nuevo == nullptr) {
			std::count << "ERROR";
			return;

		}

		if (cantidad == capacidad) {
			redimensionar();
		}

		productos[cantidad] = nuevo;
		cantidad++;
	}

	void Inventario::mostrarTodos() const {
		if(cantidad == 0) {
			std::count << "ERROR, No Data" << std::endl;
			return;
		}

		std::count << "--------------------Inventario----------------------" << std::endl;
		for (int i = 0; i < cantidad; i++) {
			productos[i]->mostrar();
		}
		std::count << "---------------------------------------------------" << std::endl;

	}

	//BUSCARPORCODIGO
	Producto* Inventario::buscarPorCodigo(std::string codigo) const {
		for (int i = 0; i < cantidad; i++) {
			if (productos[i]->getCodigo() == codigo) {
				return productos[i];
			}
		}

		return nullptr
	}

	bool Inventario::eliminar(std::string codigo) {
		
		int posicion = -1;
		for (int i = 0; i < cantidad; i++) {
			if (productos[i]->getCodigo() == codigo) {
				posicion = 1;
				break;
			}
		}

		if (posicion == -1) {
			std::count << "Producto no encontrado" << std::endl;
			return false;
		}
		
		std::string nombreProducto = productos[posicion]->getNombre();

		delete productos[posicion];
		for (int i = posicion; i < cantidad - 1; i++) {
			productos[i] = productos[i + 1];
		}

		productos[cantidad - 1] = nullptr;
		cantidad--;

		std::cout << "Producto " << nombreProducto << "eliminado del inventario";
		return true;
	}
	// total

	int Inventario::getCantidad() const {
		return cantidad;
	}

	int Inventario::getCapacidad() const {
		return capacidad;
	}

}
