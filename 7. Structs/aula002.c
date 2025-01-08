// Como criar uma struct com dados lidos do teclado:

#include <stdio.h>
#include <string.h>


typedef struct{

    int idade;
    char sexo;
    char nome[50];

} Pessoa;

int main(){

    Pessoa pessoa;

    printf("Digite seu nome: ");
    scanf("%50[^\n]", pessoa.nome);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite seu sexo: [m]asculino [f]eminino ");
    scanf(" %c", &pessoa.sexo);

    printf("Nome = %s\nIdade = %d\nSexo = %c\n", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}