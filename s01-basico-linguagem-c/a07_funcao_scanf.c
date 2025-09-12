// Função scanf():

// Lê alguma coisa da entrada padrão (stdin), podendo ser um char, um int, um float, etc, e salva no endereço da memória da variável informada

// É possível ler mais de um valor ao mesmo tempo também

// Retorna a quantidade de valores lidos

#include <stdio.h>

int main()
{   
    float float1;

    printf("Digite um número de ponto flutuante: ");
    scanf("%f", &float1);

    printf("Número de ponto flutuante lido = %f\n", float1);

    int num1, num2, num3;

    printf("Digite três valores inteiros: \n");
    int qtd_valores_lidos = scanf("%d %d %d", &num1, &num2, &num3);

    printf("Quantidade de valores lidos = %d\n", qtd_valores_lidos);
    
    printf("Valores lidos: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
