#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
	int *aux;
	
	aux = malloc(tamanho * sizeof(int));
	
	return aux;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int *vetor, tamanho;
	
	printf("Digite um tamanho para o vetor: ");
	scanf("%d", tamanho);
	
	vetor = alocaVetor(tam);
	
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;
	
	for(i=0; i<tam; i++) {
		printf("%d", vetor[i]);
	}
	
	free(vetor);
	
	getchar();
	return 0;
}
