// Crie uma função que receba duas listas e retorne a concatenação das duas listas excluindo repetições:
//     struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2);
// Assuma que não há repetições dentro das listas recebidas.

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

struct Caixa* inserir(struct Caixa* caixa, int v) {
    struct Caixa* novo = malloc(sizeof(struct Caixa));
    novo->valor = v;
    novo->prox = NULL;
    
    if (caixa == NULL) return novo;

    struct Caixa* p = caixa;

    while (p->prox != NULL) {
        p = p->prox;
    }

    p->prox = novo;
    return caixa;
}

int checarexiste(struct Caixa* caixa, int x) {
    while (caixa != NULL) {
        if (caixa->valor == x) {
            return 1;        
        }
        caixa = caixa->prox;
    }
    return 0;
}

struct Caixa* concatena(struct Caixa* c1, struct Caixa* c2) {
    struct Caixa* p = c1;
    struct Caixa* q = c2;
    struct Caixa* novalista = NULL;

    while (p != NULL) {
        novalista = inserir(novalista, p->valor);  
        p = p->prox;
    }

    while (q != NULL) {
        if (!checarexiste(novalista, q->valor)) {
            novalista = inserir(novalista, q->valor);
        }
        q = q->prox;
    }

    return novalista;
}

int main() {
    struct Caixa* a1 = malloc(sizeof(struct Caixa));
    struct Caixa* a2 = malloc(sizeof(struct Caixa));
    struct Caixa* a3 = malloc(sizeof(struct Caixa));
    struct Caixa* b1 = malloc(sizeof(struct Caixa));
    struct Caixa* b2 = malloc(sizeof(struct Caixa));
    struct Caixa* b3 = malloc(sizeof(struct Caixa));

    a1->valor = 1; a1->prox = a2;
    a2->valor = 3; a2->prox = a3;
    a3->valor = 9; a3->prox = NULL;

    b1->valor = 7; b1->prox = b2;
    b2->valor = 9; b2->prox = b3;
    b3->valor = 100; b3->prox = NULL;

    exibe(a1);
    exibe(b1);
    struct Caixa* concatenado = concatena(a1, b1);
    exibe(concatenado);
    
    while (a1 != NULL) {
        struct Caixa* prox = a1->prox;
        free(a1);
        a1 = prox;
    }

    while (b1 != NULL) {
        struct Caixa* prox = b1->prox;
        free(b1);
        b1 = prox;
    }
    free(concatenado);
}