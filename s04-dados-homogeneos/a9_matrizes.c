// Matriz (arrays bidimensionais):

// matriz também é um conjunto de elementos do mesmo tipo;

// m[0][0] = elemento da 1 linha 1 coluna

#include <stdio.h>

int main(){

    /* Criando uma matriz (3x3):

            coluna 0    coluna 1    coluna 2
    linha 0     1           2           3
    linha 1     4           5           6
    linha 2     7           8           9

    sempre será preenchido a linha primeiro. Não é preciso informar a qntd de linhas, mas é obrigatório ter o numero de colunas.
    */

    int mat[3][3] = {1,2,3,4,5,6,7,8,9};

    printf("%d %d %d\n", mat[0][2], mat[0][0], mat[2][2]);

    return 0;
}