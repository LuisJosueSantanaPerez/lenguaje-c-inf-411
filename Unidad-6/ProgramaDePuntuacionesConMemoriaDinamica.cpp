/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que lee puntuaciones, las ordena y calcula el promedio.
 * Fecha: 29/10/2024
*/

#include <iostream>
using namespace std;

double* creaArreglo(int n) {
    return new double[n];
}

void leePuntuaciones(double* arreglo, int n) {
    cout << "Introduce las puntuaciones:\n";
    for (int i = 0; i < n; i++) {
        cout << "Puntuación " << i + 1 << ": ";
        cin >> arreglo[i];
    }
}

void ordena(double* arreglo, int n) {
    bool swap;
    double temp;
    do {
        swap = false;
        for (int i = 0; i < n - 1; i++) {
            if (arreglo[i] > arreglo[i + 1]) {
                temp = arreglo[i];
                arreglo[i] = arreglo[i + 1];
                arreglo[i + 1] = temp;
                swap = true;
            }
        }
    } while (swap);
}

double calculaPromedio(double* arreglo, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    return suma / n;
}

int main() {
    int n;
    cout << "Introduce el número de puntuaciones: ";
    cin >> n;

    double* puntuaciones = creaArreglo(n);
    leePuntuaciones(puntuaciones, n);
    ordena(puntuaciones, n);

    cout << "Puntuaciones ordenadas:\n";
    for (int i = 0; i < n; i++) {
        cout << puntuaciones[i] << " ";
    }
    cout << "\nPuntuación promedio: " << calculaPromedio(puntuaciones, n) << endl;

    delete[] puntuaciones;
    return 0;
}
