#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//aloca um vetor do tamanho pedido
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
	
	//ponteiro que vai aponta para o vetor criado
	int *vetor, tam, i, cont;
	
	//Lendo o tamanho do vetor
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	//vetor vai receber um endere�o de mem�ria com o vetor que foi alocado
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
	
	//Libera a mem�ria ap�s usar o vetorr
	free(vetor);
	
	return 0;
}
