#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    struct no *esq, *dir;
    int dado;
} No;

No *criaNo(int valor) {
    No *novo = (No*) malloc(sizeof(No));
    novo->dado = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

No *insereNo(No *raiz, int valor) {
    if (raiz == NULL) {
        return criaNo(valor);
    }
    if (valor < raiz->dado) {
        raiz->esq = insereNo(raiz->esq, valor);
    } else {
        raiz->dir = insereNo(raiz->dir, valor);
    }
    return raiz;
}

void inOrder(No *raiz) {                 // em ordem (esquerda, raiz, direita)
    if (raiz) { // raiz != NULL
        inOrder(raiz->esq);
        printf("%d ", raiz->dado);
        inOrder(raiz->dir);
    }
}

void preOrder(No *raiz) {               // pré-ordem (raiz, esquerda, direita)
    if (raiz) {
        printf("%d ", raiz->dado);
        preOrder(raiz->esq);
        preOrder(raiz->dir);
    }
}

void postOrder(No *raiz) {             // pós-ordem (esquerda, direita, raiz)
    if (raiz) {
        postOrder(raiz->esq);
        postOrder(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

No* busca(No *raiz, int valor){
    if (raiz == NULL){
        return raiz;
    }
    if (valor == raiz->dado){
        return raiz;
    }
    else if(valor < raiz->dado){
        return busca(raiz->esq, valor);
    }
    else{
        return busca(raiz->dir, valor);
    }
}

int altura (No *raiz){
    if (raiz == NULL)
        return -1;
    else{
        int esq = altura(raiz->esq);
        int dir = altura(raiz->dir);
        if(esq > dir)
            return esq + 1;
        else
            return dir + 1;
    }
}

int qntdNo(No *raiz){
    if (raiz == NULL)
        return 0;
    else
        return 1 + qntdNo(raiz->esq) + qntdNo(raiz->dir);
}

No* maior(No *raiz){
    while(raiz->dir != NULL)
        raiz = raiz->dir;
    return raiz;
}

No* menor(No *raiz){
    while (raiz->esq != NULL)
        raiz = raiz->esq;
    return raiz;
}

int qntdFolhas(No *raiz){
    if (raiz == NULL)
        return 0;
    else{
        if (raiz->esq == NULL && raiz->dir == NULL){
            return 1;
        }
        return qntdFolhas(raiz->esq) + qntdFolhas(raiz->dir);
    }
}

No* remove_antecessor(No *raiz){
    No *max = raiz->esq;
    No *pai_max = raiz;
    while (max->dir != NULL){
        pai_max = max;
        max = max->dir;
    }
    raiz->dado = max->dado;
    if(pai_max->dir == max){
        pai_max->dir = max->esq;
    }
    else{
        pai_max->esq = max->esq;
        free(max);
    }
}

No *remover(No *raiz, int valor){
    if(raiz == NULL){
        printf("Valor não encontrado\n");
        return NULL;
    }
    if (valor < raiz->dado){
        raiz->esq = remover(raiz->esq, valor);
    }
    else if (valor > raiz->dado){
        raiz->dir = remover(raiz->dir, valor);
    }
    else{
        if (raiz->esq == NULL)
            return raiz->dir;
        else if (raiz->dir == NULL)
            return raiz->esq;
        else{
            remove_antecessor(raiz);
            return raiz;
        }
    }   
}

int main() {
    No *raiz = NULL, *aux;
    int opcao, valor, percurso;

    do {
        printf("\n1. Inserir elemento\n2. Imprimir árvore\n3. Buscar elemento\n4. Altura da árvore\n5. Quantidade de nós\n6. Menor elemento\n7. Maior elemento\n8. Quantidade de nós folhas\n9. Remover um nó\n0. Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            printf("Digite o número a ser inserido: ");
            scanf("%d", &valor);
            raiz = insereNo(raiz, valor); // Atualiza a raiz
            break;
        case 2:
            printf("Qual o tipo de impressão:\n1. EM ORDEM\n2. PRÉ-ORDEM\n3. PÓS-ORDEM\n");
            scanf("%d", &percurso);
            switch (percurso) {
            case 1:
                printf("Árvore em ordem: ");
                inOrder(raiz);
                printf("\n");
                break;
            case 2:
                printf("Árvore pré-ordem: ");
                preOrder(raiz);
                printf("\n");
                break;
            case 3:
                printf("Árvore pós-ordem: ");
                postOrder(raiz);
                printf("\n");
                break;
            default:
                if (percurso != 0) {
                    printf("Opção inválida\n");
                }
                break;
            }
            break;
        case 3:
            printf("Qual elemento você deseja buscar: ");
            scanf("%d", &valor);
            aux = busca(raiz, valor);
            if(aux == NULL){
                printf("Elemento não está presente na árvore.");
            }
            else{
                printf("O elemento %d está presente na lista.", aux->dado);
            }
            break;
        case 4:
            printf("Altura da árvore: %d\n", altura(raiz));
            break;
        case 5:
            printf("Quantidade de nós da árvore: %d\n", qntdNo(raiz));
            break;
        case 6:
            printf("Menor elemento: %d\n", menor(raiz)->dado);
            break;
        case 7:
            printf("Maior elemento: %d\n", maior(raiz)->dado);
            break;
        case 8: 
            printf("Quantidade de nós folhas: %d\n", qntdFolhas(raiz));
            break;
        case 9:
            printf("Digite o elemento que deseja remover: ");
            scanf("%d", &valor);
            aux = remover(raiz, valor);
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 0);
    return 0;
}