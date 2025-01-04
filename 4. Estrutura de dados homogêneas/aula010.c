// Como imprimir o conteúdo de uma matriz:

#include <stdio.h>

int main(){

    int mat[3][3] = {1,2,3,4,5,6,7,8,9}, i, j;

    // usaremos for para imprimir o conteúdo:

    for (i = 0; i<3; i++){ // i < qtd linhas
        for (j = 0; j < 3; j++){ // j < qtd colunas
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}