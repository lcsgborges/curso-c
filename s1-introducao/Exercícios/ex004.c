/*
Uma empresa contrata um encanador a R$45,00 por dia. Faça um programa que solicite o números de dias trabalhos pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados 8% para imposto de renda.
*/

#include <stdio.h>

int main(){

    short int dias;
    float salario;

    printf("Dias de trabalho: \n");
    scanf("%hi", &dias);

    salario = 45 * dias;
    salario = salario - (salario * 0.08);

    printf("Salário a ser recebido: R$%.2f\n", salario);

    return 0;
}