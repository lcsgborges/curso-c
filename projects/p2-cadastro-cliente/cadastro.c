#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Adicionar mais funcionalidades depois: validador de cpf, excluir cliente, editar cliente, ...

typedef struct {
    int dia, mes, ano;
} DataNasc;

typedef struct {
    char nome[50], numero_telefone[12];
    DataNasc data_nascimento; 
    long long cpf;
} Pessoa;

Pessoa cria_cliente() {
    Pessoa p;

    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';  

    printf("Telefone: ");
    fgets(p.numero_telefone, sizeof(p.numero_telefone), stdin);
    p.numero_telefone[strcspn(p.numero_telefone, "\n")] = '\0';  

    printf("Data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &p.data_nascimento.dia, &p.data_nascimento.mes, &p.data_nascimento.ano);

    printf("CPF: ");
    scanf("%lld", &p.cpf);
    getchar();  

    return p;
}

void salvar_cliente(Pessoa p, const char* caminho_arquivo) {
    FILE* file = fopen(caminho_arquivo, "a");  
    if (file == NULL) {
        perror("Erro ao abrir arquivo");
        return;
    }

    fprintf(file, "Nome: %s\n", p.nome);
    fprintf(file, "Telefone: %s\n", p.numero_telefone);
    fprintf(file, "Data de nascimento: %02d/%02d/%04d\n", 
            p.data_nascimento.dia, p.data_nascimento.mes, p.data_nascimento.ano);
    fprintf(file, "CPF: %lld\n\n", p.cpf);

    fclose(file);
    printf("Cliente salvo com sucesso!\n");
}

void visualiza_cliente(const char* caminho_arquivo){
    char letra;
    FILE *file = fopen(caminho_arquivo, "r");
    if (file == NULL){
        printf("Erro ao abrir arquivo.\n");
        return;
    }
    while (!feof(file)){           
        letra = fgetc(file);
        printf("%c", letra);
    }
}


int main() {
    int opcao;
    const char* caminho_arquivo = "/home/lcsgg/Documents/curso-c/projects/p2-cadastro-cliente/clientes.txt";

    do {
        printf("1. Cadastrar cliente\n2. Clientes cadastrados\n0. Sair\nEscolha: ");
        scanf("%d", &opcao);
        getchar();  

        if (opcao == 1) {
            Pessoa p = cria_cliente();
            salvar_cliente(p, caminho_arquivo);
        } 
        else if (opcao == 2) {
            visualiza_cliente(caminho_arquivo);
        }
        else
            printf("Opção inválida!\n");
            
    } while (opcao != 0);

    return 0;
}
