#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <new>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	
	int tamanho, cont;
	
	printf("Digite o tamanho: ");
	scanf("%d", &tamanho);
	
	int *vetor = new int(tamanho);
	
	for(cont=0; cont < tamanho; cont++) {
		vetor[cont] = cont;
		printf("\n%d", vetor[cont]);
	}
	
	free(vetor);
	
	return 0;
}

