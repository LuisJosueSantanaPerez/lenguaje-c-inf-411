/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Determinar si un número es par o impar, positivo o negativo
 * Fecha: 10/11/2024
*/


#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else if (numero < 0) {
        cout << "El número es negativo." << endl;
    } else {
        cout << "El número es cero." << endl;
    }

    return 0;
}
