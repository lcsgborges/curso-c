#include <stdio.h>

// Verdadeiro e Falso na Linguagem C:

int main(){
    int a;

    printf("Digite um valor qualquer: \n");
    scanf("%d", &a);

    printf("Resultado lógico: %d\n", a < 0); // 0 = falso ; 1 = verdadeiro

    // ****** qualquer coisa diferente de zero tem valor lógico verdadeiro. ******

    if (a < 0)
        printf("Número negativo!\n");
    else
        printf("Número nulo ou positivo!\n");

    return 0;
}