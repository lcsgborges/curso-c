#include <stdio.h>

// Como descobrir o tamanho em memória de cada tipo de dado:

// sizeof x ou sizeof(int)

int main()
{
    int x = 10;

    printf("Tamanho em memória de um dado do tipo int: %ld bytes\n", sizeof(int));

    printf("Tamanho em memória de um dado do tipo float: %ld bytes\n", sizeof(float));

    printf("Tamanho em memória de um dado do tipo char: %ld bytes\n", sizeof(char));

    printf("Tamanho em memória da variável x: %ld bytes\n", sizeof(x));

    return 0;
} // ld = numero decimal longo
