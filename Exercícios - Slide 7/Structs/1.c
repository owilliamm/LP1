// Considere a struct a seguir:
// struct Personagem {
//     int forca;
//     int energia;
//     int experiencia;
// };

// Crie um personagem com forca=10, energia=50 e experiencia=30.
// Crie outro personagem com forca=18, energia=20 e experiencia=25.
// Use as duas formas de inicializar structs:
//     acessando cada campo individualmente pelo nome
//     usando as chaves onde cada campo é separado por vírgula

#include <stdio.h>

int main() {
	struct Personagem {
		int forca;
		int energia;
		int experiencia;
	};

	struct Personagem p1;
	p1.forca = 10;
	p1.energia = 50;
	p1.experiencia = 30;

	struct Personagem p2 = {18, 20, 25};
}