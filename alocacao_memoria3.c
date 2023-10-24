#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int linas = 3, colunas = 3, i , j;
	int **matriz;
	
	matriz (int*) malloc(linhas * sizeof(int*));
	
	for(i = 0; i < linhas; i++) {
		matriz[i] = (int *) malloc(colnas * sizeof(int));
	}
	
	for(i = 0; i < colunas; j++) {
		for (j = 0; j < colunas; j++) {
			matriz[i][j] = i; 
			print("%d ", matriz[i][j]);
		};
		printf("\n");
	}
	
	return 0;
}
