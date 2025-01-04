/*
Elabore um mês que, dado o número do mês, indica quantos dias têm esse mês.
obs: considere fevereiro como tendo 28 dias.
*/  

#include <stdio.h>

int main(){

    int mes;

    do{
        printf("Digite o número de um mês existente: \n");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        printf("Esse mês tem 31 dias.\n");
    else if (mes == 2)
        printf("Esse mês tem 28 dias.\n");
    else
        printf("Esse mês tem 30 dias.\n");

    return 0;
}