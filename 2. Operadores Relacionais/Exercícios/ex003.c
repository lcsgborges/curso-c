/*
Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, ou se não é divisível por nenhum deles.
*/

#include <stdio.h>

int main(){
    int num, contador = 0;

    printf("Digite um número:\n");
    scanf("%d", &num);

    printf("\nNúmero: %d\n", num);

    if (num % 2 == 0) {
        printf("Divisível por 2.\n");
        contador++;
    }
    if (num % 3 == 0) {
        printf("Divisível por 3.\n");
        contador++;
    }
    if (num % 5 == 0) {
        printf("Divisível por 5.\n");
        contador++;
    }
    if (contador == 0) printf("O número %d não é divisível por 2, 3 ou 5.\n", num);
    return 0;
}