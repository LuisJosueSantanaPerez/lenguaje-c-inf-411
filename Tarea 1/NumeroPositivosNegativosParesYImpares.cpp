/*
* Curso: INF-411
* Nombre: Luis Josue Santana Perez
* Matricula: 100218446
* Fecha: 29/8/2024
* Programa que calcula la cantidad de numeros positivos, negativos, pares e impares
*/

#include<stdio.h>

int main(){
    int numero = 0;
    int positivos = 0;
    int negativos = 0;
    int pares = 0;
    int impares = 0;

    int i = 0;
    do {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);

        if(numero > 0){
            positivos++;
        } else if(numero < 0){
            negativos++;
        }

        if(numero % 2 == 0){
            pares++;
        } else {
            impares++;
        }

        i++;
    } while(i < 10);

    printf("Numeros positivos: %d\n", positivos);
    printf("Numeros negativos: %d\n", negativos);
    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);

    return 0;
}