// Crie uma função todos_os_primos que recebe um inteiro max e exibe todos os primos entre 1 e max.
// Use a função eh_primo do exercício anterior sem alterá-la.

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

void todos_os_primos(int max) {
    for (int j = 2; j<=max; j++) {
        if (eh_primo(j)) {
            printf("%d ", j);
        }
    }
}

int main() {
    int n1 = 0;
    printf("Digite um numero\n");
    scanf("%d", &n1);
    todos_os_primos(n1);
}