/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que convierte una cadena de texto a minúsculas.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convertir_minusculas(char cad[]);

int main() {
    char cad[40];

    printf("\nTeclee una frase en mayusculas: ");
    fgets(cad, sizeof(cad), stdin);

    size_t len = strlen(cad);
    if (len > 0 && cad[len - 1] == '\n') {
        cad[len - 1] = '\0';
    }

    convertir_minusculas(cad);
    printf("\nLa cadena en minusculas es: %s\n", cad);

    return 0;
}

void convertir_minusculas(char cad[]) {
    for (int i = 0; cad[i]; i++) {
        cad[i] = tolower(cad[i]);
    }
}