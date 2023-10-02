#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int tamanhoQuadrado, linha, coluna; 
	
	printf("Tamanho do quadrado: ");
	scanf("%d", &tamanhoQuadrado);
	
	for (linha=0; linha<tamanhoQuadrado; linha++) {
		for (coluna=0; coluna<tamanhoQuadrado; coluna++) {
			printf(" X ");
		}
		printf("\n");
	}
	
}
