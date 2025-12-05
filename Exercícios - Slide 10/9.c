// Começando de uma lista vazia (l=NULL), ler e incluir vários valores na lista até que seja digitado -1.

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

struct Caixa* inserir(struct Caixa* caixa, int x) {
    struct Caixa* novo = malloc(sizeof(struct Caixa));
    novo->valor = x; novo->prox = NULL;

    if (caixa == NULL) {
        caixa = novo;
        return caixa;
    }

    struct Caixa* p = caixa;
    while (p->prox != NULL) {
        p = p->prox;
    }
    p->prox = novo;
    
    return caixa;
}

int main() {
    struct Caixa* c1 = NULL;

    int x;
    while(x != -1) {
        scanf("%d", &x);
        if (x == -1) break;
        c1 = inserir(c1, x);
    }
    
    exibe(c1);

    while (c1 != NULL) {
        struct Caixa* prox = c1->prox;
        free(c1);
        c1 = prox;
    }
}