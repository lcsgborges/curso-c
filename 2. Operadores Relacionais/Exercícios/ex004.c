/*
Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/

#include <stdio.h>

int main(){
    float valor;
    int escolha;

    printf("Conversão de moedas:\n1 - Dólar para Real\n2 - Real para Dólar\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Digite o valor a ser convertido: \n");
        scanf("%f", &valor);
        valor = valor * 5.3;
        printf("Essa quantia equivale a R$%.2f\n", valor);

        break;
    case 2:
        printf("Digite o valor a ser convertido: \n");
        scanf("%f", &valor);
        valor = valor / 5.3;
        printf("Essa quantia equivale a $%.2f\n", valor);

        break;
    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}