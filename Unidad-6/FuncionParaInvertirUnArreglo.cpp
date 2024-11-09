/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que invierte un arreglo.
 * Fecha: 29/10/2024
*/

#include <iostream>
using namespace std;

int* copiaInvertida(int* arreglo, int size) {
    int* nuevoArreglo = new int[size];
    for (int i = 0; i < size; i++) {
        *(nuevoArreglo + i) = *(arreglo + (size - i - 1));
    }
    return nuevoArreglo;
}

int main() {
    int size;
    cout << "Introduce la cantidad de elementos del arreglo: ";
    cin >> size;

    int* arreglo = new int[size];
    cout << "Introduce los elementos del arreglo:\n";
    for (int i = 0; i < size; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    int* arregloInvertido = copiaInvertida(arreglo, size);

    cout << "Arreglo original:\n";
    for (int i = 0; i < size; i++) {
        cout << arreglo[i] << " ";
    }
    cout << "\nArreglo invertido:\n";
    for (int i = 0; i < size; i++) {
        cout << arregloInvertido[i] << " ";
    }
    cout << endl;

    delete[] arreglo;
    delete[] arregloInvertido;
    return 0;
}
