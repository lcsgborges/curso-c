// Casting ou conversão de tipos na linguagem C:

// Para transformar um tipo em outro, usamos (tipo) valor;

// (int) '1';

#include <stdio.h>


int main(){

    int a = 10;
    int x = 5;
    
    a = (float) a;
    x = (float) x;  
    
    printf("Divisão entre %d e %d = %.2f\n", a, x, (float)a/x);

    float pi = 3.1415;

    printf("pi inteiro = %d\n", (int)pi);

    return 0;
}