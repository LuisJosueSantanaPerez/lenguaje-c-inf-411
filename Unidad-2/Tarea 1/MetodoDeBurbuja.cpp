/*
 * Curso: INF-411
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Fecha: 15/9/2024
 * programa que ordena un vector por el metodo de burbuja
 */

#include <stdio.h>

int main() {
    int vector[10] = {5, 2, 9, 1, 5, 6, 7, 3, 8, 4}; 
    int n = 10;
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }

    // Mostrar el vector ordenado
    printf("Vector ordenado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}
