/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa 2: Insertar un asterisco '*' en el centro de la cadena
*/

#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char cadena[MAX];
    int longitud, mitad;

    printf("Introduce una cadena de hasta 50 caracteres: ");
    fgets(cadena, MAX, stdin);

    cadena[strcspn(cadena, "\n")] = '\0';

    longitud = strlen(cadena);
    mitad = longitud / 2;

    for (int i = longitud; i >= mitad; i--) {
        cadena[i+1] = cadena[i];
    }
    cadena[mitad] = '*';

    printf("Cadena modificada: %s\n", cadena);

    return 0;
}
