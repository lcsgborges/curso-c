#include <stdio.h>

// Exercício para ler idade, peso e altura de uma pessoa e imprimir na tela:

int main()
{
    int idade;
    char sexo;
    float altura;

    printf("---------------------------------------------\n");
    printf("-------------CADASTRO DE USUÁRIOS------------\n");
    printf("---------------------------------------------\n");

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu sexo: [m]asculino ou [f]eminino\n");
    scanf(" %c",&sexo); // Deixar espaço antes do %c para não dar erro de leitura do dado.

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("\nDados do usuário cadastrado: \n");
    printf("Idade: %d\nSexo: %c\nAltura: %.2f\n", idade, sexo, altura);

    return 0;
}
