#include <stdio.h>

int main() {
    int n = 5;
    float lista[] = {3, -2, 12, 4.4, 3.5};
    int cont;
    float media, d, suma = 0;

    // Calcular la media y mostrarla
    for (cont = 0; cont < n; ++cont) {
        suma += lista[cont];
    }
    media = suma / n;
    printf("\nLa media es %5.2f\n\n", media);

    // Calcular y mostrar las desviaciones respecto de la media
    for (cont = 0; cont < n; ++cont) {
        d = lista[cont] - media;
        printf("i = %d x = %5.2f d = %5.2f\n", cont + 1, lista[cont], d);
    }

    return 0;
}
