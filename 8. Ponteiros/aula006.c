// Aritmética de Ponteiros:

#include <stdio.h>

void imprime(int *v, int tam){

    int i;
    
    for (i = 0; i < tam; i++){
        printf("%d ", *(v + i)  ); // *(endereço de ponteiro + 1) -> proximo enreço de memória
    }
}

int main(){

    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    imprime(vetor, 10);

    return 0;
}