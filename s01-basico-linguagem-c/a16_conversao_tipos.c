#include <stdio.h>

// Casting ou conversão de tipos na linguagem C:

int main(){

    // int -> float
    // (float)nome da variável  

    int a = 10; // tipo real
    int b = 20;
    
    printf("Divisão entre %d e %d = %.2f\n", a, b, (float)a/b);

    float pi = 3.1415;

    printf("pi inteiro = %d\n", (int)pi);

    return 0;
}