// Faça uma função recursiva para calcular a soma de todos os valores de um vetor de inteiros.

#include <stdio.h>
#include <math.h>

int somaVetor(int v[], int tam){
    
    if (tam == 0) 
        return 0;
    else 
        return v[tam-1] + somaVetor(v, tam-1);
}


int main(){

    srand(time(NULL));
    
    int v[10], i = 0;

    for (i = 0; i < 10; i++){
        v[i] = rand() % 100;
    }

     for (i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }

    i = somaVetor(v, 10);
    printf("\nSoma dos elementos do vetor: %d\n", i);

    return 0;
}