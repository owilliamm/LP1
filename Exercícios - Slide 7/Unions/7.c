// Crie uma union qualquer.
//     Seja criativo!
//     Misture com o exercício sobre structs 7.
//     Use união discriminada.
// Crie uma função preenche que receba um ponteiro para uma variável do tipo criado e leia os campos para a variável passada.

#include <stdio.h>

enum Opcoes {tipobagagem, lanche};

struct Cartaodevoo {
    enum Opcoes opcao;
    union {
        char bagagem[20];
        char lanche[20];
    } escolha;
	char nomepassageiro[20];
	char origem[20];
	char destino[20];
	int numerovoo;
	int numeroassento;
};

void exibe(struct Cartaodevoo* Pessoa, int escolha) {
	printf("Nome: %s\n", Pessoa->nomepassageiro);
	printf("Numero do voo: %d\n", Pessoa->numerovoo);
    printf("Origem: %s\n", Pessoa->origem);
    printf("Destino: %s\n", Pessoa->destino);
    printf("Numero do assento: %d\n", Pessoa->numeroassento);
    if (escolha == 0) {
        printf("O lanche escolhido foi: %s\n", Pessoa->escolha.lanche);
    } else {
        printf("O tipo de bagagem é: %s\n", Pessoa->escolha.bagagem);
    }
}

void preenche(struct Cartaodevoo* Pessoa) {
	printf("Nome do passageiro: "); scanf("%s", Pessoa->nomepassageiro);
	printf("Numero do voo: ");      scanf("%d", &Pessoa->numerovoo);
	printf("Origem: ");             scanf("%s", Pessoa->origem);
	printf("Destino: ");            scanf("%s", Pessoa->destino);
	printf("Numero do assento: ");  scanf("%d", &Pessoa->numeroassento);

    int opcao;
    printf("0-Tipo de Bagagem, 1-Lanche: "); scanf("%d", &opcao);
    
    if (opcao == 0) {
        printf("Tipo de bagagem: "); scanf("%s", Pessoa->escolha.bagagem);
    } else {
       printf("Lanche escolhido: "); scanf("%s", Pessoa->escolha.lanche); 
    }
    exibe(Pessoa, opcao);
}

int main() {
	struct Cartaodevoo Passageiro;
	preenche(&Passageiro);
}