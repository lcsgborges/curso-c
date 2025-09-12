// Operador long int

// Para declarar um número nesse formato, usamos 'long int'

// A máscara do 'short int' é '%ld' (l = long)

// long int ocupa 8 bytes de memória (-9.223.372.036.854.775.808 até 9.223.372.036.854.775.807)

#include <stdio.h>

int main(){

    

    printf("Tamanho em memória de um long int: %lld bytes.\n", sizeof(long long int));

    
}