// Como aumentar o tamanho de um vetor com a função realloc:

// na teoria, não aumento o tamanho do vetor, aloco uma memória com capacidade maior e jogo esse meu vetor (ponteiro) lá;
// -> retorna um ponteiro para a nova região de memória;
// -> se o ponteiro for nulo ela aloca memória;
// -> se o novo tamanho for zero, a memória é liberada;
// -> se não houver memória suficiente, retorna NULL;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, tam, *vet;
    srand(time(NULL));

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = calloc(tam, sizeof(int));

    if(vet){
        printf("Alocado com sucesso!\n");

        for (i = 0; i < tam; i++){
            *(vet + i) = rand() % 100;
            printf("%d ", *(vet + i));
        }

        printf("Digite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam); // realocou memória
    }
    else    
        printf("Erro ao alocar memória!");
    
    return 0;
}