#include <stdio.h>
#define TAM 100

void reordenar(int n, int x[]);

int main() {
    int i, n, x[TAM];

    // Leer el valor de n
    printf("\n¿Cuántos números serán introducidos? ");
    scanf("%d", &n);
    printf("\n");

    // Leer la lista de números
    for (i = 0; i < n; ++i) {
        printf("i = %d x = ", i + 1);
        scanf("%d", &x[i]);
    }

    // Reordenar todos los elementos del array
    reordenar(n, x);

    // Escribir la lista reordenada de números
    printf("\n\nLista de números reordenada:\n\n");
    for (i = 0; i < n; ++i) {
        printf("i = %d x = %d\n", i + 1, x[i]);
    }

    return 0;
}

void reordenar(int n, int x[]) {
    int i, elem, temp;

    // Reordenar la lista de números usando selección
    for (elem = 0; elem < n - 1; ++elem) {
        for (i = elem + 1; i < n; ++i) {
            if (x[i] < x[elem]) {
                // Intercambiar los dos elementos
                temp = x[elem];
                x[elem] = x[i];
                x[i] = temp;
            }
        }
    }
}
