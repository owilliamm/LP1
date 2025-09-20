// Declare uma struct para representar as características/propriedades de um atleta do seu esporte favorito.
// Crie uma função que exiba as propriedades de maneira bem organizada e formatada.
// Crie três exemplos de atletas variando as propriedades e teste a função de exibição.

#include <stdio.h>

struct Atleta {
	char nome[20];
	float alturametros;
	int peso;
};

void exibir(struct Atleta atleta1, struct Atleta atleta2, struct Atleta atleta3) {
	printf("=====================\n");
	printf("Nome: "); printf("%s\n", atleta1.nome);
	printf("Altura: "); printf("%.2f", atleta1.alturametros); printf("m\n");
	printf("Peso: "); printf("%d", atleta1.peso); printf("kg\n");
    printf("=====================\n");
    printf("Nome: "); printf("%s\n", atleta2.nome);
    printf("Altura: "); printf("%.2f", atleta2.alturametros); printf("m\n");
    printf("Peso: "); printf("%d", atleta2.peso); printf("kg\n");
    printf("=====================\n");
    printf("Nome: "); printf("%s\n", atleta3.nome);
    printf("Altura: "); printf("%.2f", atleta3.alturametros); printf("m\n");
    printf("Peso: "); printf("%d", atleta3.peso); printf("kg\n");
    printf("=====================\n");
}

int main() {
	struct Atleta Arrascaeta = {"Arrascaeta", 1.74, 73};
	struct Atleta Rebeca = {"Rebeca Andrade", 1.55, 46};
	struct Atleta Rayssa = {"Rayssa Leal", 1.60, 47};

	exibir(Arrascaeta, Rebeca, Rayssa);
}