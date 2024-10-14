/*
 * INF4110-1
 * Nombre: Luis Josue Santana Perez
 * Matricula: 100218446
 * Programa 1: Maquina de bebidas
 * Fecha: 14/10/2024
*/

#include <stdio.h>
#include <ctype.h>  // Para la función isdigit

#define NUM_BEBIDAS 5

// Estructura para almacenar la información de las bebidas
struct Bebida {
    char nombreBebida[20];
    double precioBebida;
    int cantidadEnMaquina;
};

// Función para mostrar las bebidas disponibles
void mostrarBebidas(struct Bebida bebidas[]) {
    printf("Bebidas disponibles:\n");
    for (int i = 0; i < NUM_BEBIDAS; i++) {
        printf("%d. %s - Precio: %.2f - Cantidad disponible: %d\n", 
               i + 1, bebidas[i].nombreBebida, bebidas[i].precioBebida, bebidas[i].cantidadEnMaquina);
    }
}

// Función para validar el monto ingresado
double ingresarMonto() {
    char input[10];  // Array para capturar la entrada del usuario
    double monto;
    int esValido;

    do {
        esValido = 1;  // Bandera para validar la entrada
        printf("Ingrese el monto de dinero (mínimo 20.00): ");
        fgets(input, 10, stdin);  // Leer la entrada como una cadena

        // Verificar si la entrada es un número válido con punto decimal
        int puntoDecimal = 0;  // Para contar si hay un solo punto decimal
        for (int i = 0; input[i] != '\n' && input[i] != '\0'; i++) {
            if (!isdigit(input[i])) {
                if (input[i] == '.' && puntoDecimal == 0) {
                    puntoDecimal = 1;  // Se permite un solo punto decimal
                } else {
                    esValido = 0;  // Si hay un carácter no numérico o más de un punto decimal
                    break;
                }
            }
        }

        if (esValido) {
            sscanf(input, "%lf", &monto);  // Convertir la entrada a double
            if (monto < 20.00) {
                printf("El monto ingresado no es válido. Debe ser mayor o igual a 20.00.\n");
                esValido = 0;  // Repetir si el monto es menor a 20.00
            }
        } else {
            printf("Entrada inválida. Solo se permiten números y un punto decimal.\n");
        }
    } while (!esValido);  // Repetir hasta que la entrada sea válida

    return monto;
}

// Función para validar la entrada del menú
int validarEntrada() {
    char input[10];  // Array para capturar la entrada del usuario
    int opcion;
    while (1) {
        printf("Seleccione una bebida (1-5) o 0 para salir: ");
        fgets(input, 10, stdin);  // Leer la entrada como una cadena

        // Comprobar si la entrada es un número
        int esNumero = 1;  // Bandera para verificar si toda la entrada es un número
        for (int i = 0; input[i] != '\n' && input[i] != '\0'; i++) {
            if (!isdigit(input[i])) {
                esNumero = 0;  // Si encuentra un carácter no numérico, cambia la bandera
                break;
            }
        }

        if (esNumero) {
            sscanf(input, "%d", &opcion);  // Convertir la entrada a entero
            return opcion;  // Retornar la opción si es un número válido
        } else {
            printf("Opción inválida. Por favor, ingrese un número.\n");
        }
    }
}

int main() {
    // Inicializar el arreglo de bebidas
    struct Bebida bebidas[NUM_BEBIDAS] = {
        {"Botella de Agua", 20.00, 20},
        {"Coca Cola", 25.00, 20},
        {"Seven Up", 25.00, 20},
        {"Montain Dew", 30.00, 20},
        {"Jugo V8", 50.00, 20}
    };

    double totalGanancias = 0.0;
    int opcion;

    while (1) {
        // Mostrar las bebidas disponibles
        mostrarBebidas(bebidas);

        // Validar la opción seleccionada (solo acepta números)
        opcion = validarEntrada();

        if (opcion == 0) {
            // Mostrar el total de ganancias y salir
            printf("Gracias por usar la máquina de bebidas.\n");
            printf("Total de ganancias: %.2f\n", totalGanancias);
            break;
        }

        // Validar la opción seleccionada
        if (opcion < 1 || opcion > NUM_BEBIDAS) {
            printf("Opción inválida. Intente de nuevo.\n");
            continue;
        }

        struct Bebida *bebidaSeleccionada = &bebidas[opcion - 1];

        // Verificar si la bebida está agotada
        if (bebidaSeleccionada->cantidadEnMaquina == 0) {
            printf("Lo siento, la bebida seleccionada está agotada.\n");
            continue;
        }

        // Solicitar al usuario ingresar el dinero
        double monto = ingresarMonto();

        // Verificar si el dinero es suficiente
        if (monto < bebidaSeleccionada->precioBebida) {
            printf("Dinero insuficiente. Se requiere %.2f para esta bebida.\n", bebidaSeleccionada->precioBebida);
            continue;
        }

        // Calcular el cambio
        double cambio = monto - bebidaSeleccionada->precioBebida;
        printf("Cambio a devolver: %.2f\n", cambio);

        // Actualizar la cantidad de bebidas y las ganancias
        bebidaSeleccionada->cantidadEnMaquina--;
        totalGanancias += bebidaSeleccionada->precioBebida;

        printf("Gracias por su compra!\n");
        printf("----------------------------\n");
    }

    return 0;
}
