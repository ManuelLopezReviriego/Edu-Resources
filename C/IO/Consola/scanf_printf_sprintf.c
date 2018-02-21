#include <stdio.h>

/*
FUNCIONES: scanf, printf, sprintf
EXPLICACION:
    -scanf: Lee una cadena desde teclado y la escanea siguiendo
            un formato. Un string del tipo "hola mundo" será
            considerado como dos cadenas distintas, ya que los
            espacios serán tratados como separadores.
            Los argumentos deben ser punteros a las variables: str, &x

    -printf: Imprime una cadena acorde a un formato dado.
    -sprintf: Análogo a printf, aunque devuelve además la cadena 
              que se va a imprimir.
*/
int main(){
    char str[100];
    int i;

    printf("Introduce un valor: ");
    scanf("%s %d", str, &i);

    printf("\nIntroduciste: %s %d", str, i);

    return 0;
}
