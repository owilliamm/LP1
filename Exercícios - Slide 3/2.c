#include <stdio.h>
void main (void) {
    printf("Soma = %d\n", 100-"10");
}

O que você espera que aconteça ao compilar o programa? Por quê?
// Erro. Pela tentativa de somar um inteiro e um char.

Quais são os tipos dos operandos na operação de subtração?
// Int e Char.

Transcreva a mensagem de erro de compilação e a explique.
// error: invalid operands to binary - (have ‘int’ and ‘char *’)
// O compilador reclama que o usuário está tentando fazer uma
// operação com um int e um char*
