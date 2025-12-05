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

struct Caixa* remover(struct Caixa* caixa, int valor) {
    struct Caixa* anterior = NULL;
    struct Caixa* cabeca = caixa;
    struct Caixa* p = caixa;

    while (p != NULL) {

        if (p->valor == valor) {

            struct Caixa* aserremovido = p;

            if (anterior == NULL) {
                cabeca = p->prox;
                p = cabeca;
            } else {
                anterior->prox = p->prox;
                p = p->prox;
            }

            free(aserremovido);

        } else {
            anterior = p;
            p = p->prox;
        }
    }
    return cabeca;
}

int main() {
    struct Caixa* c1 = malloc(sizeof(struct Caixa));
    struct Caixa* c2 = malloc(sizeof(struct Caixa));
    struct Caixa* c3 = malloc(sizeof(struct Caixa));
    struct Caixa* c4 = malloc(sizeof(struct Caixa));
    struct Caixa* c5 = malloc(sizeof(struct Caixa));
    struct Caixa* c6 = malloc(sizeof(struct Caixa));

    c1->valor = 1; c1->prox = c2;
    c2->valor = 3; c2->prox = c3;
    c3->valor = 9; c3->prox = c4;
    c4->valor = 7; c4->prox = c5;
    c5->valor = 9; c5->prox = c6;
    c6->valor = 100; c6->prox = NULL;

    exibe(c1);
    remover(c1, 9);
    exibe(c1);
}