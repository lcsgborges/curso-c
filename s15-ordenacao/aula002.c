// Selection Sort:
/*
    Características: 
    - complexidade: O (n^2)
    - adaptatividade: não é adaptativo
    - estabilidade: não é estável
    - é in-place
*/

#include <stdio.h>

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void selection_sort(int vet[], int inicio, int fim){
    int menor;

    for (int i = inicio; i < fim; i++){
        menor = i;

        for (int j = i + 1; j <= fim; j++){
            if(vet[j] < vet[menor]){
                menor = j;
            }
        }
        if (i != menor){
            swap(&vet[i], &vet[menor]);
        }
    }
}

int main(){
    int vetor[] = {
    45, 12, 78, 23, 56, 89, 34, 67, 90, 12, 38, 72, 21, 43, 65, 87, 29, 11, 49, 63, 77, 92, 18, 54, 31, 40, 66, 74, 25, 80, 15, 99, 37, 50, 68, 85, 10, 32, 47, 88, 22, 60, 95, 26, 13, 73, 41, 94, 20, 58};

    selection_sort(vetor, 0, 49);

    for (int i = 0; i < 50; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

