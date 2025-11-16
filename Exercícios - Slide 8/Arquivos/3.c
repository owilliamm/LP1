Considerando o terminador \0, que cuidados são
necessários ao lidar com strings e arquivos em C...

... ao escrever uma string para um arquivo?
// Limitar a quantidade de caracteres a serem checados no scanf, para evitar lixo.

... ao ler uma string de um arquivo?
// É necessário ler somente até o (tamanho da palavra - 1) a fim de deixar
// espaço para colocar um terminador, senão obtemos lixo de memória na string.