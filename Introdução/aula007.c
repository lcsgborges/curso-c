#include <stdio.h>

// Como ler vários valores com a função scanf():

int main()
{
    int num1, num2, num3;

    printf("Digite três valores inteiros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Valores lidos: %d, %d, %d\n", num1, num2, num3);

    return 0;
}
