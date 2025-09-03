// Crie um vetor vet de 5 posições.
// Leia 5 números e guarde-os em vet.
// Exiba todos os números de vet.
// Leia um outro número I.
// Remova o valor de vet no índice I.
//     Mantenha o vetor sem buracos!
//     As posições vazias devem ser preenchidas com 0.

// Exemplo:
// | 90 | 55 | 15 | 70 | 10 |
// Após remover I=2:
// | 90 | 55 | 70 | 10 |  0 |

#include <stdio.h>

int main() {
    int vet[5]; int numero = 0;
    int I = 0;

    for (int k = 0; k<5; k++) {
        printf("Digite um numero\n");
        scanf("%d", &numero);
        vet[k] = numero;
    }

    for (int k = 0; k<5; k++) {
        printf("| %d | ", vet[k]);
    }
    printf("\n");

    scanf("%d", &I);
    vet[I] = 0;

    for (int k = 0; k<4; k++) {
        if (vet[k] == 0) {
            vet[k] = vet[k+1];
            vet[k+1] = 0;
        }
    }
    
    for (int k = 0; k<5; k++) {
        printf("| %d | ", vet[k]);
    }
}