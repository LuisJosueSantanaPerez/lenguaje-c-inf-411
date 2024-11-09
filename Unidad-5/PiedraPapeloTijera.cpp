/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa: Programa que simula el juego de Piedra, Papel o Tijera.
 * Fecha: 23/10/2024
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

const char PIEDRA = 'P';
const char PAPEL = 'A';
const char TIJERA = 'T';

void displayMenu() {
    printf("P – Piedra\nA – Papel\nT – Tijera\nS – Salir\n");
}

char getComputerOption() {
    srand(time(0));
    int num = rand() % 3;
    if (num == 0) return PIEDRA;
    if (num == 1) return PAPEL;
    return TIJERA;
}

const char* checkOptions(char userOption, char computerOption) {
    if (userOption == computerOption) return "Empate :|";
    
    if ((userOption == PIEDRA && computerOption == TIJERA) ||
        (userOption == PAPEL && computerOption == PIEDRA) ||
        (userOption == TIJERA && computerOption == PAPEL)) {
        return "¡Ganaste! :)";
    } else {
        return "Perdiste :( ";
    }
}

int inputOK(char option) {
    option = toupper(option);  // Convierte a mayúsculas la opción
    return (option == PIEDRA || option == PAPEL || option == TIJERA || option == 'S');
}

int main() {
    char userOption, computerOption;
    do {
        displayMenu();
        printf("Elige una opción: ");
        scanf(" %c", &userOption);
        userOption = toupper(userOption);

        if (!inputOK(userOption)) {
            printf("Opción inválida. Intenta de nuevo.\n");
            continue;
        }

        if (userOption == 'S') break;

        computerOption = getComputerOption();
        printf("El computador eligió: %c\n", computerOption);
        printf("%s\n", checkOptions(userOption, computerOption));
    } while (userOption != 'S');

    return 0;
}
