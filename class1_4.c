#include <stdio.h>

int main () {
	// declaração das variáveis
	int numero;
	
	printf("Entre com um valor: ");
	scanf("%d", &numero);
	getchar();
	printf("O numero digitado foi %d", numero);
	getchar(); // o programa para aqui antes de fechar
	printf("Fim do programa");
}
