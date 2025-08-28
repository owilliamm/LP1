// Faça um programa que leia números continuamente até que seja digitado 0. 
// Ao final, o programa deve exibir a soma de todos os números lidos.

#include <stdio.h>

int main() {
    int n = 1; int soma = 0;

    while (n != 0) {
        scanf("%d", &n);
        soma += n;
    }

    printf("%d", soma);
}