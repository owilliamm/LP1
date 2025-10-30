// Considere um arquivo com o seguinte formato:
// Maria    020       RJ
// Joao     101       SP
// Jose     006       MG

// Os nomes, idades e estados aparecem sempre, respectivamente, nas posições 0, 10 e 20 de cada linha. As idades possuem exatamente 3 caracteres. Os estados possuem exatamente 2 caracteres.
// Escreva um programa que leia o número de uma linha e mostre, separadamente, a idade e estado correspondentes. Por exemplo, para o arquivo acima, a leitura 2 deve exibir a idade 101 e o estado SP.
// Caso a linha não exista, o programa deve exibir registro nao encontrado.
// Teste o programa com linhas inválidas (e.g., -1, 0, 1000, etc).

#include <stdio.h>
#include <assert.h>

int main() {
    char Coluna[25];
    char Idade[4];
    char Estado[3];
    int Escolhalinha = 0;
    int i = 0;
    int checagem = 0;
    
    FILE* arq = fopen("1.txt", "r");
    assert(arq);

    printf("Numero da linha: ");
    scanf("%d", &Escolhalinha);

    while(fgets(Coluna, sizeof(Coluna), arq) != NULL) {
        i++;
        if (i == Escolhalinha) {
            Idade[0] = Coluna[9];
            Idade[1] = Coluna[10];
            Idade[2] = Coluna[11];
            Idade[3] = '\0';

            Estado[0] = Coluna[19];
            Estado[1] = Coluna[20];
            Estado[2] = '\0';

            printf("Idade: %s\n", Idade);
            printf("Estado: %s\n", Estado);

            checagem = 1;
            break;
        }
    }

    if (!checagem) {
        printf("Registro nao encontrado.");
    }

    fclose(arq);
}