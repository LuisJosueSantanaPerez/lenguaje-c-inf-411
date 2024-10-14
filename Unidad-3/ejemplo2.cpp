/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que lee una cadena de texto y la copia a otra cadena.
*/

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

char cad1[10], cad2[10];

int main() {

    system("clear");
    
    printf("Teclee una cadena (máximo 9 caracteres): ");
    
    
    fgets(cad2, sizeof(cad2), stdin);
    
    
    size_t len = strlen(cad2);
    if (len > 0 && cad2[len - 1] == '\n') {
        cad2[len - 1] = '\0';
    }
    
    
    strcpy(cad1, cad2);
    
    
    printf("La cadena 1 es %s, y la cadena 2 es %s\n", cad1, cad2);
    
    
    getchar();
    
    return 0;
}