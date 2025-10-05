// Crie uma função media que receba um array bidimensional arr, a quantidade de linhas l, a quantidade de colunas c, e retorne a média entre todos os valores do array:
//  float media (int arr[L][C], int l, int c);
// L e C devem ser quaisquer valores constantes predefinidos.

#include <stdio.h>
#define L 3
#define C 3

void preenche(int arr[L][C], int l, int c) {
    int numero;
    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            scanf("%d", &numero);
            arr[i][j] = numero;
        }
    }
}

float media (int arr[L][C], int l, int c) {
    int soma = 0;
    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            soma += arr[i][j];
        }
    }
    return soma/(l*c);
}

int main() {
    int umarray[L][C];
    preenche(umarray, L, C);
    media(umarray, L, C);
}