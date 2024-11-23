/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Crear variables de diferentes tipos y realizar operaciones básicas
 * Fecha: 10/11/2024
*/

#include <iostream>
using namespace std;

int main() {
    int entero = 10;
    float flotante = 5.5;
    string cadena = "Hola, ";

    int suma = entero + static_cast<int>(flotante);
    string concatenacion = cadena + "Mundo!";

    cout << "Suma: " << suma << endl;
    cout << "Concatenación: " << concatenacion << endl;

    return 0;
}
