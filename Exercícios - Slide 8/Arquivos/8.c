Considere o exercício 7.

Qual é a relação entre o tamanho do nome de uma Pessoa e o tamanho final do arquivo gravado?
// Idade: 9
// Nome: Carlos
// Peso: 9
// --> 72 bytes

// Idade: 9
// Nome: C
// Peso: 9
// --> 72 bytes

// Não há relação. O sistema sempre aloca 64 bytes para nome[64], 4 bytes para idade e 4 bytes para peso.

Altere as funções de leitura e escrita para economizar espaço no disco.
// Feito. (aloca de acordo com o tamanho do nome)