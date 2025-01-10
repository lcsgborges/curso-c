// Vetor é sempre um ponteiro?

#include <stdio.h>

void imprime(int *vet, int tam){ // posso passar como ponteiro, pois um vetor sempre aponta para o primeiro endereço de memória ( onde começa o vetor )

    int i;

    for (i = 0; i < tam; i++){
        printf("vet[%d] = %d\n", i, vet[i]);
    }
    
    vet[0] = 1000; // alterei o conteudo de vet[0]... continua em I
}


int main(){

    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    imprime(vet, 10);

    printf("%d\n", vet[0]); // I - como um vetor é um ponteiro, se eu altero o conteúdo de um vetor em outra função ou procedimento, o seu conteúdo muda para todo o escopo do código.

    // soluções: fazer uma cópia do vetor manualmente. 

    return 0;
}