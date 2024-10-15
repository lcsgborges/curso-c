/*
Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável "a" e um para a váriavel "b". Em seguida, faça os passos que julgar necessário para que ao final, a variável "a" possua o valor que inicialmente estava em "b" e a variável "b" possua o valor que inicialmente estava em "a". 
*/

#include <stdio.h>

int main(){
    int a,b,c;
    
    printf("Digite um valor para assumir a variável 'a': \n");
    scanf("%d", &a);

    printf("Digite um valor para assumir a variável 'b': \n");
    scanf("%d", &b);

    printf("Valor inicial de 'a' = %d\nValor inicial de 'b' = %d\n", a,b);

    c = a;
    a = b;
    b = c;

    printf("Novo valor de 'a' = %d\nNovo valor de 'b' = %d\n", a,b);

    return 0;
}