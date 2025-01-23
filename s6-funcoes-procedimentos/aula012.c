// Desenvolva uma função recursiva que encontre e retorne o maior elemento de um vetor de inteiros de tamanho N;

#include <stdio.h>
#include <math.h>

int maiorElemento(int v[], int tam, int indice){
    int maior = 0;

    if (tam == 0)
        return maior;
    else ;
    
}

int main(){

    srand(time(NULL));

    int v[10], i;

    for (i = 0; i < 10; i++)
        v[i] = rand() % 100;

    i = maiorElemento(v, 10, 0);

    return 0;
}