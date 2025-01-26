#include <stdio.h>
#include <time.h>

#define SIZE 1000

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void insertion_sort(int vet[], int inicio, int fim){
    int i = inicio +1, j;

    while (i < fim){
        for (j = i ; j > inicio; j--){
            if (vet[j] < vet[j-1]){
                swap(&vet[j], &vet[j-1]);
            }
        }
        i++;
    }
}

void insertior_sort_otimizado_sem_swap(int *vet, int inicio, int fim){
    int i, j, chave;

    for (i = inicio +1; i <= fim; i++){
        chave = vet[i];

        for(j = i; j > inicio && chave < vet[j-1]; j--){
            vet[j] = vet[j-1];
        }
        vet[j] = chave;
    }
    
}

int main(){
    srand(time(NULL));
    int vetor[SIZE];

    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 1000 + 1;
    }
    
    insertion_sort(vetor, 0, SIZE);

    for (int i = 0; i < SIZE; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}