# variavel global
x = 10

# funcao 'f()' q imprime o valor de x
def f():
    print(x)

# funcao 'g()' q define 'x = 20' e chama a funcao 'f()'
def g():
    x = 20
    f()

# execucao do codigo (chamar 'g()')
g()