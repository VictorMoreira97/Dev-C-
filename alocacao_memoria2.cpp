#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho, cont;
	
	printf("digite o tamanho: ");
	scanf("%d", &tamanho);
	
	//ponteiro * que recebe o novo vetor vazio
	int *vetor = new int[tamanho];
	
	//Modificando e imprimindo valores
	for (cont = 0; cont < tamanho; cont++) {
		vetor[cont] = cont;
		printf("\n%d", vetor[cont]);
	}
	
	//retorno da função
	
	
	
	return 0;
}
