// Tipo double

// O tipo 'double' é utilizado para representar números de ponto flutuante 

// Ocupa 8 bytes de memória

// Sua declaração é 'double'

// Temos também o long double que é 16 bytes

#include <stdio.h>


int main(){  

    long double y = 2.318273187398127389;

    printf("Tamanho em memória do tipo double: %ld bytes.\n", sizeof(double));

    printf("Tamanho em memória do tipo double: %ld bytes.\n", sizeof(long double));

    printf("Long double: %Lf", y); // máscara para long double 
  
    return 0;
}