#include <stdio.h>
#include <ctype.h>
#include <string.h>

void inicializar(char texto[], char piglatin[]);
void leerentrada(char texto[]);
int contarpalabras(char texto[]);
void convertir(int palabras, char texto[], char piglatin[]);
void escribirsalida(char piglatin[]);

int main() {
    char texto[80], piglatin[80];
    int palabras;

    printf("Bienvenido al generador de Pig Latin\n\n");
    printf("Escribir 'FIN' para terminar\n\n");

    do {
        inicializar(texto, piglatin);
        leerentrada(texto);

        // Comprobación de condición de finalización
        if (toupper(texto[0]) == 'F' && toupper(texto[1]) == 'I' && toupper(texto[2]) == 'N') {
            break;
        }

        // Contar el número de palabras en la línea
        palabras = contarpalabras(texto);

        // Convertir el texto a "Pig Latin"
        convertir(palabras, texto, piglatin);

        // Escribir la salida en Pig Latin
        escribirsalida(piglatin);

    } while (palabras >= 0);

    printf("\nQue tenga un buen día\n");
    return 0;
}

/* Inicializar el array de caracteres con espacios en blanco */
void inicializar(char texto[], char piglatin[]) {
    for (int cont = 0; cont < 80; ++cont) {
        texto[cont] = ' ';
        piglatin[cont] = ' ';
    }
}

/* Leer una línea de texto */
void leerentrada(char texto[]) {
    int cont = 0;
    char c;
    
    printf("Ingrese una línea de texto: ");
    while ((c = getchar()) != '\n' && cont < 80) {
        texto[cont] = c;
        ++cont;
    }
}

/* Contar el número de palabras en el texto */
int contarpalabras(char texto[]) {
    int cont, palabras = 0;
    for (cont = 0; cont < 79; ++cont) {
        if (texto[cont] != ' ' && (cont == 0 || texto[cont - 1] == ' ')) {
            palabras++;
        }
    }
    return palabras;
}

/* Convertir cada palabra a "Pig Latin" */
void convertir(int palabras, char texto[], char piglatin[]) {
    int n, cont;
    int ml = 0, m2;

    for (n = 1; n <= palabras; ++n) {
        // Localizar el final de la palabra actual
        cont = ml;
        while (texto[cont] != ' ' && cont < 80) {
            m2 = cont++;
        }

        // Transponer la primera letra y añadir una 'a'
        for (cont = ml + 1; cont <= m2; ++cont) {
            piglatin[cont - 1 + (n - 1)] = texto[cont];
        }
        piglatin[m2 + (n - 1)] = texto[ml];
        piglatin[m2 + n] = 'a';

        // Reinicializar el indicador inicial para la próxima palabra
        ml = m2 + 2;
    }
}

/* Escribir la línea de texto en "Pig Latin" */
void escribirsalida(char piglatin[]) {
    printf("\nTexto en Pig Latin:\n");
    for (int cont = 0; cont < 80 && piglatin[cont] != ' '; ++cont) {
        putchar(piglatin[cont]);
    }
    printf("\n");
}
