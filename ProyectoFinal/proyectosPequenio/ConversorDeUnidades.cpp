#include <iostream>
using namespace std;

void convertirTemperatura() {
    double celsius;
    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << "°C equivalen a " << fahrenheit << "°F" << endl;
}

void convertirDistancia() {
    double kilometros;
    cout << "Ingrese la distancia en kilómetros: ";
    cin >> kilometros;
    double millas = kilometros * 0.621371;
    cout << kilometros << " km equivalen a " << millas << " millas" << endl;
}

void convertirPeso() {
    double kilogramos;
    cout << "Ingrese el peso en kilogramos: ";
    cin >> kilogramos;
    double libras = kilogramos * 2.20462;
    cout << kilogramos << " kg equivalen a " << libras << " libras" << endl;
}

int main() {
    int opcion;
    cout << "Seleccione la conversión que desea realizar:" << endl;
    cout << "1. Temperatura (Celsius a Fahrenheit)" << endl;
    cout << "2. Distancia (Kilómetros a Millas)" << endl;
    cout << "3. Peso (Kilogramos a Libras)" << endl;
    cout << "Opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            convertirTemperatura();
            break;
        case 2:
            convertirDistancia();
            break;
        case 3:
            convertirPeso();
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}
