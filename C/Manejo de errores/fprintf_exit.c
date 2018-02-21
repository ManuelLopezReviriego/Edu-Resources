#include <stdio.h>
#include <stdlib.h>

/*
FUNCIONES: fprintf, exit,
EXPLICACION:

    -exit(int x): Sale del programa con un estado x.
    Se considera que salir con un estado 0, implica
    que el programa se ha ejecutado correctamente.

    -fprintf, exit: Supongamos que si se da una condición p,
    ha habido un error. Podemos mostrar un mensaje de error y
    abortar el programa si se da dicha condición.

    if(p){
        ...
        fprintf(stderr, mensaje_error);
        exit(EXIT_FAILURE);
    }
    ...
    exit(EXIT_SUCCESS);
*/
int main() {

    // Vamos a calcular x/y

    int x = 5;
    int y = 0;

    if(y == 0){
        fprintf(stderr, "Error: No se puede dividir por cero");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);

    return 0;
}
