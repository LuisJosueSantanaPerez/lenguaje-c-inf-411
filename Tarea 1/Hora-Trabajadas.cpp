#include <stdio.h>

int main() {

    const float PRECIO_HORA_REGULAR = 35.00;
    const float PRECIO_HORA_EXTRA = 42.50;
    const int HORAS_REGULARES_MAX = 40;

    int horasTrabajadas = 0;
    float sueldoNeto = 0.0;

    printf("Ingrese las horas trabajadas: ");
    scanf("%d", &horasTrabajadas);
    
    if(horasTrabajadas <= HORAS_REGULARES_MAX) {
        sueldoNeto = horasTrabajadas * PRECIO_HORA_REGULAR;
    } else {
        int horasExtras = horasTrabajadas - HORAS_REGULARES_MAX;
        sueldoNeto = (HORAS_REGULARES_MAX * PRECIO_HORA_REGULAR) + (horasExtras * PRECIO_HORA_EXTRA);
    }

    printf("El sueldo neto es: $RD %.2f\n", sueldoNeto);

    return 0;
}