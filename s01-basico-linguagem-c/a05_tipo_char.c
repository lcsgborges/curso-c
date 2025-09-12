// Caracteres do tipo char:

// Caracteres (uma letra da tabela ASCII) são representados pelo tipo 'char'

// Tabela ASCII -> 0 ao 127 (128 caracteres no total)

// A máscara padrão do tipo char é o '%c'

// Um char ocupa 1 byte na memória

#include <stdio.h>

int main()
{
    char letra = 'A';

    printf("Primeira letra do alfabeto: %c\n", letra);

    letra = 70;

    printf("Caractere da tabela ASCII representado pelo numero 70: %c\n", letra);

    return 0;
}
