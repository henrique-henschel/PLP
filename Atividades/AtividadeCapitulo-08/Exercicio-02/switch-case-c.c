#include <stdio.h>

int main(void) {
	char opcao;
	
	printf("===== MENU DE OPCOES =====\n\n");
	printf("Escolha a opcao desejada:\n");
	printf("1 - Calcular o quadrado de um numero.\n");
	printf("2 - Calcular o fatorial de um numero.\n");
	printf("3 - Sair do programa.\n\n");
	printf("--> Digite o numero da opcao desejada: ");
	scanf("%c", &opcao);
	
	switch (opcao) {
		case '1':
			printf("\n>>> Voce escolheu calcular o QUADRADO de um numero.\n");
			break;
		case '2':
			printf("\n>>> Voce escolheu calcular o FATORIAL de um numero.\n");
			break;
		case '3':
			printf("\n>>> Voce escolheu SAIR do programa.\n");
			printf("\nSaindo...\n");
			break;
		default:
			printf("\nERRO! Opcao INVALIDA escolhida! O programa ira encerrar.\n");
			printf("\nSaindo...\n");
	}
	
	return 0;
}
