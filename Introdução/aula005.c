#include <stdio.h>

// Lendo caracteres:

int main()
{
    char sexo;

    sexo = 'm'; // aspas simples -> caracteres

    printf("Qual seu sexo? \n[m]asculino [f]eminino\n");

    scanf("%c", &sexo);

    printf("Sexo do paciente: %c\n", sexo);

    return 0;
}
