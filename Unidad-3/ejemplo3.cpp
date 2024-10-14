/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que compara dos cadenas de texto.
*/

#include <stdio.h>
#include <string.h>  // Para funciones de manipulación de cadenas

int main() {
    char cad1[40], cad2[40];
    int n = 0;

    printf("\nTeclee una frase: ");
    fgets(cad1, sizeof(cad1), stdin);

    // Eliminar el salto de línea al final si existe
    size_t len1 = strlen(cad1);
    if (len1 > 0 && cad1[len1 - 1] == '\n') {
        cad1[len1 - 1] = '\0';
    }

    printf("\nTeclee una segunda frase: ");
    fgets(cad2, sizeof(cad2), stdin);

    // Eliminar el salto de línea al final si existe
    size_t len2 = strlen(cad2);
    if (len2 > 0 && cad2[len2 - 1] == '\n') {
        cad2[len2 - 1] = '\0';
    }

    // Comparar las dos cadenas
    n = strcmp(cad1, cad2);

    // Comprobar el resultado de la comparación
    if (n == 0) {
        puts("Son iguales");
    } else if (n < 0) {
        puts("La primera es menor que la segunda");
    } else {
        puts("La primera es mayor que la segunda");
    }

    return 0;
}