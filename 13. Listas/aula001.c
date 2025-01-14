// Trabalhando com listas simplesmente encadeadas:

#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    struct no *prox;
    int valor;
} No;

typedef struct lista{
     struct no *head;
} Lista;

void cria_lista(Lista *lista){
    lista->head = NULL;
}

void insere_elemento_inicio(int elem, Lista *lista){
    No *novo = (No*) malloc(sizeof(No));

    if (novo == NULL){
        printf("Não foi possível alocar memória para esse elemento.\n");
    }
        novo->valor = elem;
        novo->prox = lista->head;
        lista->head = novo;
}

void insere_elemento_fim(int elem, Lista *lista){
    No *novo = (No*) malloc(sizeof(No));
    No *aux = lista->head;
    novo->prox == NULL;
    novo->valor = elem;

    if (novo == NULL){
        printf("Não foi possível alocar memória para esse elemento.\n");
        return;
    }
    if (lista->head == NULL){
        lista->head = novo;
        return;
    }
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = novo;
}

void printLista(Lista *lista){
    No *aux = lista->head;
    if (lista->head == NULL){
        printf("Lista vazia.\n");
    }
    else{
        printf("\nÍnício da Lista: ");
        while(aux != NULL){
            printf("%d ", aux->valor);
            aux = aux->prox;
        }
        printf("\n");
        free(aux);
    }
}

void insere_elemento_meio(int elem, int ant, Lista *lista){
    No *novo = (No*) malloc(sizeof(No));
    No *aux = lista->head;
    novo->valor = elem;
    if(novo == NULL){
        printf("Erro ao alocar memória para este elemento\n");
        return;
    }
    if(lista->head == NULL){
        printf("Lista vazia.\n");
        novo->prox = lista->head;
        lista->head = novo;
    }
    else{
        while(aux->valor != ant){
            aux = aux->prox;
        }
            novo->prox = aux->prox;
            aux->prox = novo;
    }
}

void remove_inicio(Lista *lista){
    No *aux = lista->head;
    lista->head = aux->prox;
    free(aux);
}

void remove_fim(Lista *lista){
     if (lista->head == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    No *aux = lista->head;
    // Caso especial: se a lista tem apenas um elemento
    if (aux->prox == NULL) {
        free(aux);
        lista->head = NULL; // Atualiza o head para NULL
        return;
    }
    while(aux->prox->prox != NULL){
        aux = aux->prox;
    }
    free(aux->prox);
    aux->prox = NULL;
}

void removeElemento(int elem, Lista *lista) {
    // Caso 1: Lista vazia
    if (lista->head == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    No *aux = lista->head;
    No *anterior = NULL;
    // Caso 2: O elemento está no primeiro nó
    if (aux->valor == elem) {
        lista->head = aux->prox; // Atualiza o início da lista
        free(aux);               // Libera o nó removido
        return;
    }
    // Caso 3: Elemento no meio ou no fim
    while (aux != NULL && aux->valor != elem) {
        anterior = aux;   // Guarda o nó anterior
        aux = aux->prox;  // Avança para o próximo nó
    }
    // Se o elemento não foi encontrado
    if (aux == NULL) {
        printf("Elemento %d não encontrado na lista.\n", elem);
        return;
    }
    anterior->prox = aux->prox; // Atualiza o ponteiro do nó anterior
    free(aux);                  // Libera a memória do nó removido
}

void buscaElemento(int elem, Lista *lista) {
    // Verifica se a lista está vazia
    if (lista->head == NULL) {
        printf("Lista vazia.\n");
        return;
    }
    No *aux = lista->head;
    // Percorre a lista procurando o elemento
    while (aux != NULL) {
        if (aux->valor == elem) {
            printf("Elemento %d está presente na lista.\n", elem);
            return;
        }
        aux = aux->prox;
    }
    // Se percorreu toda a lista e não encontrou o elemento
    printf("Elemento %d não está presente na lista.\n", elem);
}

int main(){
    Lista *l = (Lista*) malloc(sizeof(Lista));
    int escolha, num, ant;
    cria_lista(l);

    do
    {
        printf("\n1. Inserir no início\n2. Inserir no meio\n3. Inserir no fim\n4. Remover do início\n5. Remover do fim\n6. Remover um elemento específico\n7. Imprimir lista\n8. Buscar elemento na lista\n0. Sair\n");
        scanf("%d", &escolha);
        switch (escolha) {
        case 1:
            printf("Digite o número: ");
            scanf("%d", &num);
            insere_elemento_inicio(num, l);
            break;
        case 2:
            printf("Digite o número: ");
            scanf("%d", &num);
            printf("Deseja colocar o novo número após qual número da lista? \n");
            printLista(l);
            scanf("%d", &ant);
            insere_elemento_meio(num, ant, l);
            break;
        case 3:
            printf("Digite o número: ");
            scanf("%d", &num);
            insere_elemento_fim(num, l);
            break;
        case 4:
            remove_inicio(l);
            break;
        case 5:
            remove_fim(l);
            break;
        case 6:
            printLista(l);
            printf("Digite qual elemento deseja excluir: ");
            scanf("%d", &num);
            removeElemento(num, l);
        case 7:
            printLista(l);
            break;
        case 8:
            printf("Digite o elemento que deseja buscar: ");
            scanf("%d", &num);
            buscaElemento(num, l);
            break;
        default:
            if (escolha != 0){
                printf("Opção inválida!\n");
            }
            break;
        }
    } while (escolha != 0);
    return 0;
}