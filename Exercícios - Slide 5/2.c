// Uma conta é representada por um inteiro que guarda o saldo total: int minha_conta;
// Uma compra na internet é efetuada por uma chamada compra(conta,valor). A função recebe um ponteiro para uma conta e um valor a ser debitado:

// void compra (int* conta, int valor) {
//     <...>
// }

// Um casal tem duas contas e quer usar a conta com maior saldo para fazer uma compra de 500 reais. 
// Faça um programa que leia o saldo das duas contas e efetue a compra corretamente. Ao final, o programa deve exibir os saldos das duas contas.

#include <stdio.h>

void compra(int* conta, int valor) {
    *conta -= valor;
}

int main() {
    int minha_conta1 = 0; int minha_conta2 = 0;
    printf("Valor na 1a conta\n");
    scanf("%d", &minha_conta1);
    printf("Valor na 2a conta\n");
    scanf("%d", &minha_conta2);

    if (minha_conta1 > minha_conta2) {
        compra(&minha_conta1, 500);
    } else {
        compra(&minha_conta2, 500);
    }
    printf("O valor da 1a conta e de %dR$, enquanto o valor da 2a conta e de %dR$.", minha_conta1, minha_conta2);
}