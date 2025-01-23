#include <stdio.h>

// Lendo números reais:

int main()
{
    float valor; // variavel valor do tipo float (número flutuantes)

    printf("Digite um valor do tipo flutuante (número decimal): \n");

    scanf("%f", &valor);

    printf("Valor digitado: %.2f\n", valor); // .2f -> formatando para duas casas decimais após o ponto

    return 0;
}
