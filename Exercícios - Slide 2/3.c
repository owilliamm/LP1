// Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais.
// Um dólar está custando 3.17 reais.
// Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, escreva BOM NEGÓCIO.

#include <stdio.h>

char* real(int valor) {
    if (valor*3.17 > 1000) {
        return "MAL NEGOCIO";
    } else {
        return "BOM NEGOCIO";
    }
}

int main() {
    int dolar;
    scanf("%d", &dolar);
    printf("%s", real(dolar));
}