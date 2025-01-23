// Como descobrir se uma palavra é palíndroma?

// palíndromo: arara, asa, osso,...

#include <stdio.h>
#include <string.h>

int main(){

    char palavra[20], copia[20];
    int i, tam, k = 0;

    printf("Digite uma palavra para verificar se ela é palíndroma: \n");
    scanf("%s", palavra);

    tam = strlen(palavra);

    for (i = 0; i < tam; i++){
        copia[i] = palavra[tam - 1];
        tam--;
    }
    copia[i] = '\0';

    for (i = 0; i < tam; i++){
        if (palavra[i] == copia[i]){
            k++;
        }
    }

    if (k == tam){
        printf("Palíndromo.\n");
    }
    else
        printf("Não palíndromo.\n");

    return 0;
}