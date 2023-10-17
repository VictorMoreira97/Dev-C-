#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
	//Criar um ponteiro auxiliar
	int *aux;
	
	//alocação dinâmica de memória: reservar um espaço da memória para as variáves que estão nas casas do vetor.
	aux = malloc(tamanho * sizeof(int));
	
	//Retorna o ponteiro que aponta para a primeira posição da memória do vetor alocado
	return aux;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//definir variável
	int *vetor, tamanho, cont;
	
	//Ler o tamanho do vetor pelo usuário
	printf("Digite o tamanho para o vetor: ");
	scanf("%d", &tamanho);
	
	//Ponteiro recebe o endereço de memória que foi alocado para o vetor
	vetor = alocaVetor(tamanho);
	
	vetor[0] = 10;
	vetor[1] = 10;
	vetor[2] = 10;
	vetor[3] = 10;	
	
	//imprimir vetor
	for(cont = 0; cont < tamanho; cont++) {
		printf("%d\n", vetor[cont]);
	}
	
	
	return 0;
}
