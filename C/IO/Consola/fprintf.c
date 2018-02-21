#include <stdio.h>

/*
FUNCIONES: fprintf
EXPLICACION:
    Es parecido a printf. Se diferencian en que fprintf nos
    permite especificar d�nde escribir la informaci�n (stream).

        fprintf(FILE *stream, const char* format, ...)
        
    Si stream = stderr, entonces imprimir� en la salida est�ndar
    de errores, que podr�a ser un archivo, la consola, etc.
*/
int main(){

    fprintf(stdout, "Hola mundo!\n");
    //printf("Hola mundo!\n");

    fprintf(stderr, "Error: esto es una prueba\n");

    return 0;
}