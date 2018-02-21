#include <stdio.h>
#include <unistd.h>

/*
FUNCIONES: write
EXPLICACION:
    write es una llamada al sistema que permite escribir datos en un buffer

    write(int descriptor_de_archivo, str, num_bytes)

    Devuelve el número de bytes que fueron escritos.
    Puede que los datos se trunquen para no exceder el numero de bytes del buffer.

DESCRIPTORES DE ARCHIVO O FICHERO:
    0 -> stdin
    1 -> stdout
    2 -> stderr

*/
int main(int argvc, char ** argv) {
    printf("Hola, mundo\n") ; /* funcion C de E/S */
    write(1, "Adios, mundo", 12) ; /* llamada al sistema */
}
