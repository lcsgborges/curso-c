#include <stdio.h>

// Operador ternário na linguagem C:

// condição ? verdadeiro : falso ;

int main(){

int a;

printf("Digite um número: \n");
scanf("%d", &a);

a < 0 ? printf("Negativo!\n") : printf("Positivo ou nulo!\n");

}