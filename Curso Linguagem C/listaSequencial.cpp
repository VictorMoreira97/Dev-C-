#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Aloca um vetor do tamanho pedido
int* alocaVetor(int tam) {
	
	//cria um ponteiro auxiliar
	int *v;
	
	//aloca memória para o novo vetor
	v = malloc(tam * sizeof(int));
	 
	return v; 
	
}

//imprime a lista sequencial
void imprimeSequencial (int *vetor, int tamanhoDaListaSequencial) {
	
	int cont;
	
	//exibindo valores
	for(cont = 0; cont < tamanhoDaListaSequencial; cont++) {
		printf("\nValor %d: %d", cont, vetor[cont]);
	}
	
	printf("\n");
}

int main () {
	
	//variaveis
	int vetor[TAM] = {1, 2, 3}, cont, tamanhoDaLista;
	
	imprimeSequencial(vetor, 3);
	
	//Exibindo valores
	for(cont = 0; cont < TAM; cont++) {
		printf("Escreva o valor %d: ", cont);
		scanf("%d", &vetor[cont]);
	}
	
	imprimeSequencial(vetor, 3);
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", tamanhoDaLista);
	
	//ponteiro para o novo vetor
	int *vetorLidoNaHora;
	
	vetorLidoNaHora;
	
	vetorLidoNaHora = alocaVetor(tamanhoDaLista);
	
	return 0;
	
}
