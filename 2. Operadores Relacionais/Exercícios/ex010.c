/*
Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é quilátero, isósceles ou escaleno. Caso contrário, seu programa deve informar "Não formam um triângulo."
*/

#include <stdio.h>

int main(){

    int a,b,c;

    printf("Digite três valores inteiros para serem os lados de um triângulo:\n");

    printf("Lado 1: \n");
    scanf("%d", &a);

    printf("Lado 2: \n");
    scanf("%d", &b);
    
    printf("Lado 3: \n");
    scanf("%d", &c);

    if (a + b < c || a + c < b || b + c < a) printf("Não formam um triângulo.\n");

    else{
        if (a == b && a == c) 
            printf("Esses lados foram um Triângulo Equilátero.\n");
        else if (a == b || a == c || b == c)
            printf("Esses lados formam um Triângulo Isósceles.\n");
        else
            printf("Esses lados formam um Triângulo Escaleno.\n");
    }

    return 0;
}