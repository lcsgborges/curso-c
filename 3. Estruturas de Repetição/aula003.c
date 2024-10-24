#include <stdio.h>

// FOR com incremento diferente de 'um':

int main(){

    // ex: listar os números impares de 0 até 100;

    int i;

    for (i = 1; i <= 100; i+=2) {// i = i + 2; 
        printf("%d ", i);
    }
    return 0;
}