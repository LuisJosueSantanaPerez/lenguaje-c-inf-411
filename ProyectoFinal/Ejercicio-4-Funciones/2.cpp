/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Cálculos con funciones: Área de un círculo
 * Fecha: 10/11/2024
*/

#include <iostream>
#include <cmath>
using namespace std;

double area_circulo(double radio) {
    return M_PI * pow(radio, 2);
}

int main() {
    double radio;
    cout << "Ingresa el radio del círculo: ";
    cin >> radio;

    cout << "El área del círculo es: " << area_circulo(radio) << endl;
    return 0;
}
