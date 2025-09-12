// Operador de decremento ( -- )

// Semelhante ao incremento, mas ao invés de somar 1, subtrai 1 

#include <stdio.h>



int main(){

    int contador = 1;
    int numero = 10;

    printf("Contador = %d\n", contador);

    contador--;

    printf("Contador = %d\n", contador);

    printf("10 - 1 = %d\n", --numero);

    return 0;
}