// Crie uma função preenche que receba um array bidimensional arr de inteiros com uma dimensão fixa (LxC), e preencha o array com l*c números lidos do teclado, ex:
//     void preenche (int arr[L][C], int l, int c);
// Crie uma função media que receba um array bidimensional arr, a quantidade de linhas l, a quantidade de colunas c, e retorne a média entre todos os valores do array, ex:
//     float media (int arr[L][C], int l, int c);
// L e C devem ser quaisquer valores constantes predefinidos.

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

    printf("Sua matriz:\n");
    for (int i = 0; i<l; i++) {
        for (int j = 0; j<c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
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
    int arr[L][C];
    preenche(arr, L, C);
    printf("Media: %.2f", media(arr, L, C));
}