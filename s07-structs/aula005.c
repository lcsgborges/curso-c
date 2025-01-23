// Como criar um procedimento que recebe uma struct como parâmetro:

#include <stdio.h>

typedef struct{
    int dia, mes, ano;
} DataNasc;

typedef struct{
    int idade;
    char sexo;
    char nome[50];
    DataNasc dataNasc;
} Pessoa;

void imprimePessoa(Pessoa p1){

    printf("Nome: %s\n", p1.nome);

    printf("Sexo: %c\n", p1.sexo);
    
    printf("Data de nascimento: %d / %2d / %d\n", p1.dataNasc.dia, p1.dataNasc.mes, p1.dataNasc.ano);

    printf("Idade: %d", p1.idade);
}

int main(){

    Pessoa pessoa1;

    printf("Digite seu nome: ");
    scanf("%50[^\n]", pessoa1.nome);

    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);

    printf("Qual seu sexo? [m]asculino [f]eminino: ");
    scanf(" %c", &pessoa1.sexo);

    printf("Qual sua data de nascimento? Digite no formato (dd/mm/aaaa) sem as barras, use apenas espaço: ");
    scanf("%d %d %d", &pessoa1.dataNasc.dia, &pessoa1.dataNasc.mes, &pessoa1.dataNasc.ano);

    imprimePessoa(pessoa1);

    return 0;
}