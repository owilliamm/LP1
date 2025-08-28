// Faça um programa que leia um número N e calcule o somatório a seguir:
// "A soma dos quadrados dos inteiros de 1 até N."

#include <stdio.h>

int main() {
    int soma = 0; int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        soma += i*i;
    }
    printf("%d", soma);
}