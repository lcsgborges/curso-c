/*
    Como escrever em arquivo texto com a função fputc():

    Modos de abertura de arquivos:

    w  -> escrita
    r  -> leitura
    a  -> anexar
    r+ -> leitura e escrita
    w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
    a+ -> leitura e escrita (adiciona ao final do arquivo)

    cabeçalho padrão: stdio.h
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *file; // ponteiro para manipular arquivo
    char letra;
    file = fopen("/home/lucas/Documents/cursoC/texto_teste.txt", "w"); //abre um arquivo, se o arquivo não existir, ele vai criar

    if(file) {
    printf("Digite um texto e pressione ENTER ao finalizar!\n");
    scanf("%c", &letra);
    while(letra != '\n'){
        fputc(letra, file); // escreve um caractere no arquivo
        scanf("%c", &letra);
    }
    fclose(file);
    }
    else
        printf("Erro\n");
    return 0;
}