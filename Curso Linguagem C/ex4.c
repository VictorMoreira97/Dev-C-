#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[3];
	int contador;
	float soma, media;
	
	for(contador=0; contador<3; contador++) {
		printf("Digite o %dº valor do vetor: \n", contador+1);
		scanf("%d", &vetor[contador]);
		soma+=vetor[contador];
	}
	
	media = soma/3;
	
	printf("A média é %.1f", media);
	
	
	
	
	
	return 0;
}
