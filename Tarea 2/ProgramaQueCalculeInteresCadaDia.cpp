/*
 * Curso: INF-411
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Fecha: 6/9/2024
 * Programa que dado el monto de un préstamo y la tasa a la cual fue prestado, calcule el interés diario que genera, y el interés mensual generado en un mes de 31 días. 
 */

#include <stdio.h>

int main() {
    double montoPrestamo = 0,
    tasaAnual = 0, 
    interesDiario = 0, 
    interesMensual = 0;

    while (true) {
        printf("Ingrese el monto del prestamo: ");
        if (scanf("%lf", &montoPrestamo) == 1 && montoPrestamo > 0) {
            break;
        } else {
            printf("Error: Ingrese un monto válido mayor que 0.\n");
            while (getchar() != '\n');
        }
    }

    while (true) {
        printf("Ingrese la tasa de interes anual (en porcentaje): ");
        if (scanf("%lf", &tasaAnual) == 1 && tasaAnual > 0) {
            break;
        } else {
            printf("Error: Ingrese una tasa de interés válida mayor que 0.\n");
            while (getchar() != '\n');
        }
    }

    double tasaDiaria = tasaAnual / 100 / 365;
    interesDiario = montoPrestamo * tasaDiaria;
    interesMensual = interesDiario * 31;

    printf("Interes diario generado: %.2lf\n", interesDiario);
    printf("Interes mensual generado (31 dias): %.2lf\n", interesMensual);

    return 0;
}