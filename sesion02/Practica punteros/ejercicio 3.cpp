#include <iostream>
using namespace std;

void imprimirTodo(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
        cout << endl;
    }
}

    int EncontrarMaximo(int* arr, int n) {
        int máximo = *arr;
        for (int i = 1; i < n; i++) {
            if (*(arr + i) > máximo) {
                máximo = *(arr + i);
            }
        }
        return máximo;
    }

    void invertir(int* arr, int n) {
        int* inicio = arr;
        int* fin = arr + (n -1);

        while (inicio < fin) {
            int temp = *inicio;
            *inicio = *fin;
            *fin = temp;
            inicio++;
            fin--;
        }
    }
  
    int main() {
        int datos[6] = { 10, 30, 50, 20, 40, 60 };
        imprimirTodo(datos, 6);
        cout << EncontrarMaximo(datos, 6) << endl;
        invertir(datos, 6);
        imprimirTodo(datos, 6);
        return 0;
    }
