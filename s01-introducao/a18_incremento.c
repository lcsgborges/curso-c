#include <stdio.h>

// Operador de incremento ++:

int main(){

    int contador = 10;

    printf("Valor = %d\n", contador);
    contador ++;
    printf("Valor = %d\n", contador);

    printf("Valor = %d\n", ++contador);

    // ++ a direita da variavel = primeiro faz a função, depois incrementa;
    // ++ a esquerda da variavel = primeiro incrementa, depois faz a função;  

    return 0;
}