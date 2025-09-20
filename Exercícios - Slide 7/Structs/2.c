// Baseado no exercício 1, crie uma função preencheA que leia as propriedades de um personagem e retorne um novo personagem:
// struct Personagem preencheA (void) {
//     ...  // complete aqui
// }

// void main (void) {
//     struct Personagem p1 = preencheA();
//     struct Personagem p2 = preencheA();
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

struct Personagem preencheA(void) {
	struct Personagem p;
	scanf("%d", &p.forca);
	scanf("%d", &p.energia);
	scanf("%d", &p.experiencia);
	return p;
}

int main() {
	struct Personagem p1 = preencheA();
	struct Personagem p2 = preencheA();
	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
		p1.forca, p1.energia, p1.experiencia,
		p2.forca, p2.energia, p2.experiencia);
}