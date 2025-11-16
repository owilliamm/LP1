// Sem usar um loop (while, for, etc), escreva um programa que adicione o caractere |meio| exatamente no meio de um arquivo dado (mas desconhecido).
// Dica: Use o modo r+ para ler e escrever no arquivo.

#include <stdio.h>
#include <assert.h>

int tamanho(char* Nome) {
    FILE* arq = fopen(Nome, "rb");
    assert(arq);
    int tamanho = 0;

    while (fgetc(arq) != EOF) tamanho++;

    fclose(arq);
    return tamanho;
}

void adicionarnomeio(char* Nome) {
    int meio = tamanho(Nome)/2;
    FILE* arq = fopen(Nome, "r+");

    char primeirametade[meio];
    char segundametade[meio];
    fread(primeirametade, 1, meio, arq);
    fread(segundametade, 1, meio, arq);

    arq = fopen(Nome, "r+");
    fwrite(primeirametade, 1, meio, arq);
    fwrite("|meio|", 1, 6, arq);
    fwrite(segundametade, 1, meio, arq);
    fclose(arq);
}

int main() {
    char* nomearquivo = "23.txt";
    adicionarnomeio(nomearquivo);
}