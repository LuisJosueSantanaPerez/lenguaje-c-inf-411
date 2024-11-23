/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Calcular el promedio
 * Fecha: 10/11/2024
*/
#include <iostream>
using namespace std;

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma += numeros[i];
    }

    double promedio = static_cast<double>(suma) / 5;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
