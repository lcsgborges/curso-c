/*
Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o endereço de cada posição do array;
*/

#include <stdio.h>
#include <time.h>

int tam = 10;
void imprime(int *vet, int tam){
    int i;

    for (i = 0; i < tam; i++){
        printf("v[%d] = %d  | endereço: %p\n", i, vet[i], vet+i);
    }
}

int main(){
    srand(time(NULL));
    int vet[tam],i;
    
    for (i = 0; i < tam; i++){
        vet[i] = rand() % 10;
    }
    for (i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    imprime(vet, tam);

    return 0;
}