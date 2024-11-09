/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que calcula la moda de un arreglo.
 * Fecha: 29/10/2024
*/

#include <iostream>
using namespace std;

int calculaModa(int* arreglo, int size) {
    int moda = -1;
    int maxFrecuencia = 0;

    for (int i = 0; i < size; i++) {
        int frecuencia = 0;
        for (int j = 0; j < size; j++) {
            if (*(arreglo + j) == *(arreglo + i)) {
                frecuencia++;
            }
        }
        if (frecuencia > maxFrecuencia) {
            maxFrecuencia = frecuencia;
            moda = *(arreglo + i);
        }
    }

    if (maxFrecuencia == 1) {
        return -1;
    }
    return moda;
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

    int moda = calculaModa(arreglo, size);
    if (moda == -1) {
        cout << "El arreglo no tiene moda.\n";
    } else {
        cout << "La moda del arreglo es: " << moda << endl;
    }

    delete[] arreglo;
    return 0;
}
