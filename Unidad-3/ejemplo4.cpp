/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que concatena dos cadenas de texto.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char cad1[80], cad2[80];

    printf("\nTeclee una frase: ");
    fgets(cad1, sizeof(cad1), stdin);

    size_t len1 = strlen(cad1);
    if (len1 > 0 && cad1[len1 - 1] == '\n') {
        cad1[len1 - 1] = '\0';
    }

    
    printf("\nTeclee otra frase: ");
    fgets(cad2, sizeof(cad2), stdin);


    size_t len2 = strlen(cad2);
    if (len2 > 0 && cad2[len2 - 1] == '\n') {
        cad2[len2 - 1] = '\0';
    }

    strcat(cad1, cad2);

    puts(cad1);

    return 0;
}