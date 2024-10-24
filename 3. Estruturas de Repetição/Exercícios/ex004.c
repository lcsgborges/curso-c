/*
Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta.
Restrição:
→ O bloco de repetição deve executar no máximo 500 vezes.
*/

#include <stdio.h>

int main(){

    int soma = 0, contador = 0, i;

    for (i = 1; i<=1000; i+=2){
        contador++;
        soma += i;
    }

    printf("Soma dos números ímpares entre 1 e 1000: %d\nNúmero de vezes que o for foi executado: %d\n", soma, contador); 
    
    return 0;
}