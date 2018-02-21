#include <stdio.h>

/*
FUNCIONES: gets, puts
EXPLICACION:
    -gets: Lee una cadena introducida por teclado (stdin)
           y la devuelve. Se asigna también ese valor al
           string pasado como argumento.

    -puts: Escribe un carácter en la consola (stdout), que ha
           sido pasado como entero.
*/
int main(){
    char str[100];

    printf("Introduce una cadena: ");
    gets(str);

    printf("\nIntroduciste: ");
    puts(str);

    return 0;
}
