/*
* Curso: INF-411
* Nombre: Luis Josue Santana Perez
* Matricula: 100218446
* Fecha: 29/8/2024
* Programa que calcula la sumatoria de y = sumatoria de r = 1 hasta 20 (X ^ 3 + 1) donde x = x + 2
*/
#include <stdio.h>
#include <math.h>

int main() {
    int r = 0; 
    float x = 0, y = 0, exp = 0;

    printf("Programa de y = sumatoria de r = 1 hasta 20 (X ^ 3 + 1) donde x=x + 2\n");

    for(r = 1; r <= 20; r++) {
        x = x + 2;
        exp = pow(x, 3) + 1;
        y = y + exp;
    }

    printf("\n\n Y =  %.1f\n", y);
}