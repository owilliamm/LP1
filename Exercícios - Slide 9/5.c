// Crie uma função que receba uma lista e um valor inteiro a ser removido da lista (caso esteja contido na lista).
// A função deve retornar a lista modificada, ou seja, um ponteiro para o seu primeiro elemento:
// struct Caixa* remove (struct Caixa* lista, int valor);

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

struct Caixa* remover (struct Caixa* lista, int valor) {
    if (lista == NULL) return NULL;

    struct Caixa* anterior = NULL;
    struct Caixa* cabeca = lista;
    struct Caixa* p = lista;

    while (p != NULL) {

        if (p->valor == valor) {

            if (anterior == NULL) {
                cabeca = p->prox;
                p = cabeca;
            } else {
                anterior->prox = p->prox;
                p = anterior->prox;
            }

        } else {
            anterior = p;
            p = p->prox;
        }
    }

    return cabeca;
}

int main() {
    struct Caixa c1; c1.valor = 1;
    struct Caixa c2; c2.valor = 3;
    struct Caixa c3; c3.valor = 9;
    struct Caixa c4; c4.valor = 7;
    struct Caixa c5; c5.valor = 5;
    struct Caixa c6; c6.valor = 5;

    c1.prox = &c2;
    c2.prox = &c3;
    c3.prox = &c4;
    c4.prox = &c5;
    c5.prox = &c6;
    c6.prox = NULL;

    exibe(remover(&c1, 5));
}