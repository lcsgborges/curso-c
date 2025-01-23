/*
Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
*/

#include <stdio.h>

int main(){

    int i, soma = 0;

    for (i = 1; i <= 1000; i+=2){
        soma += i;
    }

    printf("Soma total de todos os números ímpares entre 1 e 1000: %d\n", soma);

    return 0;
}