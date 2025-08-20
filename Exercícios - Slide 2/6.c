#include <stdio.h>

int main() {
    int soma = 0; int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        soma += i*i;
    }
    printf("%d", soma);
}