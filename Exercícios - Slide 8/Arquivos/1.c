// Leia uma string com scanf (máximo de 25 caracteres).
// Escreva a string para um arquivo, caractere a caractere, usando um for.
//     A função strlen retorna o tamanho de uma string.
//     É necessário incluir a biblioteca string.h.

#include <stdio.h>
#include <string.h>

void escreva_string (FILE* arquivo, char* str) {
	for (int i = 0; i<(int)strlen(str); i++) {
		fputc(str[i], arquivo);
	}
}

int main() {
	char string[26] = "";

	printf("Escreva uma string (max 25 letras): "); scanf("%25s", string);

	FILE* arq = fopen("1.txt", "wb");

	escreva_string(arq, string);

	fclose(arq);
}
