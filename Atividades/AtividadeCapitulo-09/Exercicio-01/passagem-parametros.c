#include <stdio.h>

void dobrar_por_valor(int x) {
	x *= 2;
}

void dobrar_por_referencia(int *x) {
	*x *= 2;
}

int main(void) {
	int variavel_01 = 10;
	int variavel_02 = 10;
	
	dobrar_por_valor(variavel_01);
	printf("Valor atual da variavel passada por valor: %d\n", variavel_01);
	
	dobrar_por_referencia(&variavel_02);
	printf("Valor atual da variavel passada por referencia: %d\n", variavel_02);
	
	return 0;
}
