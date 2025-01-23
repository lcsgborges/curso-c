/*
O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg)
pela altura (h em metros) elevada ao quadrado. Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de acordo com a tabela abaixo:

        IMC                              Interpretação

Menor que 18,5                          Abaixo do peso
Entre 18,5 e menor que 25               Peso normal
Entre 25 e menor que 30                 Sobrepeso
Entre 30 e menor que 35                 Obesidade grau 1
Entre 35 e menor que 40                 Obesidade grau 2
Maior ou igual a 40                     Obesidade grau 3
*/

#include <stdio.h>

int main(){

    float imc, peso, altura;

    printf("Qual o seu peso? \n");
    scanf("%f", &peso);

    printf("Qual a sua altura? \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if ( imc < 18.5) 
        printf("Você está abaixo do peso.\n");
    else if (imc >= 18.5 && imc < 25) 
        printf("Você está com o peso normal.\n");
    else if (imc >= 25 && imc < 30)
        printf("Você está com sobrepeso.\n");
    else if (imc >= 30 && imc < 35)
        printf("Você está com obesidade grau 1. \n");
    else if (imc >= 35 && imc < 40)
        printf("Você está com obesidade grau 2.\n");
    else
        printf("Você está com obesidade grau 3.\n");

    return 0;
}