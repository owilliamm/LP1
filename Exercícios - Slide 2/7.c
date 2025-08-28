// O Campeonato Brasileiro está na reta final com 20 times na disputa. Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos.
// Escreva um programa que, para cada time, leia o nome (ou um identificador numérico), número de vitórias, número de empates e número de derrotas.
// Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.

#include <stdio.h>
#include <string.h>

// Como cada time joga 380 partidas (C(20,2)), a pontuação máxima é 1140.

int main() {
    char nome[20], nomemaior[20], nomemenor[20];
    int vit, emp, der, pts = 0;
    int maior = -1; int menor = 1140;

    printf("%s\n", "Digite, separado por espacos, Nome Vitorias Empates Derrotas.");

    for (int i = 0; i < 20; i++) {
        scanf("%s %d %d %d", &nome, &vit, &emp, &der);
        pts = vit*3+emp;

        if (pts > maior) {
            maior = pts;
            strcpy(nomemaior, nome);
        }
        if (pts < menor) {
            menor = pts;
            strcpy(nomemenor, nome);
        }

    }
    printf("%s %s\n", "A maior pontuacao foi do time:", nomemaior);
    printf("%s %s", "A menor pontuacao foi do time:", nomemenor);
}