#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *proximo;
} No;

typedef struct fila {
    No *primeiro;
} Fila;

void criaFila(Fila *fila) {
    fila->primeiro = NULL;
}

void insereFila(Fila *f, int dado) {
    No *node = (No *)malloc(sizeof(No));
    if (node == NULL) {
        printf("Não foi possível adicionar o elemento na fila.\n");
        return;
    }
    node->dado = dado;
    node->proximo = NULL; // O último da fila sempre aponta para NULL

    if (f->primeiro == NULL) { // Se a fila está vazia, o novo nó é o primeiro
        f->primeiro = node;
    } else { 
        No *aux = f->primeiro;              // Caso contrário, percorre até o final e adiciona o nó
        while (aux->proximo != NULL) {
            aux = aux->proximo;
        }
        aux->proximo = node;
    }
}

int removeFila(Fila *f) {
    if (f->primeiro == NULL) {
        printf("Erro: a fila está vazia.\n");
        return -1; // Indica erro
    }
    No *remove = f->primeiro;
    int dado = remove->dado;
    f->primeiro = remove->proximo;
    free(remove);
    printf("Removendo elemento da fila: %d\n", dado);
    return dado;
}

void printFila(Fila *f) {
    if (f->primeiro == NULL) {
        printf("Fila vazia\n");
        return;
    }
    No *aux = f->primeiro;
    printf("Elementos da fila:\n");
    while (aux != NULL) {
        printf("%d\n", aux->dado);
        aux = aux->proximo;
    }
    free(aux);
}

int main() {
    Fila *f = (Fila *)malloc(sizeof(Fila));
    if (f) {
        criaFila(f);
        insereFila(f, 10);
        insereFila(f, 20);
        insereFila(f, 30);
        printFila(f);
        removeFila(f);
        removeFila(f);
        insereFila(f, 40);
        printFila(f);
        removeFila(f);
        printFila(f);
        removeFila(f);
        removeFila(f);
        printFila(f);
    } else {
        printf("Erro ao criar fila.\n");
    }
    free(f);
    return 0;
}