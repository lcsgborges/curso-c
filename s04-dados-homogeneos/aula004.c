// Como alterar o conteúdo de um vetor:

#include <stdio.h>

int main(){
    //exemplo: pedir pro usuário 5 numeros e multiplicar todos os numeros por 10.  
    int vetor[5], i; 

    for (i = 0; i < 5; i++){
        printf("Número a ser inserido no vetor na posição %d: ", i);
        scanf("%d", &vetor[i]);

        vetor[i] = vetor[i] * 10; // já salvado como i * 10 no proprio vetor.
    }

    for (i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}