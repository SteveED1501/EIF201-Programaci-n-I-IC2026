#include <iostream>
using namespace std;
int main() {
	double temperatura = 36.6;
	double* pTemp = &temperatura;
	cout << "Temperatura: "  << temperatura << endl;
	cout << "Doble vía puntero :"  << *pTemp * 2 << endl;
	*pTemp = 38.0;
	cout << "Nueva Temperatura :" << temperatura << endl;
	return 0;
}
