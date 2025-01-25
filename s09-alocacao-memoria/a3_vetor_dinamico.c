// Como alocar um vetor dinâmico:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int tam, *vet,i;

    printf("digite do tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));

    for (i = 0; i < tam; i++){
        *(vet+i) = rand() % 100;
        printf("%d ", vet[i]);
    }

    return 0;
}