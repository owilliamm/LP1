// Crie uma função determinante que receba uma matriz quadrada e retorne o seu determinante:
// float determinante (int arr[L][C], int lc);

// isso foi muito, MUITO mais difícil que o resto

#include <stdio.h>
#define L 3
#define C 3

void preenchequadrada(int arr[L][C], int lc) {
    int numero;
    for (int i = 0; i<lc; i++) {
        for (int j = 0; j<lc; j++) {
            scanf("%d", &numero);
            arr[i][j] = numero;
        }
    }
}

float determinante (int arr[L][C], int lc) {

    if (lc == 1) return arr[0][0];
    if (lc == 2) return arr[0][0]*arr[1][1]-arr[1][0]*arr[0][1];

    int calculodet = 0;
    int submatriz[L][C];

    for (int i = 0; i<lc; i++) {
        int isub = 0;
        for (int j = 1; j<lc; j++) {
            int jsub = 0;
            for (int k = 0; k<lc; k++) {
                if (k != i) {
                    submatriz[isub][jsub] = arr[j][k];
                    jsub++;
                }
            }
            isub++;
        }

        int sinal = (i%2 == 0) ? 1 : -1;
        calculodet += sinal*arr[0][i]*determinante(submatriz, lc-1);
    }
    return calculodet;
}

int main() {
    int M[L][C];
    int lc = L;
    preenchequadrada(M, lc);
    printf("Determinante: %f", determinante(M, lc));
}