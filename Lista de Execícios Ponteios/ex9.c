#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//função que define o tamanho do vetor a ser criado 
int* tamanhoVetor (int tamanho) {
	int *ponteiro;
	//malloc() vai alocar a memória para o ponteiro 
	//usando o parametro tamanho
	ponteiro = (int *) malloc(tamanho * sizeof (int));
	//o ponteio com o espaço alocado será retornado
	return ponteiro;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//*nros é o ponteiro do vetor a ser criado
	//tamanho é o valor do tamanho do vetor
	//i servirá de contador
	int *nros, tamanho, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	//o vetor nros vai receber o endereço do
	//espaço que a função tamanhoVetor vai 
	//alocar na memória para ele
	nros = tamanhoVetor(tamanho);
	
	for(i = 0; i < tamanho; i++) {
	 	printf("Digite um número: ");
	 	scanf("%d", &nros[i]);
	 }
	 
	 for (i = 0; i < tamanho; i++) {
	 	printf("%d\t", nros[i]);
	 }
	 printf("\n");
	 for (i = tamanho - 1; i >= 0; i--) {
	 	printf("%d\t", nros[i]);
	 }
	
	return 0;
}
