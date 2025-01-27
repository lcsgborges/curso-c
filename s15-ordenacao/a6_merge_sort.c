/*
    Algoritmo de ordenação: Merge Sort

    l -> left (inicio do vetor)
    r -> right (fim do vetor)

    Complexidade Assintótica:
    - Pior, Médio e Melhor caso: O(n.log(n))

    Algoritmo Not-In-Place: memória de tamanho N

    Não adaptatível

    É estável -> mantém a ordem relativa
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 1000000

void merge(int *vetor, int l, int meio, int r){
    int *vet2 = malloc(sizeof(int) * (r - l +1));
    
    int k = 0;
    int i = l;
    int j = meio+1;

    while(i <= meio && j <= r){
        if (vetor[i] < vetor[j])
            vet2[k++] = vetor[i++];
        else
            vet2[k++] = vetor[j++];
    }
    while (i<=meio)
        vet2[k++] = vetor[i++];
    
    while (j<=r)
        vet2[k++] = vetor[j++];

    // copiar de um vetor para o outro:

    k = 0;
    for (i = l; i <= r; i++)
        vetor[i] = vet2[k++];
}

void mergeSort(int *vetor, int l, int r){
    if (l>=r)   
        return;

    int meio = (l+r)/2;

    mergeSort(vetor, l, meio);
    mergeSort(vetor, meio+1, r);
    merge(vetor, l, meio, r);
}

int main(){
    srand(time(NULL));
    int vetor[SIZE];

    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 1000000 + 1;
    }
    
    mergeSort(vetor, 0, SIZE);

    for (int i = 0; i < SIZE; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}