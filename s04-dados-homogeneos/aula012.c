// Como somar duas matrizes e salvar o resultado em uma terceira matriz:

// para somar duas matrizes, elas precisam ter o mesmo tamanho.

#include <stdio.h>

int main(){

    int mat1[2][2], mat2[2][2], mat3[2][2], i, j;

    // preenchendo mat1 e mat2:

    printf("Preencha a matriz 1: \n");

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Enter a number: ");
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Preencha a matriz 2: \n");

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Enter a number: ");
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j< 2; j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // imprimindo o conteudo de mat1, mat2 e mat3:

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}