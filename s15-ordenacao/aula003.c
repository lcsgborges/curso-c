/*
    Bubble Sort:

    Compare adjacentes:
    1. do início(base), flutuar item
    2. ao achar uma "bolha" maior, esta passa a flutuar
    3. no fim, o maio(ou menor) está no topo: topo --
    4. volte para o item 1

    Caracteristicas:
    -> é adaptativo
    -> complexidade assintótica: 
    pior, médio caso: O(n^2)
    melhor caso: O(n)

    -> é estável
    -> é in-place

    -> é pior que o selection sort, mas nem sempre 

*/

#include <stdio.h>
#include <time.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void bubble_sort(int vet[], int inicio, int fim){
    int r = fim;

    while (r > 1){
        for (int j = inicio; j < r; j++){
            if (vet[j] > vet[j+1])
                swap(&vet[j], &vet[j+1]);
        }
    r--;
    }
}

int main(){
    int vetor[1000];
    srand(time(NULL));
    
    for (int i = 0; i < 1000; i++){
        vetor[i] = rand() % 100;
    }
    
    for (int i = 0; i < 999; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    printf("---------------------------------------------------\n\n");

    bubble_sort(vetor, 0, 999);

    for (int i = 0; i < 999; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}