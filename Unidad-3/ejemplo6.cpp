/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que lee una cadena de texto y muestra su longitud.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cad[30];

    printf("\nTeclee una frase: ");
    fgets(cad, sizeof(cad), stdin);

    size_t len = strlen(cad);
    if (len > 0 && cad[len - 1] == '\n') {
        cad[len - 1] = '\0';
    }

    printf("\nLa frase <<<%s>>> tiene %d caracteres", cad, (int)strlen(cad));

    return 0;
}
