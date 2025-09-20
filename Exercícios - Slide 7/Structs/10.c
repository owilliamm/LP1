// Crie uma função que leia um personagem (use a struct do exercício anterior).
// A função deve usar uma função que lê a posição.
// Crie um loop para ler todos os 10 personagens
// Desenhe um mapa do jogo.
//     Use funções auxiliares!
//     Exemplo:
//    0 1 2 3 4 5 6 7 8 9
// 0          8
// 1    0
// 2 
// 3              3
// 4 
// 5                  7
// 6      2
// 7 
// 8          9
// 9                  5

#include <stdio.h>

struct Posicao {
    int x;
    int y;
};

struct Personagem {
    int Identidade;
    int Pontos;
    struct Posicao xy;
};

void LerPosicao(struct Posicao *personagem) {
    printf("Coordenada X: "); scanf("%d", &personagem->x);
    printf("Coordenada Y: "); scanf("%d", &personagem->y);
}

void CriarPersonagem(struct Personagem *personagem) {
    printf("Identidade: ");   scanf("%d", &personagem->Identidade);
    printf("Pontuacao: ");    scanf("%d", &personagem->Pontos);
    LerPosicao(&personagem->xy);
}

void CriarVetorPersonagem(struct Personagem vetor[], int tamanhovetor) {
    for (int i = 0; i<tamanhovetor; i++) {
        printf("========Personagem %d========\n", i);
        CriarPersonagem(&vetor[i]);
    }
}

void MostrarMapa(struct Personagem vetor[], int tamanhovetor) {
    int mapa[10][10];

    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            mapa[i][j] = -2;
        }
    }

    for (int i = 0; i<tamanhovetor; i++) {
        int x = vetor[i].xy.x;
        int y = vetor[i].xy.y;
        if (x<10 && x>=0 && y<10 && y>=0){
            mapa[y][x] = vetor[i].Identidade;
        } else {
            printf("Impossivel mostrar o mapa, x ou y é negativo ou maior que 9.");
            return;
        }
    }

    printf("  ");
    for (int j = 0; j<10; j++) printf("%d ", j);
    printf("\n");

    for (int i = 0; i<10; i++) {
        printf("%d ", i);
        for (int j = 0; j<10; j++) {
            if (mapa[i][j] == -2) {
                printf("  ");
            } else {
                printf("%d ", mapa[i][j]);
            }
        }
        printf("\n");
    }
}

int main() {
    int tamanho = 10;
    struct Personagem vetor[tamanho];
    CriarVetorPersonagem(vetor, tamanho);
    MostrarMapa(vetor, tamanho);
}