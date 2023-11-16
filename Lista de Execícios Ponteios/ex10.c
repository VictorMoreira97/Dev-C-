#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int linhas, colunas, caracteres, contadorLinhas, contadorColunas;
	
	printf("Nº de Linhas: ");
	scanf("%d", &linhas);
	
	printf("Nº de Colunas: ");
	scanf("%d", &colunas);
	
	//matriz = (int *) malloc (linhas * colunas * caracteres * sizeof(int));
	
	caracteres = 255;
	
	char matriz[linhas][colunas][caracteres];
	
	
	for (contadorLinhas = 0; contadorLinhas < linhas; contadorLinhas++) {
		
		for (contadorColunas = 0; contadorColunas < colunas; contadorColunas++) {
			
			printf("String linha %d, coluna %d: ", contadorLinhas, contadorColunas);
			scanf("%s", &matriz[contadorLinhas][contadorColunas][caracteres]);
			
		}
		
		printf("\n");
	}
	
	for (contadorLinhas = 0; contadorLinhas < linhas; contadorLinhas++) {
		
		for (contadorColunas = 0; contadorColunas < colunas; contadorColunas++) {
			
			printf("String linha %d, coluna %d: ", contadorLinhas, contadorColunas);
			printf("%s", &matriz[contadorLinhas][contadorColunas][caracteres]);
			
		}
		
		printf("\n");
	}
	
	free(matriz);
	
	
	return 0;
}
