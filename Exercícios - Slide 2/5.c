#include <stdio.h>

int main() {
    int n = 1; int soma = 0;

    while (n != 0) {
        scanf("%d", &n);
        soma += n;
    }

    printf("%d", soma);
}