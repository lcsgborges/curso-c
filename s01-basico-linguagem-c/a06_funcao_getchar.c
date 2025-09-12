// Função getchar():

// Serve para ler um único caractere digitado pelo stdin (entrada padrão -> teclado)

// Se tentarmos escrever mais de um caractere, o getchar() vai pegar o primeiro caractere 

#include <stdio.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    
    caractere = getchar();

    printf("Caractere lido: %c\n", caractere);

    return 0;
}