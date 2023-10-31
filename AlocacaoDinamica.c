#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//aloca um vetor do tamanho pedido
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
	
	//ponteiro que vai aponta para o vetor criado
	int *vetor, tam, i, cont;
	
	//Lendo o tamanho do vetor
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	//vetor vai receber um endereço de memória com o vetor que foi alocado
	//ponteiro = ENDERECO_DE_MEDORIA ou PONTEIRO
	//*ponteiro = VALOR
	vetor = alocaVetor(tam);
	
	//Colocando alguns valores no vetor
	for(cont = 0; cont < tam; cont++) {
		int valor;
		printf("Digite o valor %d do vetor: ", cont);
		scanf("%d", &valor);
		vetor[cont] = valor;
	}
	
	//imprimindo o vetor na tela
	for(i=0; i<tam; i++) {
		printf("%d", vetor[i]);
	}
	
	//Libera a memória após usar o vetorr
	free(vetor);
	
	return 0;
}
