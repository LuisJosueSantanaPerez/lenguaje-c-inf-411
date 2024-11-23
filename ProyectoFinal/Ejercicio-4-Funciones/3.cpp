/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Conversión de Celsius a Fahrenheit
 * Fecha: 10/11/2024
*/

#include <iostream>
using namespace std;

double celsius_a_fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

int main() {
    double celsius;
    cout << "Ingresa la temperatura en Celsius: ";
    cin >> celsius;

    cout << "La temperatura en Fahrenheit es: " << celsius_a_fahrenheit(celsius) << endl;
    return 0;
}
