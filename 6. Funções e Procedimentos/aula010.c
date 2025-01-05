// Faça uma função recursiva que calcula a soma dos números de 1 a N;

#include <stdio.h>

int soma(int n){

    if (n == 1) return 1;

    return n + soma(n-1);
}


int main(){

    int x;

    printf("Digite um número maior que 0 para calcular a soma de todos os números de 1 até esse número: ");
    scanf("%d", &x);

    printf("A soma de todos os números de 1 até %d é igual a: %d\n", x, soma(x));

    return 0;
}