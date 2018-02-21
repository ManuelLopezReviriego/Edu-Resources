#include <stdio.h>

/*
FUNCIONES: fflush
EXPLICACION:
    Cuando se invoca a scanf, el programa se detiene a la espera de que el usuario
    teclee el dato de entrada requerido, el cual es almacenado, temporalmente,
    en el buffer (memoria intermedia) de la entrada estándar.

    scanf introduce en la consola un salto de línea automático, por lo que si tenemos
    en el buffer "h\n" y hemos invocado scanf("%c", &x), entonces se introduce un salto
    de línea en la consola y el buffer pasa a tener "\n".

    Si volvemos a invocar scanf("%c", &z), z pasará a valer '\n', porque el carácter más
    antiguo que queda es '\n', el cual se introdujo al pulsar Enter.

    Para evitar este problema debemos vaciar el buffer después de cada scanf, sobre todo,
    si queremos escanear caracteres.
*/
int main(){
    char x, y, z;
    int modo = 1; // 1 -> flush activado

    printf("Introduce un valor: ");
    scanf("%c", &x); // Sin problema, el buffer está vacío al empezar el programa.
    if(modo)
        fflush(stdin);

    printf("Introduce un valor: ");
    scanf("%c", &y); // Resultado inesperado: y = '\n'
    if(modo)
        fflush(stdin);

    printf("Introduce un valor: ");
    scanf("%c", &z); // Buffer vacío de nuevo, no habrá ningún problema aquí

    if(y == '\n'){
        printf("Que hemos guardado?\n x = %c, y = [SALTO DE LINEA], z = %c", x, z);
    } else{
        printf("Que hemos guardado?\n x = %c, y = %c, z = %c", x, y, z);
    }
}
