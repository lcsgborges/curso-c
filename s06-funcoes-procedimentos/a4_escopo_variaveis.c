// Variáveis Globais e escopo de variáveis:

#include <stdio.h>

int idade2 = 20; // variável global, existe dentro de todas funções (escopo total do código)
// tomar cuidado, pois se eu alterar essa variável dentro de outra função, seu valor irá mudar.

void imprimir(){
    
    printf("idade2 = %d\n", idade2);
    idade2++;
}

int main(){

    int idade = 25; // variável local, pois só existe dentro desse bloco;
    // escopo da variável idade -> função main

    printf("\nIdade = %d\n", idade);

    imprimir();

    printf("mostrando que idade2 mudou valor -> %d\n", idade2);

    return 0;
}