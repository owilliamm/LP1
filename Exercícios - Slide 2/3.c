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