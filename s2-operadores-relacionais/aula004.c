#include <stdio.h>

// Endentação e uso das chaves:

// endentação é um recurso visual em C. Se formos escrever mais de uma linha dentro de um valor lógico, devemos usar chaves.



int main(){
    
    int a;

    printf("Digite um número: \n");
    scanf("%d", &a);

    if (a > 0) {
        printf("Positivo!\n");
        printf("Outra função aqui dentro...\n");
    }
    else {
        printf("Valor negativo!\n");
        printf("Outra função (1) aqui dentro...\n");
    }

    return 0;
}