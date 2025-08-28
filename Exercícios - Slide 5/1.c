// Leia dois inteiros a e b.
// Exiba os valores de a e b.
// Crie um ponteiro p para a variável com o maior valor.
// Através de p subtraia 50 da variável com o maior valor.
// Exiba os valores de a e b novamente.

#include <stdio.h>

int main() {
    int a, b;
    printf("Digite um valor para A\n");
    scanf("%d", &a);
    printf("Digite um valor para B\n");
    scanf("%d", &b);

    printf("Os valores de A e B foram %d e %d\n", a, b);

    if (a > b) {
        int *p = &a;
        *p -= 50;
    } else {
        int *p = &b;
        *p -= 50;
    }
    printf("Apos a mudanca, sao %d e %d\n", a, b);
}