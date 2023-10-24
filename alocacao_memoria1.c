#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
	//criar um ponteiro auxiliar
	int *aux;
	
	//alocação dinâmica de memória
	aux = malloc(tamanho * sizeof(int));
	
	//retorna o ponteiro que aponta para a primeira posição de memória do vetor alocado
	return aux;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//ponteiro * armazena endereço de memória
	int *vetor, tamanho, cont;
	
	//lendo o tamanho do vetor do usuário
	printf("Digite um tamanho para o vetor: ");
	scanf("%d", tamanho);
	
	//Ponteiro * recebe o endereço de mamória que foi alocado para o vetor
	vetor = alocaVetor(tamanho);
	
	//colocar valores no vetor
	for(cont = 0; cont < tamanho; cont++) {
		printf("%d\n", vetor(cont));
	}
	
	free();
	
	return 0;
}

