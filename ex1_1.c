#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int numero, contador;
	float soma, media;	
	
	contador = 0;
	
	for (contador; contador<4; contador++) {
		numero = 0;
		printf("Digite o %d� n�mero: \n", contador+1);
		scanf("%d", &numero);
		soma += numero;
	}
	
	media = soma/4;
	
	printf("Soma: %.0f\n", soma);
	printf("M�dia dos 4 n�meros: %.1f", media);
	
	return 0;
}
