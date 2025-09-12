// Operador short int

// Para declarar um número nesse formato, usamos 'short int'

// A máscara do 'short int' é '%hd' (h = half)

// short int ocupa 2 bytes de memória (-32768 até 32767)

#include <stdio.h>

int main(){

    short int idade;

    printf("Tamanho em memória de short int: %ld bytes\n", sizeof(short int));

    printf("Digite sua idade: \n");
    scanf("%hd", &idade);
    printf("Sua idade é %hd.\n", idade);

    return 0;
}