// O preço dos produtos em uma loja de aeroporto pode ser exibido em reais, dólares ou euros.
//     Crie um tipo de dados Preco que permita as três representações e identifique o subtipo em uso.
//     Crie uma função exibe que receba um dado do tipo Preco e exiba o valor e a moeda.
//     Crie uma função altera que receba um preço e altere-o para o subtipo passado. Use a função exibe para verificar se a conversão está correta.

#include <stdio.h>

enum Moeda {Real, Euro, Dolar};

union Quantia {
    double real;
    double euro;
    double dolar;
};

struct Preco {
    union Quantia quantia;
    enum Moeda moeda;
};

void exibe(struct Preco* p) {
    if (p->moeda == Real) {
        printf("Custo de %.2f Reais\n", p->quantia.real);
    }
    else if (p->moeda == Euro) {
        printf("Custo de %.2f Euros\n", p->quantia.euro);
    }
    else if (p->moeda == Dolar) {
        printf("Custo de %.2f Dolares\n", p->quantia.dolar);
    }
}

void altera(struct Preco* p, enum Moeda nv) {
    double Valorreal;
    
    if (p->moeda == Real) {
        Valorreal = p->quantia.real;
    }
    else if (p->moeda == Euro) {
        Valorreal = p->quantia.euro*6;
    }
    else if (p->moeda == Dolar) {
        Valorreal = p->quantia.dolar*5;
    }

    p->moeda = nv;
    if (nv == Real) {
        p->quantia.real = Valorreal;
    }
    else if (nv == Euro) {
        p->quantia.euro = Valorreal/6;
    }
    else if (nv == Dolar) {
        p->quantia.dolar = Valorreal/5;
    }
}

int main() {
    struct Preco meupreco;
    meupreco.quantia.real = 30.25;
    meupreco.moeda = Real;
    exibe(&meupreco);

    altera(&meupreco, Euro);
    exibe(&meupreco);

    altera(&meupreco, Dolar);
    exibe(&meupreco);
}