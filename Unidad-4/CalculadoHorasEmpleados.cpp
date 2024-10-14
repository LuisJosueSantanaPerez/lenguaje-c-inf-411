/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa 2: Calculadora de horas trabajadas
 * Fecha: 14/10/2024
*/

#include <stdio.h>

#define NUM_EMPLEADOS 7

int main() {
    // Arreglos para almacenar la información de los empleados
    long empId[NUM_EMPLEADOS] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int horas[NUM_EMPLEADOS];           // Arreglo para las horas trabajadas
    double tarifaPorHora[NUM_EMPLEADOS]; // Arreglo para la tarifa por hora
    double salarioBruto[NUM_EMPLEADOS];  // Arreglo para el salario bruto

    // Entrada de datos para cada empleado
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        printf("Empleado ID: %ld\n", empId[i]);

        // Solicitar las horas trabajadas con validación
        do {
            printf("Ingrese las horas trabajadas: ");
            scanf("%d", &horas[i]);
            if (horas[i] < 0) {
                printf("Error: las horas trabajadas no pueden ser negativas.\n");
            }
        } while (horas[i] < 0);

        // Solicitar la tarifa por hora con validación
        do {
            printf("Ingrese la tarifa por hora (mínimo 50.00): ");
            scanf("%lf", &tarifaPorHora[i]);
            if (tarifaPorHora[i] < 50.00) {
                printf("Error: la tarifa por hora debe ser al menos 50.00.\n");
            }
        } while (tarifaPorHora[i] < 50.00);

        // Calcular el salario bruto
        salarioBruto[i] = horas[i] * tarifaPorHora[i];
        printf("----------------------------\n");
    }

    // Desplegar el número de identificación y el salario bruto de cada empleado
    printf("\nSalarios Brutos:\n");
    printf("ID del Empleado\tSalario Bruto\n");
    for (int i = 0; i < NUM_EMPLEADOS; i++) {
        printf("%ld\t\t%.2f\n", empId[i], salarioBruto[i]);
    }

    return 0;
}
