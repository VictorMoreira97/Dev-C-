#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
	//criar um ponteiro auxiliar
	int *aux;
	
	//aloca��o din�mica de mem�ria
	aux = malloc(tamanho * sizeof(int));
	
	//retorna o ponteiro que aponta para a primeira posi��o de mem�ria do vetor alocado
	return aux;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//ponteiro * armazena endere�o de mem�ria
	int *vetor, tamanho, cont;
	
	//lendo o tamanho do vetor do usu�rio
	printf("Digite um tamanho para o vetor: ");
	scanf("%d", tamanho);
	
	//Ponteiro * recebe o endere�o de mam�ria que foi alocado para o vetor
	vetor = alocaVetor(tamanho);
	
	//colocar valores no vetor
	for(cont = 0; cont < tamanho; cont++) {
		printf("%d\n", vetor(cont));
	}
	
	free();
	
	return 0;
}

