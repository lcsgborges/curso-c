/*
Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma variável auxiliar.
*/

#include <stdio.h>

int main(){
    int a,b;

    printf("Digite dois números diferentes: \n");
    scanf("%d %d", &a, &b);

    printf("Valor do primeiro número (x): %d\nValor do segundo número (y): %d\n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("x = %d\ny = %d\n", a, b);

    return 0;
}