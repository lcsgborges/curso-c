#include <stdio.h>

// Estrutura de decisão else if encadeados na linguagem C:

int main(){
    int a;

    printf("Digite um número: \n");
    scanf("%d", &a);

    if (a < 0) 
        printf("Negativo!\n");

    else if (a > 0) 
        printf("Positivo!");

    else 
        printf("Igual a zero!\n");

    return 0;
}