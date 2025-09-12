// Função sizeof()

// Serve para descobrir o tamanho em bytes que uma variável ou um tipo ocupa na memória

// Retorna um número em formato unsigned long int '%lu'

#include <stdio.h>

int main()
{
    int x = 10;

    printf("Tamanho em memória de um dado do tipo int: %lu bytes\n", sizeof(int));

    printf("Tamanho em memória de um dado do tipo float: %lu bytes\n", sizeof(float));

    printf("Tamanho em memória de um dado do tipo char: %lu bytes\n", sizeof(char));

    printf("Tamanho em memória da variável x: %lu bytes\n", sizeof(x));

    return 0;
}