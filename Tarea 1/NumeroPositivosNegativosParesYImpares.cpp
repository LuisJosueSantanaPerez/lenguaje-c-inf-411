/*
* Curso: INF-411
* Nombre: Luis Josue Santana Perez
* Matricula: 100218446
* Fecha: 29/8/2024
* Programa que calcula la cantidad de numeros positivos, negativos, pares e impares del 1 al 1000
*/

#include <stdio.h>

int main() {
    int positivos = 0;
    int negativos = 0;
    int pares = 0;
    int impares = 0;
    int i = 1;

    do {
        if (i > 0) {
            positivos++;
        } else if (i < 0) {
            negativos++;
        }

        if (i % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        i++;
    } while (i <= 1000);

    printf("Cantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);
    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);

    return 0;
}