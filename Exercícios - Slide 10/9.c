#include <stdio.h>
#include <stdlib.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe(struct Caixa* caixa) {
    while (L != NULL) {
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
}