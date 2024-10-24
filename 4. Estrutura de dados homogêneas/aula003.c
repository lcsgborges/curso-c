// Como preencher um vetor por meio do teclado (tipo int):

#include <stdio.h>

int main(){

    int num[10],i;

    for (i = 0; i < 10; i++){
        printf("Valor a ser inserido no vetor: ");
        scanf("%d", &num[i]);
    }

    //teste para verificar se foi inserido corretamente:

    printf("Números inseridos: \n");

    for (i = 0; i < 10; i++){
        printf("%d ", num[i]);
    }

    return 0;
}