// Qual o tamanho de um ponteiro na linguagem C:

#include <stdio.h>

int main(){

    int num = 10;
    char letra = 'a';
    int *p1 = &num; // p1 aponta para o endereço da variável num (tipo int)

    char *p2 = &letra; // p2 aponta para o endereço da variável letra (tipo char)

    printf("Tamanho do ponteiro p1: %ld byte(s)\n", sizeof(p1));

    printf("Tamanho do ponteiro p2: %ld byte(s)\n", sizeof(p2));

    // os dois ponteiros ocuparam 8 bytes, mesmo que int tenha 4 bytes e char tenha 1 byte, pois um ponteiro sempre aponta para um endereço de memória;

    return 0;   
}