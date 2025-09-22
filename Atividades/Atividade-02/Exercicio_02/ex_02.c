#include <stdio.h>
#include <stdlib.h>

// criar a funcao 'contador()'
void contador(void) {
    int a = 0;  // variavel automatica
    static int b = 0;  // variavel estatica

    // a cada chamada da funcao, incrementar ambas e printar na tela
    a++;
    b++;
    printf("--> Valor de 'a': %d\n", a);
    printf("--> Valor de 'b': %d\n", b);
}

int main(void) {
    // chamar a funcao 'contador()' 3 vezes seguidas
    int i;
    for (i = 0; i < 3; i++) {
        printf("%da VEZ:\n", i + 1);  // Mostrar em qual vez esta
        contador();
        printf("------------------------------\n");  // Espaco pra destacar
    }

    return 0;
}