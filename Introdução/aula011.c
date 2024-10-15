#include <stdio.h>

// Operador short int:

int main(){

    // short int = 2 bytes 

    short int idade;

    printf("Tamanho em memória de short int: %ld bytes\n", sizeof(short int));

    // 2 bytes = 16 bits (numeros de -32768 até 32767)
    // para economizar memória ao perguntar a idade de uma pessoa, por exemplo:

    printf("Digite sua idade: \n");
    scanf("%hi", &idade); // hi é a máscara para short int.
    printf("Sua idade é %hi e ocupa %ld bytes na memória.\n", idade, sizeof(idade));

    return 0;
}