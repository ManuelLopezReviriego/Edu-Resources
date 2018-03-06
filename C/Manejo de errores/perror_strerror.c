#include <stdio.h>
#include <errno.h>
/*
FUNCIONES: perror, strerror
EXPLICACION:
    -perror(msg): Muestra un mensaje msg seguido de ':', un espacio y la representación
    en string de la variable global errno.

    -strerror(errno): Representación en string de la variable errno.

    Nota: C guarda el código de error en errno
*/
int main(int argvc, char ** argv) {
    FILE* pf;
    pf = fopen ("not_exists.txt", "rb");
    perror("Ha habido un error!");
    printf("Codigo de error (errno): %d", errno);
    printf("\n%s", strerror(errno));
    return 0;
}
