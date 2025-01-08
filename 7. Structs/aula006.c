// Como criar uma função que retorna uma struct:

#include <stdio.h>

typedef struct{
    int dia, mes, ano;
} DataNasc;

typedef struct{
    int idade;
    char nome[50];
    char sexo;
    DataNasc dataNasc;
} Pessoa;


Pessoa lerPessoa(){

    Pessoa p1;

    printf("Digite seu nome: ");
    scanf("%50[^\n]", p1.nome);

    printf("Digite sua idade: ");
    scanf("%d", &p1.idade);

    printf("Qual seu sexo? [m]asculino [f]eminino: ");
    scanf(" %c", &p1.sexo);

    printf("Qual sua data de nascimento? Digite no formato (dd/mm/aaaa) sem as barras, use apenas espaço: ");
    scanf("%d %d %d", &p1.dataNasc.dia, &p1.dataNasc.mes, &p1.dataNasc.ano);

    return p1;
}


void imprimePessoa(Pessoa p1){

    printf("Nome: %s\n", p1.nome);

    printf("Sexo: %c\n", p1.sexo);
    
    printf("Data de nascimento: %d / %d / %d\n", p1.dataNasc.dia, p1.dataNasc.mes, p1.dataNasc.ano);

    printf("Idade: %d", p1.idade);
}


int main(){

    Pessoa pessoa;

    pessoa = lerPessoa();

    imprimePessoa(pessoa);

    return 0;
}