// Faça as seguintes alterações na questão 1 (mantenha o código atual, fazendo alterações somente ao final do arquivo):
// Mantenha um novo ponteiro cabeca que sempre aponta para a caixa inicial:
//     struct Caixa* cabeca = ...
// Remova a caixa no índice 2 (valor 9).
// Exiba o valor das caixas (usando exibe).
// Certifique-se de que o valor 9 não aparece mais.
// Insire a caixa removida, no início da lista.
// Exiba o valor das caixas (usando exibe).

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

void inserir(struct Caixa** cabeca, struct Caixa* removido) {
    removido->prox = *cabeca;
    *cabeca = removido;
}

struct Caixa* remover(struct Caixa* cabeca, int indice) {
    struct Caixa* p = cabeca;
    struct Caixa* retorno;

    for (int i = 0; i<indice-1; i++) {
        if (p->prox == NULL) return NULL;
        p = p->prox;
    }

    retorno = p->prox;
    p->prox = retorno->prox;
    retorno->prox = NULL;

    return retorno;
}

int main() {
    struct Caixa* removido;
    struct Caixa* cabeca;

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

    cabeca = c1;

    exibe(cabeca);
    removido = remover(cabeca, 2);
    exibe(cabeca);
    inserir(&cabeca, removido);
    exibe(cabeca);

    free(c1);
    free(c2);
    free(c3);
    free(c4);
    free(c5);
}