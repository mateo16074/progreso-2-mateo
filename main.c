#include <stdio.h>
#include "player.h"
#include "maze.h"


// Función para mostrar el menú y obtener la opción seleccionada
int mostrarMenu() {
    int opcion;
    printf("\n--- Menú ---\n");
    printf("1. Jugar\n");
    printf("2. Créditos\n");
    printf("3. Salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);
    return opcion;
}

// Función para jugar
void jugar() {
    laberinto;
    imprimirLaberinto;
    verificarMovimientoValido;
    moverJugador;
    obtenerContadorMovimientos;
}

// Función para mostrar los créditos
void mostrarCreditos() {
    printf("\n--- Créditos ---\n");
    printf("Un juego realizado por : \n");
    printf("\n--- Mateo Vaca---\n");
    printf("A001084441\n");
}

void juegoNuevo() {
    int jugadorfila = 0;
    int jugadorcolumna = 0;
    int contador = 0;
    int movrjugador;
    while () {
        printMaze();
        printf("Posición actual: (%d, %d)\n", jugadorfila, jugadorcolumna);
        printf("Opciones:\n");
        printf("1. Mover arriba\n");
        printf("2. Mover abajo\n");
        printf("3. Mover izquierda\n");
        printf("4. Mover derecha\n"); 
        printf("5. Reiniciar el juego\n");
        printf("6. Salir\n");
        printf("Ingrese su opción: ");
        int opcion;
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                moverjugador('w');
                break;
            case 2:
                moverjugador('s');
                break;
            case 3:
                moverjugador('a');
                break;
            case 4:
                moverjugaor('d');
                break;
            case 5:
                return;  
            case 6:
                return;  
            default:
                printf("Opción inválida. Por favor, ingrese un número del 1 al 6.\n");
                break;
        }
        if (hagando()) {
            printf("¡Ganaste!\n");
            printf("Número de movimientos: %d\n", obtenerContadorMovimientos());
            if (obtenerContadorMovimientos() <= 8) {
                printf("Eres un Pro!\n");
            } else if (obtenerContadorMovimientos() <= 15) {
                printf("Eres namekusei\n");
            } else {
                printf("Eres un capo!\n");
            }
            break;
        }
    }
}

int main() {
    int opcion;

    
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                jugar();
                break;
            case 2:
                mostrarCreditos();
                break;
            case 3:
                printf("\n¡Hasta luego!\n");
                break;
            default:
                printf("\n Opción inválida. Por favor, ingrese una opción válida.\n");
                break;
        }
    

    return 0;
}