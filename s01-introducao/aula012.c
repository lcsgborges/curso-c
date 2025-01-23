#include <stdio.h>

// Como aumentar o espaço de memória para um int com o operador long:

int main(){

    // long int = 8 bytes na teoria, mas muda de máquina para máquina.
    // 8 x 8 = 64 bits.

    printf("Tamanho em memória de um long int: %ld bytes.\n", sizeof(long int));

    // ld ou li = máscara para long int
    // lld ou lli = máscara para long long int 
}