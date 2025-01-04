// Matriz de Strings na linguagem C:

#include <stdio.h>
#include <string.h>

int main(){

    // cada linha da matriz vai ser uma string:

    char nome[5][30];
    int i;

    for (i = 0; i < 5; i++){
        printf("Nome da pessoa na posição %d: ", i);
        scanf(" %25[^\n]", nome[i]);
    }

    printf("\n\n");
    
    for (i = 0; i < 5; i++){
        printf("Nome da pessoa na posição %d: %s\n", i, nome[i]);
    }

    return 0;
}