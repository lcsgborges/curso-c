// Busca sequencial:

#include <stdio.h>

int busca_sequencial(int vetor[], int elemento, int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        if (vetor[i] == elemento){
            return i;
        }
    }
    return -1;
    
}

int main(){

    int vetor[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int x = busca_sequencial(vetor, 91, 15);
    if (x != -1)
        printf("elemento encontrado no indice %d\n", x);
    else
        printf("elemento não encontrado\n");

    return 0;
}