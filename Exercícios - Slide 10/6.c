// Crie uma função que receba uma lista ordenada e um valor inteiro a ser inserido na lista.
// A função deve retornar a lista modificada que deve se manter ordenada:
//     struct Caixa* insere (struct Caixa* lista, int valor);

#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa* caixa) {
    while (caixa != NULL) {
        printf("%d -> ", caixa->valor);
        caixa = caixa->prox;
    }
    printf("NULL\n");
}

struct Caixa* insere(struct Caixa* caixa, int valor) {
    struct Caixa* novacaixa = malloc(sizeof(struct Caixa));
    struct Caixa* p = caixa;

    novacaixa->valor = valor;
    novacaixa->prox = NULL;

    if (caixa == NULL) return novacaixa;

    if (valor < caixa->valor) {
        novacaixa->prox = caixa;
        return novacaixa;
    }

    while (p->prox != NULL && p->prox->valor < valor) {
        p = p->prox;
    }

    novacaixa->prox = p->prox;
    p->prox = novacaixa;

    return caixa;
}

int main() {
    struct Caixa* c1 = malloc(sizeof(struct Caixa));
    struct Caixa* c2 = malloc(sizeof(struct Caixa));
    struct Caixa* c3 = malloc(sizeof(struct Caixa));
    struct Caixa* c4 = malloc(sizeof(struct Caixa));
    struct Caixa* c5 = malloc(sizeof(struct Caixa));

    c1->valor = 1; c1->prox = c2;
    c2->valor = 3; c2->prox = c3;
    c3->valor = 5; c3->prox = c4;
    c4->valor = 7; c4->prox = c5;
    c5->valor = 9; c5->prox = NULL;

    exibe(c1);
    c1 = insere(c1, -1);
    exibe(c1);
    c1 = insere(c1, 192);
    exibe(c1);

    while (c1 != NULL) {
        struct Caixa* prox = c1->prox;
        free(c1);
        c1 = prox;
    }
}