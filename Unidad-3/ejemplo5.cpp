/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que busca un caracter en una cadena de texto.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char *p, caracter, cadena[80];
    int lugar;

    printf("\nTeclee un caracter: ");
    caracter = getchar();
    getchar();

    printf("\n\nTeclee una frase: ");
    fgets(cadena, sizeof(cadena), stdin);

    size_t len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }

    p = strchr(cadena, caracter);
    if (!p) {
        printf("\nNo está el caracter %c en la frase", caracter);
    } else {
        lugar = p - cadena;
        printf("\nEl caracter %c ocupa el lugar %d de la frase", caracter, lugar);
    }

    return 0;
}

