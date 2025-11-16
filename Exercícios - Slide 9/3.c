// Faça as seguintes alterações na questão 1 (mantenha o código atual, fazendo alterações somente ao final do arquivo):
//     Mantenha um novo ponteiro cabeca que sempre aponta para a caixa inicial:
//         struct Caixa* cabeca = ...
//     Remova a caixa no índice 2 (valor 9).
//     Exiba o valor das caixas (usando exibe).
//         Certifique-se de que o valor 9 não aparece mais.
//     Insire a caixa removida, no início da lista.
//     Exiba o valor das caixas (usando exibe).

// (fiz aqui em 3.c)

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

void insere(struct Caixa** cabeca, struct Caixa* posremocao) {
    posremocao->prox = *cabeca;
    *cabeca = posremocao;
}

struct Caixa* removeindice(struct Caixa* cabeca, int indice) {
    if (cabeca == NULL) return NULL;

    struct Caixa* retorno;
    struct Caixa* p = cabeca;

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
    struct Caixa* cabeca;
    struct Caixa* valorremovido;

    struct Caixa c1; c1.valor = 1;
    struct Caixa c2; c2.valor = 3;
    struct Caixa c3; c3.valor = 9;
    struct Caixa c4; c4.valor = 7;
    struct Caixa c5; c5.valor = 5;

    c1.prox = &c2;
    c2.prox = &c3;
    c3.prox = &c4;
    c4.prox = &c5;
    c5.prox = NULL;

    cabeca = &c1;

    exibe(cabeca);
    valorremovido = removeindice(cabeca, 2); // errado quando índice 0
    printf("\n\n");
    exibe(cabeca);
    insere(&cabeca, valorremovido);
    printf("\n\n");
    exibe(cabeca);
}