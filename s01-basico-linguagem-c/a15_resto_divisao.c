// Operador de resto da divisão (%):

//Exemplo: o resto da divisão de 10 e 7 tem que ser 3.

#include <stdio.h>



int main (){

    int a = 10, b = 7;

    int resto = a % b;

    printf("Resto da divisão: %d\n", resto);

    if (a % 2 == 0) {
        printf("%d é par!\n", a);
    }
    
    return 0;
}