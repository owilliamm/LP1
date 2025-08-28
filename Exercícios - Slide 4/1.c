// Crie uma função eh_primo que recebe um inteiro n e retorna se ele é primo ou não.
// Em C, tipicamente usamos 1 e 0 para representar verdadeiro e falso, respectivamente.

#include <stdio.h>
#include <math.h>

int eh_primo(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;

    for (int i = 2; i<=sqrt(n); i++) {
        if (n%i == 0) {
            return 0;
        } 
    }
    return 1;
}

int main() {
    int n1 = 0;
    printf("Digite um numero\n");
    scanf("%d", &n1);
    printf("%d", eh_primo(n1));
}