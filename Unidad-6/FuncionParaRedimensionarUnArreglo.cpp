/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Función que redimensiona un arreglo.
 * Fecha: 29/10/2024
*/

#include <iostream>
using namespace std;

int* redimensionaArreglo(int* arreglo, int size, int nuevoSize) {
    int* nuevoArreglo = new int[nuevoSize];
    for (int i = 0; i < nuevoSize; i++) {
        if (i < size) {
            nuevoArreglo[i] = arreglo[i];
        } else {
            nuevoArreglo[i] = 0;
        }
    }
    delete[] arreglo;
    return nuevoArreglo;
}

int main() {
    int size, nuevoSize;
    cout << "Introduce el tamaño del arreglo: ";
    cin >> size;

    int* arreglo = new int[size];
    cout << "Introduce los elementos del arreglo:\n";
    for (int i = 0; i < size; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "Introduce el nuevo tamaño del arreglo: ";
    cin >> nuevoSize;

    arreglo = redimensionaArreglo(arreglo, size, nuevoSize);

    cout << "Arreglo redimensionado:\n";
    for (int i = 0; i < nuevoSize; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    delete[] arreglo;
    return 0;
}
