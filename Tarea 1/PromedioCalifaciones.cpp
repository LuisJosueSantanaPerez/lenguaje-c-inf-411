/*
* Curso: INF-411
* Nombre: Luis Josue Santana Perez
* Matricula: 100218446
* Fecha: 24/8/2024
* Programa que calcula el promedio de las calificaciones de 10 estudiantes
*/
#include <stdio.h>

#include <stdio.h>
#include <ctype.h>

int main() {
    const int NUM_CALIFICACIONES = 10;
    float calificaciones[NUM_CALIFICACIONES];
    float sumaCalificaciones;
    float promedioCalificaciones;
    int respuesta;

    do {
        sumaCalificaciones = 0;
        printf("Ingrese las calificaciones de los estudiantes:\n");
        for(int i = 0; i < NUM_CALIFICACIONES; i++) {
            int validInput = 0;
            while (!validInput) {
                printf("Calificacion #%d: ", i + 1);
                if (scanf("%f", &calificaciones[i]) != 1) {
                    printf("Entrada invalida. Por favor, ingrese un numero.\n");
                    while (getchar() != '\n');
                } else {
                    validInput = 1;
                }
            }
            sumaCalificaciones += calificaciones[i];
        }

        promedioCalificaciones = sumaCalificaciones / NUM_CALIFICACIONES;
        printf("El promedio de las calificaciones es: %.2f\n", promedioCalificaciones);

        printf("Desea ingresar otra vez las calificaciones? (1 = Si, 0 = No): ");
        scanf("%d", &respuesta);
    } while(respuesta == 1);

    return 0;
}