// Operador long int

// Para declarar um número nesse formato, usamos 'long int'

// A máscara do 'short int' é '%ld' (l = long)

// long int ocupa 8 bytes de memória (-9.223.372.036.854.775.808 até 9.223.372.036.854.775.807)

#include <stdio.h>

int main(){

    long int n = 9223372036854775807;

    printf("Tamanho em memória de um long int: %ld bytes.\n", sizeof(long int));
    
    printf("Maior número long int positivo: %ld\n", n);

    return 0;
}