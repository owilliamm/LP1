// Baseado no exercício 1, crie uma função preencheB que leia as propriedades de um personagem para o valor apontado pelo ponteiro recebido:
// void preencheB (struct Personagem* p) {
//     ...  // complete aqui
// }

// void main (void) {
//     struct Personagem p1;
//     preencheB(&p1);

//     struct Personagem p2;
//     preencheB(&p2);

//     printf("(%d,%d,%d) vs (%d,%d,%d)\n",
//            p1.forca, p1.energia, p1.experiencia,
//            p2.forca, p2.energia, p2.experiencia);
// }

#include <stdio.h>

struct Personagem {
    int forca;
    int energia;
    int experiencia;
};

void preencheB(struct Personagem* p) {
	scanf("%d", &p->forca);
	scanf("%d", &p->energia);
	scanf("%d", &p->experiencia);
}

int main() {
	struct Personagem p1;
	preencheB(&p1);

	struct Personagem p2;
	preencheB(&p2);

	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
		p1.forca, p1.energia, p1.experiencia,
		p2.forca, p2.energia, p2.experiencia);
}