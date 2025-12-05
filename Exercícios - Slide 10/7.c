// Crie uma função que receba duas listas e retorne a concatenação das duas listas:
//     struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2);

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

struct Caixa* concatena(struct Caixa* c1, struct Caixa* c2) {
    if (c2 == NULL) return c1;

    struct Caixa* inicio = NULL;
    struct Caixa* fim = NULL;

    while (c1 != NULL) {
        struct Caixa* copia = malloc(sizeof(struct Caixa));
        copia->valor = c1->valor;
        copia->prox = NULL;
        
        if (inicio == NULL) {
            inicio = copia;
        } else {
            fim->prox = copia;
        }
        fim = copia;

        c1 = c1->prox;
    }
    
    while (c2 != NULL) {
        struct Caixa* copia = malloc(sizeof(struct Caixa));
        copia->valor = c2->valor;
        copia->prox = NULL;
        
        if (inicio == NULL) {
            inicio = copia;
        } else {
            fim->prox = copia;
        }
        fim = copia;

        c2 = c2->prox;
    }
    
    return inicio;
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

    struct Caixa* b1 = malloc(sizeof(struct Caixa));
    struct Caixa* b2 = malloc(sizeof(struct Caixa));    
    struct Caixa* b3 = malloc(sizeof(struct Caixa));
    struct Caixa* b4 = malloc(sizeof(struct Caixa));

    b1->valor = 2; b1->prox = b2;
    b2->valor = 99; b2->prox = b3;
    b3->valor = 101; b3->prox = b4;
    b4->valor = 55; b4->prox = NULL;

    struct Caixa* concatenado = concatena(c1, b1);
    exibe(concatenado);

    while (c1 != NULL) {
        struct Caixa* prox = c1->prox;
        free(c1);
        c1 = prox;
    }
    free(concatenado);
}