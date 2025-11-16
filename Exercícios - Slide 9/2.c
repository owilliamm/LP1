// Crie uma função que receba um ponteiro para uma caixa e percorra todas as caixas encadeadas, exibindo seus valores:
//     void exibe (struct Caixa* caixa);
// Teste o exemplo com a lista da questão 1.

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

int main() {
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

    exibe(&c1);
}