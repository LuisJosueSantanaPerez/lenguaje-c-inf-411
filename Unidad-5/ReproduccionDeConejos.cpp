/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que simula la reproducción de conejos de Fibonacci.
 * Fecha: 23/10/2024
*/
#include <stdio.h>

// Función que calcula el n-ésimo término de la sucesión de Fibonacci
long fibonacci(long n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long a = 0, b = 1, c;
    for (long i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int meses;
    printf("Ingrese el número de meses para simular la reproducción de conejos: ");
    scanf("%d", &meses);

    // Mostrar el resultado mes a mes
    for (int i = 0; i <= meses; i++) {
        long parejas = fibonacci(i);
        if (i == 0) {
            printf("Fin del mes %d: 0 conejos vivos. 0 parejas en total.\n", i);
        } else if (i == 1) {
            printf("Comienzo del mes %d: Nace una pareja de conejos (pareja A).\n", i);
            printf("Fin del mes %d: 1 pareja en total.\n", i);
        } else if (i == 2) {
            printf("Fin del mes %d: La pareja A da a luz a la pareja B. Se vuelve a cruzar la pareja A.\n", i);
            printf("1+1=2 parejas en total.\n");
        } else if (i == 3) {
            printf("Fin del mes %d: La pareja A da a luz a la pareja C. La pareja B cumple 1 mes. Se cruzan las parejas A y B.\n", i);
            printf("2+1=3 parejas en total.\n");
        } else if (i == 4) {
            printf("Fin del mes %d: Las parejas A y B dan a luz a D y E. La pareja C cumple 1 mes. Se cruzan las parejas A, B y C.\n", i);
            printf("3+2=5 parejas en total.\n");
        } else if (i == 5) {
            printf("Fin del mes %d: A, B y C dan a luz a F, G y H. D y E cumplen 1 mes. Se cruzan A, B, C, D y E.\n", i);
            printf("5+3=8 parejas en total.\n");
        } else if (i == 6) {
            printf("Fin del mes %d: A, B, C, D y E dan a luz a I, J, K, L y M. F, G y H cumplen 1 mes. Se cruzan A, B, C, D, E, F, G y H.\n", i);
            printf("8+5=13 parejas en total.\n");
        } else {
            printf("Fin del mes %d: %ld parejas de conejos en total.\n", i, parejas);
        }
    }

    return 0;
}