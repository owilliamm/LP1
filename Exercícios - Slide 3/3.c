// Crie um vetor para guardar 50 temperaturas: int temps[50];
// As temperaturas variam entre -100 e 100.
// Leia as 50 temperaturas para o vetor
// Calcule a média das temperaturas no vetor
// Exiba a quantidade de leituras acima da média calculada
// Em vez de int, use o tamanho mais econômico
// (Mas lembre-se que o "%d" do scanf só funciona com o tipo int.)

#include <stdio.h>

int main() {
    signed char temps[5];
    int leituras = 0; int soma = 0; int i;

    for (i = 0; i<5; i++) {
        int temp;
        scanf("%d", &temp);
        temps[i] = (signed char)temp;
        soma += temps[i];
    }

    float media = soma/5.0;

    for (i = 0; i<5; i++) {
        if (temps[i] > media) {
            leituras++;
        }
    }
    printf("A media foi de: %.2f\n", media);
    printf("Houveram %d leituras acima da media", leituras);
}