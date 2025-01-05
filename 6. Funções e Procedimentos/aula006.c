// Funções e procedimentos recursivos 

// um procedimento recursivo é um procedimento que chama ele mesmo.

// exemplo: imprimir todos os numeros de n até 0

// precisamos ter um ponto de parada.

#include <stdio.h>

void imprime(int x){ //ordem crescente 

    if (x == 0){
        printf("%d ", x);
    }
    else { 
        imprime(x-1);
        printf("%d ", x);
    }

}


void imprime2(int x){ // ordem decrescente.

    if (x == 0){
        printf("%d ", x);
    }
    else {
        printf("%d ", x);
        imprime2(x-1);
    }

}


int main(){

    int n;

    printf("Digite um número positivo qualquer: ");
    scanf("%d", &n);

    imprime(n);
    printf("\n");
    imprime2(n);

    return 0;
}