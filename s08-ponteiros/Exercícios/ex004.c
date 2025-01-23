/*
Considere a seguinte declaração: int A, *B, **C, ***D. Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros B, C e D; O ponteiro B deve ser usado para calcular o dobro, C o triplo e D o quadruplo.
*/

#include <stdio.h>

int main(){
    int a, *b, **c, ***d;
    b = &a; // b -> end A
    c = &b;   // c -> end de B
    d = &c;  // d -> end de C

    printf("digite o valor de A: ");
    scanf("%d", &a);
    printf("dobro = %d\n", (2 * *b));
    printf("triplo = %d\n", (3 * **c));
    printf("quadruplo = %d\n", (4 * ***d));

    return 0;
}