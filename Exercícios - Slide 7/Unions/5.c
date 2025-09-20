// Defina um tipo Animal que possa representar as diferentes classes de animais vertebrados com as seguintes propriedades:

// Anfíbios: número de patas, espessura da pele, se possui cauda ou não.
// Aves: comprimento do bico, autonomia de vôo, faixa de frequência do canto.
// Mamíferos: quantidade de dentes, volume do cérebro, velocidade terrestre.
// Répteis: se é venenoso, autonomia debaixo d'água, espessura dos ovos.

// Crie 6 exemplos (instâncias) de animais variando as classes e propriedades.

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

union Dadosanimal {
    struct Anfibio anfibio;
    struct Ave ave;
    struct Mamifero mamifero;
    struct Reptil reptil;
};

struct Animal {
    enum Classe classe;
    union Dadosanimal dados;
};

int main() {
    struct Animal animal[6];
    
    animal[0].classe = Anfibio;
    animal[0].dados.anfibio.numpatas = 4;
    animal[0].dados.anfibio.espessurapele = 1; //mm
    animal[0].dados.anfibio.possuicauda = 1;   //1 ou 0 (sim ou não)
    
    animal[1].classe = Ave;
    animal[1].dados.ave.comprimentobico = 10;   //cm
    animal[1].dados.ave.autonomiavoo = 30;      //horas
    animal[1].dados.ave.faixafrequencia = 3000; //hz

    animal[2].classe = Mamifero;
    animal[2].dados.mamifero.quantiadentes = 42;
    animal[2].dados.mamifero.volumecerebro = 100;      //cm³
    animal[2].dados.mamifero.velocidadeterrestre = 65; //km/h
    
    animal[3].classe = Reptil;
    animal[3].dados.reptil.venenoso = 1;        //1 ou 0 (sim ou não)
    animal[3].dados.reptil.autonomiaagua = 0.5; //horas
    animal[3].dados.reptil.espessuraovos = 0.2; //mm

    animal[4].classe = Ave;
    animal[4].dados.ave.comprimentobico = 18;  //cm
    animal[4].dados.ave.autonomiavoo = 200;    //km
    animal[4].dados.ave.faixafrequencia = 100; //hz
    
    animal[5].classe = Ave;
    animal[5].dados.ave.comprimentobico = 7;  //cm
    animal[5].dados.ave.autonomiavoo = 15000; //horas
    animal[5].dados.ave.faixafrequencia = 18; //hz
}