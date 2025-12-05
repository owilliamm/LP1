#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int contem(struct Caixa* caixa, int valor) {
    while (caixa != NULL) {
        if (caixa->valor == valor) return 1;
        caixa = caixa->prox;
    }
    return 0;
}

int main() {
    struct Caixa* c1 = malloc(sizeof(struct Caixa));
    struct Caixa* c2 = malloc(sizeof(struct Caixa));
    struct Caixa* c3 = malloc(sizeof(struct Caixa));
    struct Caixa* c4 = malloc(sizeof(struct Caixa));
    struct Caixa* c5 = malloc(sizeof(struct Caixa));

    c1->valor = 1; c1->prox = c2;
    c2->valor = 3; c2->prox = c3;
    c3->valor = 9; c3->prox = c4;
    c4->valor = 7; c4->prox = c5;
    c5->valor = 5; c5->prox = NULL;

    printf("%d\n", contem(c1, 9));
    printf("%d\n", contem(c1, 78));

    free(c1);
    free(c2);
    free(c3);
    free(c4);
    free(c5);
}