Qual é a diferença entre struct e union. Dê exemplos de uso que identifiquem a necessidade dos dois construtores de tipos.
// Uma union usa somente a memória criada pelo elemento que mais ocupa espaço. Uma struct cria um espaço na memória para cada elemento.
// A union pode ser usada para representar algum valor que pode ser, por exemplo, float ou char, mas não ambos ao mesmo tempo.
// A struct pode ser usada para representar um ponto, que seriam três valores que representam algo diferente mas precisam existir ao mesmo tempo.