/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa 1:  Reemplazar todas las apariciones de 'a' por 'e'
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[50];
    
    printf("Introduce una cadena de hasta 50 caracteres: ");
    fgets(cadena, 50, stdin);
    
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == 'a') {
            cadena[i] = 'e';
        }
    }

    printf("Cadena modificada: %s\n", cadena);

    return 0;
}
