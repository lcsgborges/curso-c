#include <stdio.h>

// Lendo número inteiros:

int main()
{
    int valor; // váriavel para guardar um valor do tipo inteiro.
    valor = 50; // atribuindo o valor 50 na variável valor.

    printf("Valor da minha variável: %d\n", valor); // %d -> serve para imprimir um número inteiro no lugar (máscara)

    printf("Digite um valor do tipo inteiro: \n");
    scanf("%d", &valor);

    printf("Novo valor da variável 'valor': %d\n", valor);

    return 0;
}
