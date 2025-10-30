// Escreva uma função tamanho que receba o nome de um arquivo e retorne o seu tamanho. Como uma restrição didática, a função não pode usar ftell.

#include <stdio.h>
#include <assert.h>

int tamanho(char* nome) {
    FILE* arq = fopen(nome, "rb");
    assert(arq);
    int tamanho = 0;

    while (fgetc(arq) != EOF) tamanho++;

    fclose(arq);
    return tamanho;
} 

int main() {
    char* nomearquivo = "23.txt";

    printf("Tamanho do arquivo: %d bytes", tamanho(nomearquivo));
}