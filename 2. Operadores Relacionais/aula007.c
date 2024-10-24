#include <stdio.h>

// Operador lógico de negação (!): inverte valores

int main() {
    int condicao = 0;  // Condição inicial é falsa (0)
    
    // Usando o operador de negação para inverter a condição
    if (!condicao) {
        printf("A condição é falsa, então esta mensagem será exibida.\n");
    } else {
        printf("A condição é verdadeira, então esta mensagem não será exibida.\n");
    }

    return 0;
}