#include <stdio.h>

// Operador lógico e (&&): verdade somente quando todas condições forem verdadeiras.

int main(){
    // exemplo: alistamento militar BR (+18 e sexo masculino)

    int idade;
    char sexo;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite seu sexo: [m]asculino [f]eminino\n");
    scanf(" %c", &sexo);

    if (idade <= 18 && sexo == 'm') {
        printf("Você precisará se alistar!\n");
    }
    else
        printf("Você não precisa se alistar!\n");

    return 0;
}