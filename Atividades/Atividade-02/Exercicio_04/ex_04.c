#include <stdio.h>
#include <stdlib.h>

// criar a struct 'Livro'
typedef struct {
    char titulo[50];
    char autor[50];
    int anoPublicacao;
} Livro;

int main(void) {
    // criar array de 5 inteiros e inicializa-lo
    int array[] = {12, 21, 33, 42, 99};

    // inicializar um registro/objeto a partir da struct
    Livro livro01 = {"O Hobbit", "J. R. R. Tolkien", 1937};

    int i;
    for (i = 0; i < sizeof(array) / sizeof(int); i++) {
        printf("Indice [%d] | Valor: %d\n", i, array[i]);
    }

    printf("\n");  // espaco pra separar

    printf("%s\n", livro01.titulo);
    printf("%s\n", livro01.autor);
    printf("%d\n", livro01.anoPublicacao);

    return 0;
}