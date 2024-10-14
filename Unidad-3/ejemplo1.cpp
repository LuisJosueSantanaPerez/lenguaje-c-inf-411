/*
 * INFO
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que lee el nombre de una persona y lo imprime.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void imprime_datos(char n[30]);

int main() {
    char nombre[30];
    
    
    system("clear");
    
    printf("Teclee los datos de la persona...\n");
    
    printf("Nombre: ");
    
    fgets(nombre, sizeof(nombre), stdin);
    
    
    size_t len = strlen(nombre);
    if (len > 0 && nombre[len - 1] == '\n') {
        nombre[len - 1] = '\0';
    }
    
    imprime_datos(nombre);
    
    getchar();
    return 0;
}

void imprime_datos(char n[30]) {
    printf("\nNombre: %s\n", n);
}