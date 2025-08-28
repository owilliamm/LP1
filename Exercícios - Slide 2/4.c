// Agora o aluno alugou um carro. Ele está preocupado com o limite de velocidade, mas não entende muito bem o sistema de milhas por hora (mph).
// Ele pretende manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros.
// Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.

#include <stdio.h>

char* dica(int velocidade) {
    if (velocidade*1.6 < 80) {
        return "ACELERE";
    }
    if (velocidade*1.6 > 100) {
        return "DESACELERE";
    } else {
        return "MANTENHA";
    }
}

int main() {
    int velmph;
    scanf("%d", &velmph);
    printf("%s", dica(velmph));
}