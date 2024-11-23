/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Convertir un tipo de dato a otro
 * Fecha: 10/11/2024
*/

#include <iostream>
using namespace std;

int main() {
    float flotante = 7.8;
    string cadena_numero = "123";

    int entero_de_flotante = static_cast<int>(flotante);
    int entero_de_cadena = stoi(cadena_numero);

    cout << "Entero de flotante: " << entero_de_flotante << endl;
    cout << "Entero de cadena: " << entero_de_cadena << endl;

    return 0;
}
