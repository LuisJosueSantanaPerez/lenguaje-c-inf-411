/*
 * Curso: INF-411
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Fecha: 15/9/2024
 * Hacer un programa que calcula la moda en un vector de 10 posiciones lleno
 */

#include <stdio.h>
int main() {
    int vector[10] = {4, 5, 6, 7, 4, 5, 4, 6, 8, 4};
    int k, tem = 0, m;
    
    for (int i = 0; i < 10; i++) {
        k = 0;
        for (int j = 0; j < 10; j++) {
            if (vector[i] == vector[j]) {
                k++;
            }
        }
        
        if (k > tem) {
            tem = k; 
            m = vector[i];
        }
    }

    printf("La moda es: %d (repetido %d veces)\n", m, tem);

    return 0;
}