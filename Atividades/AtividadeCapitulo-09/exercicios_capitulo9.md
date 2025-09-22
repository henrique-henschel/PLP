# Exercícios – Capítulo 9: Subprogramas

## Exercício 1 – Passagem de Parâmetros por Valor e por Referência
Considere o seguinte pseudocódigo de uma função que tenta dobrar o valor de um número:

```text
procedure dobrar(x)
    x := x * 2
end
```

1. Implemente esse subprograma em **C** duas vezes:
   - A primeira versão recebendo o parâmetro **por valor**.
   - A segunda versão recebendo o parâmetro **por referência** (usando ponteiros).

2. Escreva um programa principal que:
   - Crie uma variável inteira com valor inicial 10.
   - Chame a função `dobrar` por valor e exiba o resultado.
   - Chame a função `dobrar` por referência e exiba o resultado.

**Questões:**
- Qual a diferença observada entre as duas versões?
- Por que o valor da variável só se altera na versão por referência?
- Relacione essa diferença com as estratégias de passagem de parâmetros discutidas no Capítulo 9.

---

## Exercício 2 – Corrotinas em GoLang (primeiro contato)
As **corrotinas** permitem a execução concorrente de rotinas dentro de um programa. Em Go, isso é feito com a palavra-chave `go`.

1. Crie um arquivo chamado `main.go`.
2. Implemente o seguinte programa simples:

```go
package main

import (
    "fmt"
    "time"
)

func escrever(texto string) {
    for i := 0; i < 5; i++ {
        fmt.Println(texto, i)
        time.Sleep(time.Millisecond * 500)
    }
}

func main() {
    go escrever("Corrotina")  // executa em paralelo
    escrever("Função normal") // executa no fluxo principal
}
```

3. Compile e execute o programa com:
   ```bash
   go run main.go
   ```

**Questões:**
- O que acontece com a ordem das mensagens exibidas?
- Por que as mensagens da corrotina e da função normal se intercalam?
- Relacione esse comportamento com a definição de **corrotinas** estudada no Capítulo 9.
