/*
Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/

#include <stdio.h>

int main(){

    int i;

    printf("Múltiplos de 7: ");

    for (i = 0; i <= 9999; i+=7){
        printf("%d ", i);
    }

    printf("\n\n\n");

    return 0;
}