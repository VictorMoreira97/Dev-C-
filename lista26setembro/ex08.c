#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int linhas, colunas, maior, menor;
	int matriz[3][4];
	
	maior = 0;
	menor = maior;
	
	for(linhas=0; linhas<3; linhas++) {
		for(colunas=0; colunas<3; colunas++) {
			printf("Digite o valor da linha %d coluna %d: ", linhas, colunas);
			scanf("%d", &matriz[linhas][colunas]);
			printf("\n");
			if (matriz[linhas][colunas] >= maior) {
				maior = matriz[linhas][colunas];
			}
			
			if (matriz[linhas][colunas] <= menor) {
				menor = matriz[linhas][colunas];
			}
		}
	}
	
	printf("O maior valor digitado foi %d \n", maior);
	printf("O menor valor digitado foi %d \n", menor);
}
