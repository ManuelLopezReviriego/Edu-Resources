#include <stdio.h>

/*
FUNCIONES: getchar, putchar
EXPLICACION:
    -getchar: Lee un carácter introducido por teclado (stdin)
              y devuelve un entero, que es resultado de hacerle
              un casting al tipo char.

    -putchar: Escribe un carácter en la consola (stdout), que ha
              sido pasado como entero. Si hay algún error,
              devuelve EOF.
*/
int main(){
    int c;

    printf("Introduce un caracter: ");
    c = getchar();

    printf("\nIntroduciste: ");
    putchar(c);
    putchar('\n'); // Salto de línea

    return 0;
}
