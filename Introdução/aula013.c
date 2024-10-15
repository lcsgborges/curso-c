#include <stdio.h>

// Tipo primitivo double para números reais com precisão dupla:

int main(){

    // float = precisão simples (4 bytes)
    // double = precisão dupla (8 bytes)
    // long double = precisão quádrupla (16 bytes)   

    long double y = 2.318273187398127389;

    printf("Tamanho em memória do tipo double: %ld bytes.\n", sizeof(double));

    printf("Tamanho em memória do tipo double: %ld bytes.\n", sizeof(long double));

    printf("Long double: %Lf", y); // máscara para long double 

    // máscara para o double é %f também, como se fosse tratado como um float.  

    return 0;
}