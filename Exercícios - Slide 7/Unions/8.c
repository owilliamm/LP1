// Altere o exemplo 5 para incluir propriedades em comum a todas as classes de animais, tais como nome da espécie e cor predominate.
// Atualize os exemplos para funcionarem com a nova representação.

// Defina um tipo Animal que possa representar as diferentes classes de animais vertebrados com as seguintes propriedades:

#include <stdio.h>

enum Classe {Anfibio, Ave, Mamifero, Reptil};

struct Anfibio {
    int numpatas;
    float espessurapele;
    int possuicauda;
};

struct Ave {
    float comprimentobico;
    float autonomiavoo;
    float faixafrequencia;
};

struct Mamifero {
    int quantiadentes;
    float volumecerebro;
    float velocidadeterrestre;
};

struct Reptil {
    int venenoso;
    float autonomiaagua;
    float espessuraovos;
};

union DadosAnimal {
    struct Anfibio anfibio;
    struct Ave ave;
    struct Mamifero mamifero;
    struct Reptil reptil;
};

struct Animal {
    char nome[50];
    char cor[10];
    enum Classe classe;
    union DadosAnimal dados;
};

void fazerstring(char destino[], char origem[]) {
    int i = 0;
    while (origem[i] != '\0') {
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';
}

int main() {
    struct Animal animal[6];
    
    fazerstring(animal[0].nome, "Sapo");
    fazerstring(animal[0].cor, "Verde");
    animal[0].classe = Anfibio;
    animal[0].dados.anfibio.numpatas = 4;
    animal[0].dados.anfibio.espessurapele = 1; //mm
    animal[0].dados.anfibio.possuicauda = 1;   //1 ou 0 (sim ou não)
    
    fazerstring(animal[1].nome, "Beija-Flor");
    fazerstring(animal[1].cor, "Azul");
    animal[1].classe = Ave;
    animal[1].dados.ave.comprimentobico = 10;   //cm
    animal[1].dados.ave.autonomiavoo = 30;      //horas
    animal[1].dados.ave.faixafrequencia = 3000; //hz

    fazerstring(animal[2].nome, "Lobo");
    fazerstring(animal[2].cor, "Cinza");
    animal[2].classe = Mamifero;
    animal[2].dados.mamifero.quantiadentes = 42;
    animal[2].dados.mamifero.volumecerebro = 100;      //cm³
    animal[2].dados.mamifero.velocidadeterrestre = 65; //km/h
    
    fazerstring(animal[3].nome, "Cobra");
    fazerstring(animal[3].cor, "Verde");
    animal[3].classe = Reptil;
    animal[3].dados.reptil.venenoso = 1;        //1 ou 0 (sim ou não)
    animal[3].dados.reptil.autonomiaagua = 0.5; //horas
    animal[3].dados.reptil.espessuraovos = 0.2; //mm

    fazerstring(animal[4].nome, "Pica-Pau");
    fazerstring(animal[4].cor, "Preto");
    animal[4].classe = Ave;
    animal[4].dados.ave.comprimentobico = 18;  //cm
    animal[4].dados.ave.autonomiavoo = 200;    //km
    animal[4].dados.ave.faixafrequencia = 100; //hz
    
    fazerstring(animal[5].nome, "Albatroz");
    fazerstring(animal[5].cor, "Branco");
    animal[5].classe = Ave;
    animal[5].dados.ave.comprimentobico = 7;  //cm
    animal[5].dados.ave.autonomiavoo = 15000; //horas
    animal[5].dados.ave.faixafrequencia = 18; //hz
}