// Crie uma função que receba uma lista ordenada e um valor inteiro a ser inserido na lista. A função deve retornar a lista modificada que deve se manter ordenada:
// struct Caixa* insere (struct Caixa* lista, int valor);

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

// impossível continuar sem malloc
struct Caixa* insere (struct Caixa* lista, int valor) {
    struct Caixa* inicio = lista;
    struct Caixa* antes = lista;
    struct Caixa* apos = lista;
    struct Caixa* p; //

    apos = apos->prox;
    p->valor = valor;

    while (apos != NULL && apos->valor < valor) {
        antes = apos;
        apos = apos->prox;
    }

    if (antes == NULL) {
        p->prox = lista;
        return p;
    }

    antes->prox = p;
    p->prox = apos;

    return inicio;
}

int main() {
    struct Caixa c1; c1.valor = 1;
    struct Caixa c2; c2.valor = 3;
    struct Caixa c3; c3.valor = 4;
    struct Caixa c4; c4.valor = 5;
    struct Caixa c5; c5.valor = 7;

    c1.prox = &c2;
    c2.prox = &c3;
    c3.prox = &c4;
    c4.prox = &c5;
    c5.prox = NULL;

    exibe(insere(&c1, 6));
}