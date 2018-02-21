#include <stdio.h>

/*
FUNCIONES: printf
SINTAXIS: %[parameter][flags][width][.precision][length]type

FLAGS:
    -: Alinear a la izquierda (por defecto se hace a la derecha)
    +: Añade un + delante de los números con signo positivo.
    <espacio>: Lo mismo que el anterior, pero un espacio en lugar de +.
    0: Cuando la opción width es especificada, añade ceros a los números.
    #: Para números decimales o en notación científica, siempre aparece
       el punto decimal.
       Para los tipo double, trailing zeros no son eliminados (...00000)
       Para los octales y hexadecimales se añade 0 y 0x respectivamente
       a los números no nulos.
WIDTH:
    printf("%5d", 10) == Imprime 10 con 3 espacios delante (5-2)
    printf("%*d", 5, 10) == Imprime 10 con 3 espacios delante (5-2)

PRECISION:
    printf("%6.2f", 1.2) == Imprime 1.20 con 2 espacio delante (6 - 3 - (2-1))
    printf("%6.*f", 2, 1.2) == Imprime 1.20 con 2 espacio delante (6 - 3 - (2-1))

    Nota: El punto decimal cuenta en la longitud

ESPECIFICADORES DE FORMATO:
    %c: Carácter
    %s: Cadena

    %d: Entero
    %u: Natural

    %f: Float
    %g: Double
    %e: Notación científica

    %o: Octal
    %X: Hexadecimal

    %n: No imprime nada
    %:  Carácter %
*/
int main(){
    printf("HEXADECIMAL MINUSCULA\n");
    printf("%x \n", 10);
    printf("%#x \n", 10);

    printf("\nHEXADECIMAL MAYUSCULA\n");
    printf("%X \n", 10);
    printf("%#X \n", 10);

    printf("\nOCTAL\n");
    printf("%o \n", 8);
    printf("%#o \n", 8);

    printf("\nENTEROS\n");
    printf("%d \n", 10);
    printf("%d \n", -10);

    printf("\nENTEROS (FORZAR SIGNO)\n");
    printf("%+d \n", 10);
    printf("%+d \n", -10);

    printf("\nENTEROS (ESPACIO = +)\n");
    printf("% d \n", 10);
    printf("% d \n", -10);

    printf("\nNATURALES\n");
    printf("%u \n", 10);
    printf("%u \n", -10);

    printf("\nDECIMALES\n");
    printf("%f \n", 1.2);
    printf("%g \n", 1.2);
    printf("%#g \n", 1.2);
    printf("%e \n", 1.2);

    return 0;
}
