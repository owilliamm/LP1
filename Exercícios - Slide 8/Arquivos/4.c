// Leia 10 strings com scanf (máximo de 25 caracteres) para um vetor de strings.
// Escreva cada string para um arquivo, caractere a caractere, usando um for dentro de outro for.

#include <stdio.h>
#include <string.h>

int main() {
	char vstrings[10][26];

	FILE* arq = fopen("4.txt", "wb");

	for (int i = 0; i<10; i++) {
		printf("Digite uma string (%d): ", i+1);
		scanf("%25s", vstrings[i]);
	}
	
	for (int i = 0; i<10; i++) {
		for (int j = 0; j<(int)strlen(vstrings[i]); j++) {
		fputc(vstrings[i][j], arq);
		}
		fputc('\n', arq);
	}

	fclose(arq);
}
