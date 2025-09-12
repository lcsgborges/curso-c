/*
Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a conversão para horas, minutos e segundos.
Ex:
entrada: 3672
saida: 1:1:12
*/

#include <stdio.h>

int main(){
    int tempo, horas, minutos, segundos;

    printf("Digite um tempo em segundos: \n");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf ("Esse tempo equivale a (hr:min:seg): %d:%d:%d\n", horas, minutos, segundos);

    return 0;
}