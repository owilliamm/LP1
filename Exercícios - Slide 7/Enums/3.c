// Crie um novo tipo Boolean com somente os valores true e false. Faça o tipo ser compatível com a noção já concebida de booleano de C.

#include <stdio.h>

typedef enum {False, True} boolean; // False antes de True, pois False = 0 e True = 1.

int main() {
    boolean a = True;

    if (a) {
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }
}