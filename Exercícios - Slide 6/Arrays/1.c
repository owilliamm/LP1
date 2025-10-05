// Crie uma função preenche que receba um array bidimensional arr de inteiros com uma dimensão fixa (LxC)
// e preencha o array com l*c números lidos do teclado:
// void preenche (int arr[L][C], int l, int c);

#include <stdio.h>
#define L 3
#define C 3

void preenche (int arr[L][C], int l, int c) {
    int numero;
    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            scanf("%d", &numero);
            arr[i][j] = numero;
        }
    }
}

int main() {
    int umarray[L][C];
    preenche(umarray, L, C);
}