// Um jogo possui 10 personagens, cada um com as seguintes características:
//     Um número que representa a sua "identidade".
//     Um posição (x,y) no espaço bi-dimensional.
//     Uma quantidade de pontuação (inicialmente 0).
// Crie uma struct para representar um personagem.
//     A posição também deve ser uma struct.
// Crie um vetor com 10 personagens.

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
    printf("Coordenada X: "); scanf("%d", &personagem->y);
    printf("Coordenada Y: "); scanf("%d", &personagem->x);
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

int main() {
    int tamanho = 10;
    struct Personagem vetor[tamanho];
    CriarVetorPersonagem(vetor, tamanho);
}