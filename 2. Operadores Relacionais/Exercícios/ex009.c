/*
Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule e apresente a média.
Opções:
'a' = Aritmética
'p' = Ponderada (pesos: 3, 3, 4)
*/

#include <stdio.h>

int main(){

    int i;
    float media, nota[3];
    char tipo;

    for (i = 0; i < 3; i++){
        printf("Digite a nota %d:\n", i+1);
        scanf("%f", &nota[i]);
    }

    printf("Qual será o tipo de média a ser utilizada: [a] para Aritmética\n[p] para Ponderada\n");
    scanf(" %c", &tipo);

    if (tipo == 'a'){
        media = (nota[0] + nota[1] + nota[2]) / 3;
        printf("Média Aritmética = %.2f\n", media);
    }
    else {
        media = ((nota[0] * 3) + (nota[1] * 3) + (nota[2] * 4)) / 10;
        printf("Média Ponderada = %.2f\n", media);
    }

    return 0;
}