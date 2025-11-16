// Crie uma função que receba duas listas e retorne a concatenação das duas listas excluindo repetições:
// struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2);
// Assuma que não há repetições dentro das listas recebidas.

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

void removerRepetidos (struct Caixa* l1, struct Caixa** l2) {
    while (l1 != NULL && l2 != NULL) {
        struct Caixa* anterior = NULL;
        struct Caixa* p = *l2;
        
        while (p != NULL) {

            if (p->valor == l1->valor) {

                if (anterior == NULL) {
                    *l2 = p->prox;
                    p = *l2;
                } else {
                    anterior->prox = p->prox;
                    p = anterior->prox;
                }

            } else {
                anterior = p;
                p = p->prox;
            }

        }
        l1 = l1->prox;
    }
}

struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2) {
    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    removerRepetidos(l1, &l2);

    struct Caixa* p = l1;
    while (p->prox != NULL) {
        p = p->prox;
    }

    p->prox = l2;

    return l1;
}

int main() {
    struct Caixa a1; a1.valor = 1;
    struct Caixa a2; a2.valor = 3;
    struct Caixa a3; a3.valor = 9;

    struct Caixa b1; b1.valor = 9;
    struct Caixa b2; b2.valor = 2;
    struct Caixa b3; b3.valor = 4;

    a1.prox = &a2;  b1.prox = &b2;
    a2.prox = &a3;  b2.prox = &b3;
    a3.prox = NULL; b3.prox = NULL;

    exibe(concatena(&a1, &b1));
}