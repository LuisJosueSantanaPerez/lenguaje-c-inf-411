/*
 * Curso: INF-411
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Fecha: 6/9/2024
 * Programa que calcula la taza del dia de pesos Dominicano a Dollar
 */

#include <stdio.h>

int main() {
    const float TAZA_DEL_DOLLAR_HOY = 59.90;
    const float TAZA_DEL_EURO = 68.50;
    float monedas = 0.0;
    int menu = 0;

    do {
        // Bucle para asegurar entrada válida de la cantidad de dinero
        while (true) {
            printf("Ingrese la cantidad de pesos Dominicanos al convertir: ");
            if (scanf("%f", &monedas) == 1) {
                break; // Salir del bucle si la entrada es válida
            } else {
                printf("Error al leer la cantidad de dinero. Por favor, intente de nuevo.\n");
                while (getchar() != '\n'); // Limpiar el buffer de entrada
            }
        }

        // Bucle para asegurar entrada válida de la opción del menú
        while (true) {
            printf("\nIngrese la moneda a convertir:\n");
            printf("0. Salir\n");
            printf("1. Dollar\n");
            printf("2. Euro\n");
            printf("Opcion: ");
            if (scanf("%d", &menu) == 1 && (menu >= 0 && menu <= 2)) {
                break; // Salir del bucle si la entrada es válida y la opción es 0, 1 o 2
            } else {
                printf("Error al leer la opcion. Por favor, intente de nuevo.\n");
                while (getchar() != '\n'); // Limpiar el buffer de entrada
            }
        }

        switch (menu) {
            case 0:
                return 0; // Salir del programa
            case 1:
                printf("La cantidad de dinero en Dollar es: $ %.2f\n", monedas / TAZA_DEL_DOLLAR_HOY);
                break;
            case 2:
                printf("La cantidad de dinero en Euro es: € %.2f\n", monedas / TAZA_DEL_EURO);
                break;
        }
    } while (true);

    return 0;
}