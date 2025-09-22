public class Ex03 {
    public static void main(String[] args) {
        // declarando a variavel inteira
        int num = 10;

        // tentar atribuir uma string a ela
        num = "dez";  // --> isto aqui nao vai nem compilar

        // tentar somar 'num' + 5
        int soma = num + 5;  // nem precisa chegar ate aqui,
                             // ja nem compila de qualquer forma
                             // esta TUDO ERRADO para o compilador Java (o 'javac')
    }
}