/*
Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no calendário. Casso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem "Meŝ inválido".
*/

#include <stdio.h>

int main(){

    int mes;

    printf("Digite o número do mês: \n");
    scanf("%d", &mes);

    switch (mes){
        case 1:
            printf("MÊS = JANEIRO");
            break;
        case 2:
            printf("MÊS = FEVEREIRO\n");
            break;
        case 3:
            printf("MÊS = MARÇO");
            break;
        case 4:
            printf("MÊS = ABRIL\n");
            break;
        case 5:
            printf("MÊS = MAIO\n");
            break;
        case 6:
            printf("MÊS = JUNHO\n");
            break;
        case 7:
            printf("MÊS = JULHO\n");
            break;
        case 8:
            printf("MÊS = AGOSTO\n");
            break;
        case 9:
            printf("MÊS = SETEMBRO\n");
            break;
        case 10:
            printf("MÊS = OUTUBRO\n");
            break;
        case 11:
            printf("MÊS = NOVEMBRO\n");
            break;
        case 12:
            printf("MÊS = DEZEMBRO\n");
            break;
        default:
            printf("MÊS INVÁLIDO!\n");
            break;
    } 

    return 0;
}