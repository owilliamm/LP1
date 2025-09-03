// Crie um vetor de tamanho máximo fixo na função main, ex:
//     int vec[100];
// Crie uma função preenche que receba um vetor xs de inteiros, uma quantidade n e preencha o vetor xs com n números lidos do teclado:
//     void preenche (int* xs, int n);
// Crie uma função media que receba um vetor xs, a quantidade de elementos n no vetor xs e retorne a média entre todos os valores do vetor.
// Dentro das funções, use a notação de ponteiros em vez da de índices (* vs [])

// Crie um programa que leia um número e preencha o vetor vec com essa quantidade de elementos e em seguida calcule a média dos valores do vetor.

#include <stdio.h>

float media(int* xs, int n) {
    int soma = 0;
    for (int i = 0; i<n; i++) {
        soma += *(xs+i);
    }
    return soma/n;
}

void preenche(int* xs, int n) {
    int iteracao = 0; int numero = 0;
    for (int i = 0; i<n; i++) {
        printf("Digite um numero\n");
        scanf("%d", &numero);
        *(xs+i) = numero;
        iteracao++;
    }
    media(xs, n);
}

int main() {
    int vec[100]; int quantianumeros = 0;
    printf("Digite a quantia de numeros\n");
    scanf("%d", &quantianumeros);
    preenche(vec, quantianumeros);
    printf("Media: %.2f", media(vec, quantianumeros));
}