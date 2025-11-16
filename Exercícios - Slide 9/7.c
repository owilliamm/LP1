// Crie uma função que receba duas listas e retorne a concatenação das duas listas:
// struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2);

#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe (struct Caixa* caixa) {
    while (caixa != NULL) {
        printf("%d -> ", caixa->valor);
        caixa = caixa->prox;
    }
    printf("NULL");
}

struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2) {
    struct Caixa* inicio = l1;

    while (l1->prox != NULL) {
        l1 = l1->prox;
    }
    
    l1->prox = l2;

    return inicio;
}

int main() {
    struct Caixa c11; c11.valor = 1;
    struct Caixa c12; c12.valor = 3;
    struct Caixa c13; c13.valor = 9;
    struct Caixa c14; c14.valor = 7;
    
    struct Caixa c21; c21.valor = 10;
    struct Caixa c22; c22.valor = 12;
    struct Caixa c23; c23.valor = 14;
    struct Caixa c24; c24.valor = 16;

    c11.prox = &c12;
    c12.prox = &c13;
    c13.prox = &c14;
    c14.prox = NULL;

    c21.prox = &c22;
    c22.prox = &c23;
    c23.prox = &c24;
    c24.prox = NULL;

    exibe(concatena(&c11, &c21));
}