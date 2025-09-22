# declarando a variavel inteira
num = 10

print(num)  # imprimir o valor da variavel

num = 'dez'  # sim, isso aqui funciona normalmente em Python

print(num)  # imprimir o novo valor da variavel (agora uma string)

# tentando somar 'num' (agora uma string) mais 5 (um inteiro)
soma = num + 5  # --> agora quebra, nessa linha aqui
                # tipagem eh dinamica, mas eh forte
                # ai tbm abusou demais do interpretador, da erro