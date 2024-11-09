/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Calculadora que realiza operaciones aritméticas básicas.
 * Fecha: 23/10/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Operation {
    double num1;
    double num2;
    char op;
};

int validateArguments(int argc, char *argv[], struct Operation *op) {
    if (argc != 4) {
        printf("Error: Se requieren exactamente 3 parámetros.\n");
        return 0;
    }
    
    op->num1 = atof(argv[1]);
    op->num2 = atof(argv[3]);
    op->op = argv[2][0];

    if (!(op->op == '+' || op->op == '-' || op->op == 'X' || op->op == 'x' || op->op == '/' || op->op == '%' || op->op == '^')) {
        printf("Error: Operador no válido.\n");
        return 0;
    }

    return 1;
}

double performOperation(struct Operation *op) {
    switch (op->op) {
        case '+': return op->num1 + op->num2;
        case '-': return op->num1 - op->num2;
        case 'X': case 'x': return op->num1 * op->num2;
        case '/': return op->num1 / op->num2;
        case '%': return (int)op->num1 % (int)op->num2;
        case '^': return pow(op->num1, op->num2);
        default: return 0;
    }
}

int main(int argc, char *argv[]) {
    struct Operation op;
    
    if (!validateArguments(argc, argv, &op)) {
        return 1;
    }

    double result = performOperation(&op);
    printf("Resultado: %lf\n", result);

    return 0;
}
