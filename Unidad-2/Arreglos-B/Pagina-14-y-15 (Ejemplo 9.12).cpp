#include <stdio.h>

int a = 1; /* variable global */

void modificar(int b, int c[]); /* prototipo de función*/

int main() {
    int b = 2;
    int cont, c[3]; /* variable local y definición de array */

    printf("\nDesde main, antes de llamar a la función:\n");
    printf("a = %d b = %d\n", a, b);
    for (cont = 0; cont <= 2; ++cont) {
        c[cont] = 10 * (cont + 1);
        printf("c[%d] = %d\n", cont, c[cont]);
    }

    modificar(b, c); /* acceso a la función */

    printf("\nDesde main, después de llamar a la función:\n");
    printf("a = %d b = %d\n", a, b);
    for (cont = 0; cont <= 2; ++cont) {
        printf("c[%d] = %d\n", cont, c[cont]);
    }

    return 0;
}

void modificar(int b, int c[]) {
    int cont; /* definición de función */
    printf("\nDesde la función, después de modificar los valores:\n");
    a = -999;
    b = -999;
    printf("a = %d b = %d\n", a, b);
    for (cont = 0; cont <= 2; ++cont) {
        c[cont] = -9;
        printf("c[%d] = %d\n", cont, c[cont]);
    }
}
