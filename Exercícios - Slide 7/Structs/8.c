// Crie uma struct para guardar um ponto no espaço bi-dimensional com dois inteiros x e y.
// Crie uma função para preencher 1 ponto.
// Na main, crie um vetor com dez pontos.
// Crie uma função para preencher um vetor de pontos.
// Crie uma função que receba um vetor de pontos e retorne o ponto mais distante de (0,0).

#include <stdio.h>

struct Coordenadas {
    int x;
    int y;
};

void construirponto(struct Coordenadas* coords) {
    printf("Coordenada x: "); scanf("%d", &coords->x);
    printf("Coordenada y: "); scanf("%d", &coords->y);
}

void construirvetordepontos(struct Coordenadas vetor[], int tamanhovetor) {
    for (int i = 0; i<tamanhovetor; i++) {
        printf("======Iteracao %d======\n", i);
        construirponto(&vetor[i]);
    }
}

double distancia(struct Coordenadas ponto) {
    return (ponto.x*ponto.x + ponto.y*ponto.y);
}

struct Coordenadas maisdistante(struct Coordenadas vetor[], int tamanhovetor) {
    struct Coordenadas vetordistante = vetor[0];
    double xymaisdistante =   distancia(vetor[0]);

    for (int i = 0; i<tamanhovetor; i++) {
        if (distancia(vetor[i]) > xymaisdistante) {
            vetordistante = vetor[i];
            xymaisdistante = distancia(vetor[i]);
        }
    }
    return vetordistante;
}

int main() {
    struct Coordenadas vetor[10];
    construirvetordepontos(&vetor[10], 10);
    struct Coordenadas distante = maisdistante(&vetor[10], 10);
    printf("O ponto mais distante de (0,0) foi: (%d,%d)\n", distante.x, distante.y);
}