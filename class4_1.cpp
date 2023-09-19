#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguse");
	
	int vetor[5], indice;
	
	for(indice = 0; indice < 5; indice++) {
		printf("Digtie o %do. número: ", indice);
		scanf("%d", &vetor[indice]);
	}
	
	for(indice = 0; indice < 5; indice++)
		printf("O valor da posição %da. é %d\n", indice + 1, vetor[indice]);
		
	for(indice =4; indice >= 0; indice--)
		printf("O valor da posição %da. é %d\n", indice + 1, vetor[indice]);
	
}
