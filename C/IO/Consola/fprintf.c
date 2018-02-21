#include <stdio.h>

/*
FUNCIONES: fprintf
EXPLICACION:
    Es parecido a printf. Se diferencian en que fprintf nos
    permite especificar dónde escribir la información (stream).

        fprintf(FILE *stream, const char* format, ...)
        
    Si stream = stderr, entonces imprimirá en la salida estándar
    de errores, que podría ser un archivo, la consola, etc.
*/
int main(){

    fprintf(stdout, "Hola mundo!\n");
    //printf("Hola mundo!\n");

    fprintf(stderr, "Error: esto es una prueba\n");

    return 0;
}