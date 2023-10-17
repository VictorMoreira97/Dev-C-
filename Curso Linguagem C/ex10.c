#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* alocaVetor(int tamanho) {
	//Criar um ponteiro auxiliar
	int *aux;
	
	//aloca��o din�mica de mem�ria: reservar um espa�o da mem�ria para as vari�ves que est�o nas casas do vetor.
	aux = malloc(tamanho * sizeof(int));
	
	//Retorna o ponteiro que aponta para a primeira posi��o da mem�ria do vetor alocado
	return aux;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//definir vari�vel
	int *vetor, tamanho, cont;
	
	//Ler o tamanho do vetor pelo usu�rio
	printf("Digite o tamanho para o vetor: ");
	scanf("%d", &tamanho);
	
	//Ponteiro recebe o endere�o de mem�ria que foi alocado para o vetor
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
