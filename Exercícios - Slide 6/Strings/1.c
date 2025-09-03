// Implemente a função tamanho:
//    Recebe uma string
//    Retorna a quantidades de caracteres da string
//			int tamanho (char* str);

// Obviamente, não use a função strlen.

#include <stdio.h>

int tamanho(char* str) {
	int coisas = 0;
	int i = 0;
	while(str[i] != '\0') {
		coisas++;
		i++;
	}
	return coisas;
}


int main() {
	char palavra[100];
	scanf("%s", palavra);
	printf("%d", tamanho(palavra));
}
