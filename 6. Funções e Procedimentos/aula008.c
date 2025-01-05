// Função para retorna o n-ésimo termo da sequência de fibonacci:

// fibonacci = 1 1 2 3 5 8 13 ...

#include <stdio.h>

int fibonacci(int x){

    if (x == 1 || x == 2){
        return 1;
    }

    return fibonacci(x - 1) + fibonacci(x - 2);    
}

int main(){

    int n;

    printf("Digite um número n para saber seu n-ésimo termo na sequência de Fibonacci: ");
    scanf("%d", &n);

    printf("O n-ésimo termo de %d é o %d\n", n, fibonacci(n));

    return 0;
}