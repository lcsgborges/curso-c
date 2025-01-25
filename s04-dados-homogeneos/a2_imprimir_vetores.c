// Como imprimir o conteúdo de um vetor:

#include <stdio.h>

int main(){

    int num1[] = {2,3,5,7,11,13,17,19}, i;
    char vogais[] = {'a','e','i','o','u'};

    // Fazer estrutura de repetição para imprimir na tela:

    for(i = 0; i < sizeof(num1) / 4; i++){ // jeito para imprimir os dados do meu vetor na tela;
        printf("%d ", num1[i]);
    }

    // para caracteres, podemos usar %s (string = conjunto de caracteres) e imprimir sem for:

    printf("\n\n%s\n\n", vogais);

    return 0;
}