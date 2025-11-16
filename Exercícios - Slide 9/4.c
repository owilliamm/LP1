// Crie uma função que receba uma lista e um valor inteiro e retorne se o valor está contido na lista:
// int contem (struct Caixa* lista, int valor);

#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int contem (struct Caixa* lista, int valor) {
    if (lista == NULL) return NULL;

    while (lista != NULL) {
        if (lista->valor == valor) return 1;
        lista = lista->prox;
    }
    
    return 0;
}

int main() {
    struct Caixa c1; c1.valor = 1;
    struct Caixa c2; c2.valor = 3;
    struct Caixa c3; c3.valor = 9;
    struct Caixa c4; c4.valor = 7;
    struct Caixa c5; c5.valor = 5;

    c1.prox = &c2;
    c2.prox = &c3;
    c3.prox = &c4;
    c4.prox = &c5;
    c5.prox = NULL;

    printf("%d", contem(&c1, 3));
}