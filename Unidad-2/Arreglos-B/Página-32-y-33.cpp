#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reordenar(int n, char x[][12]);

int main() {
    int i, n = 0;
    char x[10][12];

    // Leer la lista de cadenas de caracteres
    printf("Introducir debajo cada cadena en una línea\n\n");
    printf("Escribir 'FIN' para terminar\n\n");

    do {
        printf("cadena %d: ", n + 1);
        scanf("%s", x[n]);
    } while (strcmp(x[n++], "FIN") != 0);

    // Ajustar el valor de n (ya que 'FIN' no debe contarse)
    n--;

    // Reordenar la lista de cadenas de caracteres
    reordenar(n, x);

    // Escribir la lista reordenada de cadenas de caracteres
    printf("\n\nLista reordenada de cadenas:\n");
    for (i = 0; i < n; ++i) {
        printf("cadena %d: %s\n", i + 1, x[i]);
    }

    return 0;
}

/* Reordenar la lista de cadenas de caracteres */
void reordenar(int n, char x[][12]) {
    char temp[12];
    int i, elem;

    for (elem = 0; elem < n - 1; ++elem) {
        // Encontrar la menor de las cadenas restantes
        for (i = elem + 1; i < n; ++i) {
            if (strcmp(x[elem], x[i]) > 0) {
                // Intercambiar las dos cadenas
                strcpy(temp, x[elem]);
                strcpy(x[elem], x[i]);
                strcpy(x[i], temp);
            }
        }
    }
}
