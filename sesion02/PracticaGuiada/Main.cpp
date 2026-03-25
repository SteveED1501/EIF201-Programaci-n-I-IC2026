#include "Inventario.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>


int mostrarMenu() {
	std::cout << "--- Menu ---" << std::endl;
	std::cout << "--- Menu ---" << std::endl;
	std::cout << "--- Menu ---" << std::endl;
	std::cout << "3. Vender unidad de un Producto" << std::endl;
	std::cout << "4. Eliminar Producto" << std::endl;
	std::cout << "5. Mostrar Inventario completo" << std::endl;
	std::cout << "6. Mostrar Valor Total del inventario" << std::endl;
	std::cout << "7. Salir" << std::endl;
	std::cout << "------------" << std::endl;
	std::cout << "Opción: " << std::endl;
	int opcion;
	std::cin >> opcion;
	
	if (std::cin.fail() {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return -1;
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return opcion;
}

int main()
{
	EIF201::Inventario tienda(3);

	bool ejecutando = true;

	while (ejecutando) {
		int opcion = mostrarMenu();

		switch (opcion)
		{
		case 1:
			std::string nombre, codigo;
			double precio;
			int stock;
			std::cout << "Nombre del producto: ";
			std::getline(std::cin, nombre);

			std::cout << "Codigo del producto: ";
			std::getline(std::cin, codigo);

			std::cout << "Stock del producto:  ";
			std::cin >> stock;

			std::cout << "Precio del producto:  ";
			std::cin >> precio;

			EIF201::Producto* nuevo = new EIF201::Producto(nombre, precio, stock, codigo);
			tienda.agregar(nuevo);
			break;

		}
		case 2: {
			std::string codigo;
			std::cout << "ingrese el codigo del producto que desea buscar: ";
			std::getline(std::cin, codigoBuscar);

			EIF201::Producto* encontrado = tienda.buscarPorCodigo(codigoBuscar);

			if (encontrado != nullptr) {
				std::cout << "producto encontrado " << std::endl;
				encontrado->mostrar();
			}
			else {
				std::cout << "producto no encontrado " << std::endl;
			}
		}
		default:
			break;
	}
}