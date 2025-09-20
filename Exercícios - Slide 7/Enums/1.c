// Crie uma enumeração enum Dia para representar os dias da semana.
// Crie uma função nome que recebe um dia da semana e retorna uma string correspondente:
//     char* nome (enum Dia) { ... }
//     Por exemplo, a chamada printf("%s\n", nome(Ter)) deve exibir Terca na tela.

#include <stdio.h>

enum Dia {
    Dom,
    Seg,
    Ter,
    Qua,
    Qui,
    Sex,
    Sab,
};

char* nome(enum Dia D) {
    char* Dias[7] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
    return Dias[D];
}

void main() {
    printf("%s\n", nome(Ter));
}