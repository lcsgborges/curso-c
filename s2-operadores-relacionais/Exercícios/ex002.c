/*
Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos e positivos.
*/

#include <stdio.h>

int main(){
    int a, b, c, d, e, positivo = 0, negativo = 0;

    printf("Digite 5 números inteiros:\n");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);    

    if (a>=0) {
        positivo++;
    } else negativo++;

    if (b>=0) {
        positivo++;
    } else negativo++;

    if (c>=0) {
        positivo++;
    } else negativo++;

    if (d>=0) {
        positivo++;
    } else negativo++;

    if (e>=0) {
        positivo++;
    } else negativo++;

    printf("Números positivos: %d\nNúmeros negativos: %d\n", positivo, negativo);

    return 0;
}