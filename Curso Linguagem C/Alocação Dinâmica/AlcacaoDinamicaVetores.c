#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
	//É criado um ponteiro auxiliar
	int *aux;
	
	//Ponteiro aux recebe os endereços alocados dinamicamente
	aux = (int *) malloc(tamanho * sizeof(int));
	
	//Retorna o ponteiro que aponta a para a primeira posição do vetor alocado?
	return aux;
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//
	int *vetor, tamanho, contador;
	
	//lendo o tamanho do vetor pelo usuário
	printf("Digite um tamanho para o vetor: ");
	scanf("%d", tamanho);
	
	//Ponteiro recebe o endereço de mamória que alocado para vetor
	vetor = alocaVetor(tamanho);
	
	for(contador = 0; contador < tamanho; contador++) {
		printf("Espaço %d do vetor: ", contador);
		scanf("%d", &vetor[contador]);	
	}
	
	for (contador = 0; contador < tamanho; contador++) {
		printf("%d", vetor[contador]);
	}
	
	free(vetor);
	
	getchar();
	return 0;
}
