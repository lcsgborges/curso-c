// Buscando um dado no vetor:

#include <stdio.h>

int main(){

    int vetorA[10] = {2,3,5,7,11,13,17,19,23,29}, x, i = 0;

    printf("Digite um número a ser procurado no vetorA: \n");
    scanf("%d", &x);

    while (i < 10 && vetorA[i] != x) {
        i++;
    }

    if (i < 10) printf("Está no vetor.\n");
    else if (i==10) printf("Não está no vetor.\n");

    return 0;
}