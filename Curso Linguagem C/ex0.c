#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	while(1) {
		int numero, saida;
		printf("Digite um n�mero: \n");
		scanf("%d", &numero);
		printf("O quadrado de %d � %d. \n", numero, numero*numero);
		
		printf("Pressione 's' para sair ou outra tecla para continuar\n");
		scanf("%s", saida);
		if (saida == 's') {
			break;
		}
	}
	
}
