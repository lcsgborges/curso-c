#include <stdio.h>

// Estrutura de repetição WHILE (enquanto):

int main(){

    // while (condição) {execução do código}, ex:

    int valor;

    printf("Digite um valor maior que zero: \n");
    scanf("%d", &valor);
    
    while (valor <= 0){
        printf("Número digitado é menor que zero! Digite outro número: ");
        scanf("%d", &valor);
    }

    printf("Número digitado maior que zero! Número: %d\n", valor);
    
    return 0;
}