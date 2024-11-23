/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Tabla de multiplicar
 * Fecha: 10/11/2024
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número para ver su tabla de multiplicar: ";
    cin >> numero;

    for (int i = 1; i <= 12; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
