/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Factorial de un número
 * Fecha: 10/11/2024
*/

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número para calcular su factorial: ";
    cin >> numero;

    int factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    cout << "El factorial es: " << factorial << endl;
    return 0;
}
