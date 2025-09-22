def iterar_lista(lista) -> int | None:
    for numero in lista:
        if numero == 0:
            break
        if numero < 0:
            continue
        if numero % 2 == 0:
            return numero * 2

    return None 

lista_numeros = [3, 5, 2, 7, 12, -5, 2, 0, 1, -5, 15, 2]
print(str(iterar_lista(lista_numeros)))