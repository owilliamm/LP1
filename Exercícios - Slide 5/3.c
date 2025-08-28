// Agora, o casal tem uma lista de compras a efetuar:
// int compras[] = { 100, 50, 80, 30, 20 };
// Faça um programa que leia o saldo das duas contas e efetue as compras corretamente, sempre usando a conta com o maior saldo. 
// A cada compra, o programa deve exibir os saldos das duas contas.

#include <stdio.h>

void compra(int* conta, int valor) {
    *conta -= valor;
}

int main() {
    int minha_conta1 = 0; int minha_conta2 = 0;
    int compras[] = {100, 50, 80, 30, 20};

    printf("Valor na 1a conta\n");
    scanf("%d", &minha_conta1);
    printf("Valor na 2a conta\n");
    scanf("%d", &minha_conta2);

    for (int i = 0; i<=4; i++) {
        if (minha_conta1 > minha_conta2) {
            compra(&minha_conta1, compras[i]);
        } else {
            compra(&minha_conta2, compras[i]);
        }
    }

    printf("O valor da 1a conta e de %dR$, enquanto o valor da 2a conta e de %dR$.", minha_conta1, minha_conta2);
}