// Crie uma struct qualquer. Seja criativo!
// Crie uma função preenche que receba um ponteiro para uma variável da struct criada e leia os campos para a variável passada. Exemplo:

// struct T t;
// preenche(&t);
// printf("A=%d, B=%d\n", t.a, t.b);

#include <stdio.h>

struct Cartaodevoo {
	char nomepassageiro[20];
	char origem[20];
	char destino[20];
	int numerovoo;
	int numeroassento;
};

void preenche(struct Cartaodevoo* Pessoa) {
	printf("Nome do passageiro: "); scanf("%s", Pessoa->nomepassageiro);
	printf("Numero do voo: ");      scanf("%d", &Pessoa->numerovoo);
	printf("Origem: ");             scanf("%s", Pessoa->origem);
	printf("Destino: ");            scanf("%s", Pessoa->destino);
	printf("Numero do assento: ");  scanf("%d", &Pessoa->numeroassento);
}

int main() {
	struct Cartaodevoo Passageiro;
	preenche(&Passageiro);
	printf("Nome: %s\n", Passageiro.nomepassageiro);
	printf("Numero do voo: %d\n", Passageiro.numerovoo);
    printf("Origem: %s\n", Passageiro.origem);
    printf("Destino: %s\n", Passageiro.destino);
    printf("Numero do assento: %d\n", Passageiro.numeroassento);
}