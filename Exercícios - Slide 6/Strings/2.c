// Implemente a função concatena:
//    Recebe uma string de destino
//    Recebe duas strings de origem
//    Junta em destino as duas strings de origem (sobrescrevendo o conteúdo de destino, se houver)
//          void concatena (char* d, char* o1, char* o2);

// A implementação deve usar a função tamanho da questão 3.
// Obviamente, não use a função strcat.

#include <stdio.h>

int tamanho(char* str) {
        int caracteres = 0;
        int iteracao = 0;
        while(str[iteracao] != '\0') {
                caracteres++;
                iteracao++;
        }
        return caracteres;
}

void concatena (char* d, char* o1, char* o2) {
    int iteracao1 = 0; int iteracao2 = 0;

    while (o1[iteracao1] != '\0') {
        d[iteracao1] = o1[iteracao1];
        iteracao1++;
    }
    while (o2[iteracao2] != '\0') {
        d[iteracao1] = o2[iteracao2];
        iteracao1++;
        iteracao2++;
    }
    d[iteracao1+iteracao2] = '\0';
    printf("%s", d);
}

int main() {
        char stringdest[200]; char stringorig1[100]; char stringorig2[100];
        printf("String de origem 1\n");
        scanf("%s", stringorig1);
        printf("String de origem 2\n");
        scanf("%s", stringorig2);
        concatena(stringdest, stringorig1, stringorig2);
}