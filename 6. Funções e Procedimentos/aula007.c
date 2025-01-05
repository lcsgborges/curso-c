// Fazer uma função recursiva que calcula o fatorial de n;

// 5! = 5.4.3.2.1

#include <stdio.h>

int fatorial(int numero){
    
    if (numero == 1 || numero == 0){
        return 1;
    }

    return numero * fatorial(numero - 1);    
}


int main(){

    int n;

    printf("Digite um número positivo qualquer para calcular seu fatorial: ");
    scanf("%d", &n);
    
    printf("\nFatorial do número %d = %d\n", n, fatorial(n));

    return 0;
}