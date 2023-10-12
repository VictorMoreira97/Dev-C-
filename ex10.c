#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[9];
	int primos[9];
	
	int inicio, inicio2;
	
	for(inicio=0; inicio<9; inicio++) {
		printf("Digite o %dº valor do vetor: \n", inicio+1);
		scanf("%d", &vetor[inicio]);
		
		if (vetor[inicio] % inicio != 1 || vetor[inicio] % inicio != vetor[inicio]) {
			primos[vetor] = vetor[inicio]; 
		}	
	
	
	printf("Números primos: \n");
	
	for(inicio2=0; inicio2<9; inicio2++) {
		printf("%d - posição: %d\n", vetor[inicio2], inicio2);
	}
	
	return 0;
}
