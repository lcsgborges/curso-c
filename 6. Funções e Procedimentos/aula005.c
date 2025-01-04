// Função para retornar a soma de uma linha da matriz;

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int tam = 5; // variável global, pois vou usar em duas funções.

void imprimeMatriz(int matriz[][5]){

    int i, j;

     for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

}


int somaLinhaMatriz(int mat[][5], int linha){

    int soma = 0, k;

    for (k = 0; k < tam; k++){
        soma += mat[linha - 1][k];
    }

    return soma;
}


int somaColunaMatriz(int mat[][5], int coluna){

    int soma = 0, k;

    for (k = 0; k < tam; k++){
        soma += mat[k][coluna - 1];
    }

    return soma;
}


int main(){

    int mat[5][5];
    int i, j, linha, coluna;

    srand(time(NULL)); // para gerar números aleatórios toda vez

    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            mat[i][j] = rand() % 100;
        }
    }

    imprimeMatriz(mat);

    printf("Digite qual linha deseja somar: \n");
    scanf("%d", &linha);

    printf("Digite qual coluna deseja somar: \n");
    scanf("%d", &coluna);

    i = somaLinhaMatriz(mat, linha);

    j = somaColunaMatriz(mat, coluna);

    printf("Soma da linha %d da matriz = %d\n", linha, i);

    printf("Soma da coluna %d da matriz = %d\n", coluna, j);

    return 0;
}