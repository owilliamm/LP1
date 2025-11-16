/* PARA TODOS OS EXERCÍCIOS DESSE SLIDE*/
/*=====================================*/
// Não utilize malloc nos exercícios a seguir.
// Considere a struct a seguir:
//     struct Caixa {
//         int valor;
//         struct Caixa* prox;
//     };
/*=====================================*/

// Considere a lista encadeada a seguir:
//     1 -> 3 -> 9 -> 7 -> 5
// Crie um programa que represente a lista acima encadeando valores do tipo struct Caixa.
//     Cada valor acima deve estar em uma caixa própria (ex., c1, c2, etc.).

#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

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
}