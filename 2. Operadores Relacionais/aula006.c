#include <stdio.h>

// Decisão aninhada na linguagem C:

int main(){
    int a;

    printf("Digite um número: \n");
    scanf("%d", &a);

    if (a < 0)
        printf("Número negativo!\n");
    else {
        if (a > 0)
            printf("Número positivo!\n");
        else    
            printf("Número igual a zero!\n");
    }

    return 0;
}