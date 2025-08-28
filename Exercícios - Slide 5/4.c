// Crie uma função troca que receba dois ponteiros para inteiros p1 e p2 e troque os conteúdos por eles apontados:

// int x=10, y=20;
// troca(&x, &y);              // definir essa funcao
// printf("%d %d\n", x, y);    // 20 10

#include <stdio.h>

void troca(int* p1, int* p2) {
    *p1 = *p1+*p2; // x+y
    *p2 = *p1-*p2; // (x+y)-y = x
    *p1 = *p1-*p2; // (x+y)-x = y
}

int main() {
    int x = 10, y = 20;
    troca(&x, &y);
    printf("%d %d\n", x, y);
}