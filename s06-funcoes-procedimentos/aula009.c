// Implemente uma função recursiva que, dados dois números inteiros x e n, calcula e retorna o valor de x elevado a n;

#include <stdio.h>

int potencia(int num1, int num2){

    if (num2 == 1) return num1; // ou: if(num2 == 0) return 1 -> tanto faz nesse caso 

    return num1 * potencia(num1, (num2 - 1));
}


int main(){

    int n, x;

    printf("Digite dois números para fazer o primeiro elevado ao segundo: ");
    scanf("%d %d", &n, &x);

    printf("O valor de %d elevado a %d é igual a: %d\n\n", n, x, potencia(n, x));

    return 0;
}