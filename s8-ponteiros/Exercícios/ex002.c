/*
    Escreve um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve ser: void troca(float *a, float *b);
*/

#include <stdio.h>

void troca(float *a, float*b){
    float c = *a; 
    *a = *b;
    *b = c;
}

int main(){
    float a, b;

    printf("Digite dois números: ");
    scanf("%f%f", &a, &b);
    printf("a = %.2f, b = %.2f\n", a, b);
    troca(&a, &b);
    printf("a = %.2f, b = %.2f", a, b);
    
    return 0;
}