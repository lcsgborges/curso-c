// Como copiar o conteúdo de um vetor para outro vetor?

#include <stdio.h>

int main(){

    int vetorA[10], vetorB[10], i;

    for(i = 0; i < 10; i++){
        printf("Número a ser inserido no vetor A: ");
        scanf("%d", &vetorA[i]);
    }

    for (i = 0; i < 10; i++){
        vetorB[i] = vetorA[i];
    }

    for (i = 0; i < 10; i++){
        printf("%d ", vetorB[i]); // imprimindo dados que foram copiados do vetorA no vetorB 
    }

    return 0;
}