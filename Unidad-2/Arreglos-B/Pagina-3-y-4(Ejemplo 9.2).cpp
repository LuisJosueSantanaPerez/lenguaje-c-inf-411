
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    const int TAMANO = 80;
    char letras[TAMANO];
    int cont;

    cout << "Ingrese una línea de texto: ";
    for (cont = 0; cont < TAMANO; ++cont) {
        letras[cont] = getchar();
        if (letras[cont] == '\n') break;
    }

    cout << "Texto en mayúsculas: ";
    for (int i = 0; i < cont; ++i) {
        putchar(toupper(letras[i]));
    }
    return 0;
}
