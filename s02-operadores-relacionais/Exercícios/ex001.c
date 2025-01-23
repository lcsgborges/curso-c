/*
Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.
*/

#include <stdio.h>

int main(){

    int a, b, c;

    printf("Digite três números:\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a==b && a==c) printf("Os três números são iguais.\n");

    else
    {
    if (a > b && a > c) {
        if (b > c){
            printf("%d é o maior e %d é o menor.\n", a, c);
        }
        else if (c > b){
            printf("%d é o maior e %d é o menor.\n", a, b);
        }
        else
            printf("%d é o maior e os outros dois números são iguais.", a);
    }
    else if (b > a && b > c){
        if (a > c){
            printf("%d é o maior e %d é o menor.\n", b, c);
        }
        else if (c> a){
            printf("%d é o maior e %d é o menor.\n", b, a);
        }
        else{
            printf("%d é o maior e os outros dois números são iguais.", b);
        }
    }

    else {
        if (a > b) {
            printf("%d é o maior e %d é o menor.\n", c, b);
        }
        else if (b > a) {
            printf("%d é o maior e %d é o menor.\n", c, a);
        }
        else {
            printf("%d é o maior e os outros dois números são iguais.", c);
        }
    }  }  
    return 0;
}