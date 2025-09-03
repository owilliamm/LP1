// Implemente a função tamanho:
//    Recebe uma string
//    Retorna a quantidades de caracteres da string
//			int tamanho (char* str);

// Obviamente, não use a função strlen.

#include <stdio.h>

int tamanho(char* str) {
        int caracteres = 0;
        int iteracao = 0;
        while(str[iteracao] != '\0') {
                caracteres++;
                iteracao++;
        }
        return caracteres;
}

int main() {
	char palavra[100];
	printf("Escreva uma palavra\n");
	scanf("%s", palavra);
	printf("Tamanho: %d", tamanho(palavra));
}
