#include <stdio.h>

// Operador unsigned (número sem sinal):
// apenas números positivos são permitidos.

int main(){

    unsigned int x = 4294967295; // aumenta o intervalo de valores (4 bytes -> 0 até 4294967295)
    
    printf("numero = %u\n", x); // mascara para unsigned int.

    return 0;
}