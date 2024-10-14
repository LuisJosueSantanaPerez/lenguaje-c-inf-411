/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que invierte una cadena de texto.
*/

#include <stdio.h>
#include <string.h>

void invertir_cadena(char cad[]);

int main() {
    char cad[80];

    printf("\nTeclee una frase: ");
    fgets(cad, sizeof(cad), stdin);

    size_t len = strlen(cad);
    if (len > 0 && cad[len - 1] == '\n') {
        cad[len - 1] = '\0';
    }

    invertir_cadena(cad);
    printf("\nFrase invertida: %s\n", cad);

    return 0;
}

void invertir_cadena(char cad[]) {
    int len = strlen(cad);
    for (int i = 0; i < len / 2; i++) {
        char temp = cad[i];
        cad[i] = cad[len - i - 1];
        cad[len - i - 1] = temp;
    }
}

