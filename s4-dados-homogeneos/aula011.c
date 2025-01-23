// Como ler uma matriz a partir do teclado:

#include <stdio.h>

int main(){

    int i, j, mat[3][5];

    for (i = 0; i < 3; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um número: \n");
            scanf("%d", &mat[i][j]);
        }
    }

    // imprimindo minha matriz para ter certeza:

    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}