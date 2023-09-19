#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguse");
	
	int matriz[3][3], linha, coluna;
		
	for (linha; linha<3; linha++) {

		for (coluna=0; coluna<3; coluna++) {
			printf("Digite o valor da Linha %d - Coluna %d: ", linha, coluna);
			scanf("%d", &matriz[linha][coluna]);
		}
		printf("---------------------------------------\n");
		coluna = 0;
	}
	
	for(linha=0; linha<3; linha++) {
		for(coluna = 0; coluna < 3; coluna++) {
			printf("%d - ", matriz[linha][coluna]);
		}
		printf("\n");
	}
}
