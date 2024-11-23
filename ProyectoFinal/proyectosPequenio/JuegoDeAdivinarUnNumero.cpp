#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    int intento;
    int intentos = 0;

    cout << "¡Bienvenido al juego de adivinar el número!" << endl;
    cout << "He pensado en un número entre 1 y 100." << endl;

    do {
        cout << "Ingrese su intento: ";
        cin >> intento;
        intentos++;

        if (intento > numeroSecreto)
            cout << "El número secreto es menor." << endl;
        else if (intento < numeroSecreto)
            cout << "El número secreto es mayor." << endl;
        else
            cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << endl;

    } while (intento != numeroSecreto);

    return 0;
}
