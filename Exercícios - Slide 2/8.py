# Ler dois números n1 e n2
# Exibir todos os números entre n1 e n2
# Fazer em Python e em C

n1 = input("Digite um numero\n")
n2 = input("Digite outro numero\n")

for i in range(int(n1)+1, int(n2)):
    print(i, end=" ")