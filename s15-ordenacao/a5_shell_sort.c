#include <stdio.h>
#include <time.h>

/*
    Adaptável
    Não estável
    In-place
    Complexidade: pior caso O(N^2)
    Melhor caso com pior h: O(nlog^2n)
    Melhor caso com melhor h: O(nlogn)
    
    Comparações proporcionais a N^3/2
*/

#define SIZE 1000000


void shell_sort(int *vet, int inicio, int fim){
    int h = 1, i, j, chave;

    while(h < (fim - inicio + 1)/3)
        h = 3*h + 1;

    while(h>=1){
        for (i = inicio + h; i <= fim; i++){
            chave = vet[i];
            for (j = i; j>=inicio+h && chave < vet[j-h]; j-=h){
                vet[j] = vet[j-h];
            }
            vet[j] = chave;
            }
            h = h/3;
        } 
}

int main(){
    srand(time(NULL));
    int vetor[SIZE];

    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 1000000 + 1;
    }
    
    shell_sort(vetor, 0, SIZE);

    for (int i = 0; i < SIZE; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}