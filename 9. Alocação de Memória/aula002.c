// Alocação dinâmica de memória com a função calloc:

#include <stdio.h>
#include <stdlib.h>

int main(){ 
    char *p;
    p = calloc(1, sizeof(char)); 
    // calloc precisa de dois parametros: qtd de elementos e tamanho desse elemento

    if(p){
        printf("Memória alocada com sucesso!\n");
    }
    else    printf("Erro ao alocar memória!\n");
    return 0;
}