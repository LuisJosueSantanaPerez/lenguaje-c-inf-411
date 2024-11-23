/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Buscar
 * Fecha: 10/11/2024
*/

#include <iostream>
using namespace std;

int main() {
    int numeros[] = {5, 3, 8, 1, 9};
    int numero_a_buscar;
    cout << "Ingresa el número a buscar: ";
    cin >> numero_a_buscar;

    bool encontrado = false;
    for (int i = 0; i < 5; i++) {
        if (numeros[i] == numero_a_buscar) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "El número está en el arreglo." << endl;
    } else {
        cout << "El número no está en el arreglo." << endl;
    }

    return 0;
}
