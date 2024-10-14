/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa 3: Cantidad de comida ingerida por cada mono
 * Fecha: 14/10/2024
*/

#include <stdio.h>

#define MONOS 3
#define DIAS 7

int main() {
    // Declaración del arreglo bidimensional
    double comida[MONOS][DIAS];
    double totalComida = 0.0, promedio;
    double menorComida, mayorComida;

    // Entrada de datos para la comida ingerida por cada mono durante la semana
    for (int i = 0; i < MONOS; i++) {
        printf("Ingrese la cantidad de libras de comida ingerida por el Mono %d en cada día de la semana:\n", i + 1);
        for (int j = 0; j < DIAS; j++) {
            do {
                printf("Día %d: ", j + 1);
                scanf("%lf", &comida[i][j]);

                if (comida[i][j] < 0) {
                    printf("Error: la cantidad de comida no puede ser negativa. Intente de nuevo.\n");
                }
            } while (comida[i][j] < 0); // Validación de entrada

            totalComida += comida[i][j]; // Suma la comida total para el cálculo del promedio
        }
        printf("----------------------------\n");
    }

    // Calcular el promedio de comida ingerida por día para toda la familia de monos
    promedio = totalComida / (MONOS * DIAS);

    // Inicializar las variables menorComida y mayorComida con el primer valor del arreglo
    menorComida = comida[0][0];
    mayorComida = comida[0][0];

    // Encontrar la cantidad menor y mayor de comida ingerida en la semana
    for (int i = 0; i < MONOS; i++) {
        for (int j = 0; j < DIAS; j++) {
            if (comida[i][j] < menorComida) {
                menorComida = comida[i][j];
            }
            if (comida[i][j] > mayorComida) {
                mayorComida = comida[i][j];
            }
        }
    }

    // Desplegar el reporte
    printf("\n--- Reporte de Consumo de Comida ---\n");
    printf("Promedio de libras de comida ingerida por día por los tres monos: %.2f libras\n", promedio);
    printf("La menor cantidad de comida ingerida durante la semana: %.2f libras\n", menorComida);
    printf("La mayor cantidad de comida ingerida durante la semana: %.2f libras\n", mayorComida);

    return 0;
}
