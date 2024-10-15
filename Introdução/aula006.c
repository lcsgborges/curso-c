#include <stdio.h>

// Lendo caracteres com a função getchar():

int main()
{
    char letra;

    printf("Digite uma letra: \n");
    letra = getchar();

    printf("Caractere lido: %c\n", letra);

    return 0;
}
