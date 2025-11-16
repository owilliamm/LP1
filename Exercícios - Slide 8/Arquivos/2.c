// Leia o arquivo do exercício 1, caractere a caractere, para uma string (máximo de 25 caracteres).
// 	Exiba na tela a string lida.

#include <stdio.h>

int main() {
	int tamanhopalavra = 26; int i = 0;
	char palavra[tamanhopalavra]; char letra;

    FILE* arq = fopen("1.txt", "rb");

	for (i = 0; i<tamanhopalavra-1; i++) {
		if ((letra = fgetc(arq)) != EOF) {
			palavra[i] = letra;
		}
	}
	
	palavra[i] = '\0';

	fclose(arq);

	printf("%s", palavra);
}
