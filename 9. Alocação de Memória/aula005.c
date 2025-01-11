// Como liberar memória alocada dinamicamente com a função free:
// é importante liberar a memória quando terminar de usar aquela memória dinâmica.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("Memória alocada com sucesso!\n");
        for (i = 0; i < tam; i++){
            *(vet+i) = rand() % 100;
            printf("%d ", *(vet+i));
        }
    }
    else
        printf("Erro ao alocar memória;\n");

    free(vet);
     
    return 0;
}