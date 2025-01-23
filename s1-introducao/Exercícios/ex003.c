/*
Escreva um programa que leia um valor de despesa do restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente.
*/

#include <stdio.h>

int main(){
    int pessoas;
    float conta, gorjeta, despesa_pessoal;

    printf("Valor da despesa sem gorjeta:\n");
    scanf("%f", &conta);

    printf("Qual a porcentagem da gorjeta?\n");
    scanf("%f", &gorjeta);

    conta = conta + (gorjeta/100 * conta);

    printf("Quantas pessoas vão pagar a conta? ");
    scanf("%d", &pessoas);

    despesa_pessoal = conta / pessoas;

    printf("O valor da conta total é de R$%.2f\nSendo dividido para %d pessoas, cada uma terá que pagar R$%.2f\n", conta, pessoas, despesa_pessoal);

    return 0;
}