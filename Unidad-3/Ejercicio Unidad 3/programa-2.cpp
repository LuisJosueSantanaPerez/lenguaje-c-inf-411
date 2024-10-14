/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa 2: Cambiar mayúsculas a minúsculas y viceversa
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char cadena[100];

    printf("Introduce una cadena: ");
    fgets(cadena, 100, stdin);

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (islower(cadena[i])) {
            cadena[i] = toupper(cadena[i]);
        } else if (isupper(cadena[i])) {
            cadena[i] = tolower(cadena[i]);
        }
    }

    printf("Cadena modificada: %s\n", cadena);

    return 0;
}
