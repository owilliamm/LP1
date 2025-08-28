// Ler dois números n1 e n2
// Exibir todos os números entre n1 e n2
// Fazer em Python e em C

#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite um numero\n");
    scanf("%d", &n1);
    printf("Digite outro numero\n");
    scanf("%d", &n2);
    for (int i = n1+1; i<n2; i++) {
        printf("%d ", i);
    }
}