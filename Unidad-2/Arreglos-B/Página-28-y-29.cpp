#include <stdio.h>
#define MAXFIL 20
#define MAXCOL 30

// Prototipos de las funciones
void leerentrada(int a[][MAXCOL], int nfilas, int ncols);
void calcularsuma(int a[][MAXCOL], int b[][MAXCOL], int c[][MAXCOL], int nfilas, int ncols);
void escribirsalida(int c[][MAXCOL], int nfilas, int ncols);

int main() {
    int nfilas, ncols;
    int a[MAXFIL][MAXCOL], b[MAXFIL][MAXCOL], c[MAXFIL][MAXCOL];

    // Leer filas y columnas
    printf("¿Cuántas filas? ");
    scanf("%d", &nfilas);
    printf("¿Cuántas columnas? ");
    scanf("%d", &ncols);

    // Leer las tablas
    printf("\nPrimera tabla:\n");
    leerentrada(a, nfilas, ncols);

    printf("\nSegunda tabla:\n");
    leerentrada(b, nfilas, ncols);

    // Calcular la suma de las dos tablas
    calcularsuma(a, b, c, nfilas, ncols);

    // Mostrar la tabla resultante
    printf("\nSuma de los elementos:\n");
    escribirsalida(c, nfilas, ncols);

    return 0;
}

/* Leer una tabla de enteros */
void leerentrada(int a[][MAXCOL], int m, int n) {
    int fila, col;
    for (fila = 0; fila < m; ++fila) {
        printf("\nIntroducir datos para la fila %2d\n", fila + 1);
        for (col = 0; col < n; ++col) {
            scanf("%d", &a[fila][col]);
        }
    }
}

/* Sumar los elementos de dos tablas de enteros */
void calcularsuma(int a[][MAXCOL], int b[][MAXCOL], int c[][MAXCOL], int m, int n) {
    int fila, col;
    for (fila = 0; fila < m; ++fila) {
        for (col = 0; col < n; ++col) {
            c[fila][col] = a[fila][col] + b[fila][col];
        }
    }
}

/* Escribir una tabla de enteros */
void escribirsalida(int a[][MAXCOL], int m, int n) {
    int fila, col;
    for (fila = 0; fila < m; ++fila) {
        for (col = 0; col < n; ++col) {
            printf("%4d", a[fila][col]);
        }
        printf("\n");
    }
}
