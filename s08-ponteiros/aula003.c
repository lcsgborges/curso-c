// Por que não usamos & para ler strings com scanf():


#include <stdio.h>

int main(){

    char frase[50];

    printf("Digite uma frase: ");
    scanf("%50[^\n]", frase);
    printf("frase: %s\n", frase);

    // endereços de vetores:

    // um vetor por padrão é um ponteiro, pois aponta para o endereço de memória onde começar o vetor;

    printf("Endereço do vetor frase: %p\n", frase);
    printf("Endereço do vetor frase: %p\n", &frase);
    printf("Endereço do vetor frase: %p\n", &frase[0]);
    return 0;
}