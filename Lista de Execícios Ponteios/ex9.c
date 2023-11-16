#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o que define o tamanho do vetor a ser criado 
int* tamanhoVetor (int tamanho) {
	int *ponteiro;
	//malloc() vai alocar a mem�ria para o ponteiro 
	//usando o parametro tamanho
	ponteiro = (int *) malloc(tamanho * sizeof (int));
	//o ponteio com o espa�o alocado ser� retornado
	return ponteiro;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//*nros � o ponteiro do vetor a ser criado
	//tamanho � o valor do tamanho do vetor
	//i servir� de contador
	int *nros, tamanho, i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	//o vetor nros vai receber o endere�o do
	//espa�o que a fun��o tamanhoVetor vai 
	//alocar na mem�ria para ele
	nros = tamanhoVetor(tamanho);
	
	for(i = 0; i < tamanho; i++) {
	 	printf("Digite um n�mero: ");
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
