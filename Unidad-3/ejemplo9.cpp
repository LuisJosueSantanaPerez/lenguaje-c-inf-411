/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que convierte una cadena de texto a mayúsculas si está en minúsculas y viceversa.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];
    int contador = 0;
    register int i;
    
    // Pedir la cadena de caracteres
    printf("\nTeclee una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    // Eliminar el salto de línea que añade fgets
    size_t len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }

    // Recorrer la cadena y aplicar los cambios
    for (i = 0; i < len; i++) {
        if (isupper(cadena[i])) {
            cadena[i] = tolower(cadena[i]);
        } else if (islower(cadena[i])) {
            cadena[i] = toupper(cadena[i]);
        } else if (isdigit(cadena[i])) {
            contador++;
        }
    }

    // Mostrar el resultado
    printf("\nLa cadena modificada es: %s", cadena);
    printf("\nLa cadena tiene %d dígitos numéricos\n", contador);

    return 0;
}
