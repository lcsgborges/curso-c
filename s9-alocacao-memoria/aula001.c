// Alocação dinâmica de memória com a função malloc:
// retorna um ponteiro para a região de memória alocada ou NULL;

#include <stdio.h>
#include <stdlib.h> // precisa dessa biblioteca

int main(){
    int *x; // usamos ponteiro, pois malloc reserva um endereço de memória.
    x = malloc(sizeof(int));

    if(x){
        printf("Memória alocada com sucesso!\n");
        printf("x = %d\n", *x);
        *x = 100;
        printf("x = %d\n", *x);
    }   
    else    printf("Erro ao alocar memória!\n");

    return 0;
}