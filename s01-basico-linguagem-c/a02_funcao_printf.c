// Função printf():

// Imprime algo na saída padrão (stdout -> terminal geralmente)

// Seu retorno é a quantidade de caracteres exibidos no terminal

#include <stdio.h>

int main(){

    int qtd_caracteres = printf("Hello World!\n");

    printf("%d\n", qtd_caracteres);

    return 0;
}