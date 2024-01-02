#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
	//� criado um ponteiro auxiliar
	int *aux;
	
	//Ponteiro aux recebe os endere�os alocados dinamicamente
	aux = (int *) malloc(tamanho * sizeof(int));
	
	//Retorna o ponteiro que aponta a para a primeira posi��o do vetor alocado?
	return aux;
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//
	int *vetor, tamanho, contador;
	
	//lendo o tamanho do vetor pelo usu�rio
	printf("Digite um tamanho para o vetor: ");
	scanf("%d", tamanho);
	
	//Ponteiro recebe o endere�o de mam�ria que alocado para vetor
	vetor = alocaVetor(tamanho);
	
	for(contador = 0; contador < tamanho; contador++) {
		printf("Espa�o %d do vetor: ", contador);
		scanf("%d", &vetor[contador]);	
	}
	
	for (contador = 0; contador < tamanho; contador++) {
		printf("%d", vetor[contador]);
	}
	
	free(vetor);
	
	getchar();
	return 0;
}
