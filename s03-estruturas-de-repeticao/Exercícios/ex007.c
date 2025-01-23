/*
Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.
*/

#include <stdio.h>

int main(){

    int n, i;

    printf("Esse programa irá apresentar o quadrado de cada valor par de 1 até N. Digite o número N: \n");
    scanf("%d", &n);

    for (i = 0; i <= n; i+=2){
        printf("%d ", i*i);
    }

    return 0;
}