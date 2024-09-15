/*
 * Curso: INF-411
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Fecha: 6/9/2024
 * Hacer un programa que lea 5 números y que imprima la suma de los números leídos elevados a la 3era potencia.
 */

#include <stdio.h>

int main(){
    int numero = 0;
    int suma = 0;

    for (int i = 0; i < 5; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        suma += numero * numero * numero;
    }

    printf("La suma de los numeros leidos elevados a la 3era potencia es: %d\n", suma);

    return 0;
}