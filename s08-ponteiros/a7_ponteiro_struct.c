// Como criar um ponteiro para uma struct:

#include <stdio.h>

typedef struct{
    int dia, mes, ano;
} Data;

void imprimeData(Data *p){

    printf("Data: %d/%d/%d\n", p->dia, p->mes, p->ano);

    p->dia = 20;

    printf("Data: %d/%d/%d\n", p->dia, p->mes, p->ano);
}

int main(){

    Data data1; // inicializando uma data do tipo Data
    Data *p; // iniciliazando um ponteiro do tipo Data
    p = &data1; // ponteiro que aponta para minha variavel data1

    printf("endereço de data:         %p\n", &data1);

    printf("conteudo armazenado em p: %p\n", p);

    data1.dia = 10;
    data1.mes = 12;
    data1.ano = 2000;

    imprimeData(p);

    p->dia = 25; // mexendo em ponteiros, mexe no escopo global;

    printf("Data: %d/%d/%d\n", p->dia, p->mes, p->ano);

    // usar ponto: quando tiver manipulando a variavel do tipo criado;

    // usar seta: quando tiver manipulando o ponteiro do tipo criado;

    return 0;
}