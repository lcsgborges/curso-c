/*
Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares.
*/

#include <stdio.h>

int main(){

    float valor;

    printf("Valor a ser convertido de real para dólar: \n");
    scanf("%f", &valor);

    valor = valor / 5.3;

    printf("Essa quantia equivale a $%.2f dólar(es).\n", valor);

    return 0;
}