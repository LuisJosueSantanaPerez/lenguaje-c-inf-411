/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que muestra el contenido de un archivo de texto en pantalla.
 * Fecha: 9/11/2024
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINEAS_POR_PAGINA 24

int main() {
    char nombreArchivo[256];
    printf("Ingrese el nombre del archivo: ");
    if (fgets(nombreArchivo, sizeof(nombreArchivo), stdin) == NULL) {
        fprintf(stderr, "Error al leer el nombre del archivo.\n");
        return 1;
    }

    // Eliminar el salto de línea al final del nombre del archivo
    size_t len = strlen(nombreArchivo);
    if (len > 0 && nombreArchivo[len - 1] == '\n') {
        nombreArchivo[len - 1] = '\0';
    }

    FILE *archivo = fopen(nombreArchivo, "r");
    if (archivo == NULL) {
        fprintf(stderr, "No se pudo abrir el archivo: %s\n", nombreArchivo);
        return 1;
    }

    char linea[1024];
    int numeroLinea = 1;
    int contadorLineas = 0;

    while (fgets(linea, sizeof(linea), archivo)) {
        printf("%d: %s", numeroLinea, linea);
        numeroLinea++;
        contadorLineas++;

        if (contadorLineas == LINEAS_POR_PAGINA) {
            printf("Presione Enter para continuar...");
            while (getchar() != '\n');
            contadorLineas = 0;
        }
    }

    fclose(archivo);
    return 0;
}