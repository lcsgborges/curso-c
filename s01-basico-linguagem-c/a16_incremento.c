// Operador de incremento ( ++ ):

// ++ a direita da variavel = primeiro faz a função, depois incrementa
    
// ++ a esquerda da variavel = primeiro incrementa, depois faz a função 

#include <stdio.h>

int main(){

    int contador = 10;

    printf("Valor = %d\n", contador);

    contador ++;

    printf("Valor = %d\n", contador);

    printf("Valor = %d\n", ++contador);

    printf("Valor = %d\n", contador);

    return 0;
}