// Altere os exercícios 1 e 4 para usar a função a seguir a ser definida:
//     void escreva_string (FILE* f, char* str) { ... }
//     A função recebe um arquivo e uma string e escreve a string no arquivo, caractere a caractere.

#include <stdio.h>
#include <string.h>

void escreva_string (FILE* arquivo, char* str) {
	for (int i = 0; i<(int)strlen(str); i++) {
		fputc(str[i], arquivo);
	}
}

int main() {
	char minhastring[201];
	
	FILE* arq = fopen("5.txt", "wb");

	printf("Escreva uma string: ");
	scanf("%200s", minhastring);

	escreva_string(arq, minhastring);
}
