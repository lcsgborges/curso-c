/*
Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/
#include <stdio.h>
#include <math.h>
#include <time.h>

int tam = 10;

void valor(int *v, int tam, int *maior, int *menor){

    int i;
    *maior = v[0]; // utilizando endereços, podemos ter "vários retornos de funções"
    *menor = v[0];

    for (i = 0; i < tam; i++){
        if(*menor > v[i]) {
            *menor = v[i];
        }
    }

    for (i = 0; i < tam; i++){
        if(*maior < v[i])
            *maior = v[i];
    }

    printf("maior = %d\nmenor = %d\n", *maior, *menor);
}

int main(){ 
    srand(time(NULL));

    int vet[tam], i, maior, menor;
    
    for (i = 0; i < tam; i++){
        vet[i] = rand() % 100;
    }

    for (i = 0; i < tam; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

    valor(vet, tam, &maior, &menor);

    return 0;
}