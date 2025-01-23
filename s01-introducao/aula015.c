#include <stdio.h>

// Operadores matemáticos simples:

// soma +
// subtração -
// divisão /
// multiplicação *

int main(){

    int x = 5, y = 10;

    int soma = x + y;
    int subtracao = x - y;
    int multiplicacao = x * y;
    float divisao = x / y;

    printf("x = %d, y = %d\n", x, y);
    printf("Adição = %d\n", soma);
    printf("Subtração = %d\n", subtracao);
    printf("Multiplicação = %d\n", multiplicacao);
    printf("Divisão = %.2f\n", divisao); // inteiro por inteiro da um número inteiro, logo preciso converter um dos numeros para float para dar float.

    return 0;
}