// Considere a struct a seguir:
// struct Pessoa {
//     int  idade;
//     char nome[64];
//     int  peso;
// };

// Crie um programa com um vetor de Pessoa de tamanho 10.
// Crie uma função para preencher uma Pessoa.
// Crie um loop para preencher o vetor.
// Use a escrita e leitura de arquivos no modo binário para gravar e recuperar o vetor.
//     Crie funções específicas para ler e escrever uma Pessoa do arquivo.

#include <stdio.h>

struct Pessoa {
	int idade;
	char nome[64];
	int peso;
};


void preencher(struct Pessoa* pessoa) {
	printf("Idade: ");	scanf("%d", &pessoa->idade);
	printf("Nome: ");	scanf("%63s", pessoa->nome);
	printf("Peso: ");	scanf("%d", &pessoa->peso);
}


void escreveruma(struct Pessoa* pessoa, FILE* arquivo) {
	
	fwrite(&pessoa->idade, sizeof(int), 1, arquivo);
	
	for (int i = 0; ; i++) {
		fwrite(&pessoa->nome[i], sizeof(char), 1, arquivo);
		if (pessoa->nome[i] == '\0') break;
	}

	fwrite(&pessoa->peso, sizeof(int), 1, arquivo);
}


void escrevervetor(struct Pessoa* vetor, int tamanho, FILE* arquivo) {
	for (int i = 0; i<tamanho; i++) {
		escreveruma(&vetor[i], arquivo);
	}
}


void leruma(struct Pessoa* pessoa, FILE* arquivo) {
	
	fread(&pessoa->idade, sizeof(int), 1, arquivo);
	
	int i = 0; 
	char c; 
	while (c != '\0') {
		fread(&c, sizeof(char), 1, arquivo);
		pessoa->nome[i] = c;
		i++;
	}

	fread(&pessoa->peso, sizeof(int), 1, arquivo);
}

void lervetor(struct Pessoa* vetor, int tamanho, FILE* arquivo) {
	for (int i = 0; i<tamanho; i++) {
		leruma(&vetor[i], arquivo);
		printf("===================\n");
		printf("Idade: %d\nNome: %s\nPeso: %d\n", vetor[i].idade, vetor[i].nome, vetor[i].peso);
	}
}

int main() {
	int n = 1; int escolha;
	struct Pessoa v[n];

	printf("1-Preencher vetor e escrever no arquivo, 2-Ler do arquivo, 3-Sair:\n");
	scanf("%d", &escolha);

	if (escolha == 1) {
		for (int i = 0; i<n; i++) {
			printf("Pessoa (%d)\n", i+1);
			preencher(&v[i]);
		}
		FILE* arq = fopen("7.bin", "wb");
		escrevervetor(v, n, arq);
		fclose(arq);
	}
	
	else if (escolha == 2) {
		FILE* arq = fopen("7.bin", "rb");
		lervetor(v, n, arq);
		fclose(arq);
	}
}
