/*
 * Curso: INF-411
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Fecha: 6/9/2024
 * Programa que imprima desde 1 hasta el numero leido haga sumatoria de los numeros leidos
 * y que imprima la suma de los pares y la suma de los impares.
 */

#include <stdio.h>

int main()
{
    int numero = 0;
    int sumaPares = 0;
    int sumaImpares = 0;

    while (true)
    {
        printf("Ingrese un numero: ");
        if (scanf("%d", &numero) == 1)
        {
            break;
        }
        else
        {
            printf("Error al leer el numero. Por favor, intente de nuevo.\n");
            while (getchar() != '\n');
        }
    }

    for (int i = 1; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            sumaPares += i;
        }
        else
        {
            sumaImpares += i;
        }
    }

    printf("La suma de los numeros pares es: %d\n", sumaPares);
    printf("La suma de los numeros impares es: %d\n", sumaImpares);

    return 0;
}
