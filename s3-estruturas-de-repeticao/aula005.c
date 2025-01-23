#include <stdio.h>

// Estrutura de repetição do while (faça enquanto):

int main(){

    int valor;

    do{
        printf("Digite um número maior que zero: ");
        scanf("%d", &valor);
    } while (valor <= 0);

    printf("Número maior que zero!\n");

    return 0;
}