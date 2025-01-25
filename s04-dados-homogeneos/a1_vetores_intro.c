#include <stdio.h>

// Vetores: conjunto de elementos do mesmo tipo armazenados de forma sequencial na memória.
// Um índice é usado para acessar cada elemento do vetor (sempre começa em 0).

// Como criar um vetor:

int main (){

    //Formas de inicializar um vetor:

    int num1[5]; // vetor que armazena dados do tipo int, nesse caso, 5;

    int num2[] = {1,2,3,4,5,6,7,8,9}; // não coloquei a quantidade, mas terá 9 dados armazenados, logo o tamanho do vetor será 9.

    int num3[5] = {0,2,4}; // cabe 5 dados e tenho 3, logo as ultimas duas posições serão preenchidas com 0.

    // não posso colocar mais dados do que o vetor suporta, senão perco informação.

    char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; // vetores de caracteres

    // um conjunto de caracteres = string

    printf("%s\n", vogais);  

    return 0;
}