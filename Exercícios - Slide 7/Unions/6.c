// Crie uma struct para representar um ponto no espaço com três coordenadas x, y e z.
// Uma outra maneira de representar um ponto é por um vetor de 3 posições.
// Crie uma union que permita representar um ponto das duas formas e de modo intercambiável, ex.:

// union Ponto pt;
// pt.vec[0] = 10;
// pt.vec[1] = 20;
// pt.vec[2] = 30;
// printf("(%d,%d,%d)\n", pt.x, pt.y, pt.z);

#include <stdio.h>

struct xyz {
    int x;
    int y;
    int z;
};

union Ponto {
    struct xyz;
    int vec[3];
};

int main() {
    union Ponto pt;
    pt.vec[0] = 10;
    pt.vec[1] = 20;
    pt.vec[2] = 30;
    printf("(%d,%d,%d)\n", pt.vec[0], pt.vec[1], pt.vec[2]);
    printf("(%d,%d,%d)\n", pt.x, pt.y, pt.z);
}