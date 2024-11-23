/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Operaciones con arreglos: Ordenar un arreglo
 * Fecha: 10/11/2024
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[] = {5, 3, 8, 1, 9};
    sort(numeros, numeros + 5);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
