#include <stdio.h>

char* dica(int velocidade) {
    if (velocidade*1.6 < 80) {
        return "ACELERE";
    }
    if (velocidade*1.6 > 100) {
        return "DESACELERE";
    } else {
        return "MANTENHA";
    }
}

int main() {
    int velmph;
    scanf("%d", &velmph);
    printf("%s", dica(velmph));
}