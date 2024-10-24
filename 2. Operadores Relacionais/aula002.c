#include <stdio.h>

/* 
    Estrutura de decisão:   (verificar se o numero digitado pelo usuario é negativo)
    
if ( condição )
    {
        código
    }
    
*/

int main(){

    int a;

    printf("Digite um número: \n");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("Você digitou um número negativo.\n");
    }
    
    else 
        printf("Você digitou um número não negativo. \n");

    return 0;
} 