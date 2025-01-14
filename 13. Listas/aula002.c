// Lista duplamente encadeada: (continuar depois)

#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no *proximo, *anterior;
}No;
typedef struct lista{
    No *inicio;
} Lista;

void criaLista(Lista *lista){
    lista->inicio = NULL;
}

void insereElementoInicio(int elem, Lista *lista){
    No *novo = (No*) malloc(sizeof(No));
    if (novo == NULL){
        printf("Erro ao alocar memória\n");
        return;
    }
    else{
        novo->valor = elem;
        if(lista->inicio == NULL){
            lista->inicio = novo;
            novo->proximo = NULL;
            novo->anterior = lista;
        }
        else{
            novo->proximo = lista->inicio;
            novo->anterior = lista;
            lista->inicio->anterior = novo;
            lista->inicio = novo;
        }
    }
}

int main(){
    Lista *lista = (Lista*) malloc(sizeof(Lista));
    criaLista(lista);
    insereElementoInicio(10, lista);
    return 0;
}