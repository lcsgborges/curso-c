#include <stdio.h>

int main(){

    // Utilizando gets() para ler uma string:
    // não recomendado utilizar o gets() ao escrever um programa.

    char nome[32];

    printf("Digite seu nome: ");
    gets(nome); // the 'gets' function is dangerous and should not be used.

    // existe também o fgets(), mas não será abordado aqui.

    return 0;
}