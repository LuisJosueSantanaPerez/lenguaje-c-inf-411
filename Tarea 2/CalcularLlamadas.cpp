/*
 * Curso: INF-411
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Fecha: 6/9/2024
 * Programa  que lea los minutos de una llamada entero
 * y el tipo de llamada (local o internacional) y calcule el monto a cobrar.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    const float COSTO_LLAMADA_LOCAL = 0.5;
    const float COSTO_LLAMADA_INTERNACIONAL = 1.25;
    int menuTipoDeLlamada = 0;
    char tipoDeLlamada[30];
    int minutosLladamas = 0;
    float montosACobrarLlamadas = 0.0;

    do
    {
        while (true)
        {
            printf("Ingrese los minutos para calcular el monto a cobrar:");
            if (scanf("%d", &minutosLladamas) == 1)
            {
                break;
            }
            else
            {
                printf("Error al leer la cantidad de minutos. Por favor, intente de nuevo.\n");
                while (getchar() != '\n')
                    ;
            }
        }

        while (true)
        {
            printf("Ingrese el tipo de llamada a calcular\n");
            printf("0. Salir\n");
            printf("1. Llamadas locales\n");
            printf("2. Llamadas internacionales\n");
            printf("Opcion: ");
            if (scanf("%d", &menuTipoDeLlamada) == 1 && (menuTipoDeLlamada >= 0 && menuTipoDeLlamada <= 2))
            {
                break;
            }
            else
            {
                printf("Error al leer la opcion. Por favor, intente de nuevo.\n");
                while (getchar() != '\n')
                    ;
            }
        }
        switch (menuTipoDeLlamada)
        {
        case 0:
            return 0;
            break;
        case 1:
            strcpy(tipoDeLlamada, "Llamadas locales");
            montosACobrarLlamadas = (COSTO_LLAMADA_LOCAL * minutosLladamas);
            break;

        case 2:
            strcpy(tipoDeLlamada, "Llamadas internacionales");
            montosACobrarLlamadas = (COSTO_LLAMADA_INTERNACIONAL * minutosLladamas);
            break;
        }

        printf("El monto a cobrar por %s es: RD$ %.2f\n", tipoDeLlamada, montosACobrarLlamadas);
    } while (true);

    return 0;
}