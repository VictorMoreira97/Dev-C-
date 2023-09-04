#include <stdio.h>

int main () {
	
	int vetor[5];
	int i;
	// neste caso, a variável i deve ter o mesmo tamanho que o vetor, 
	//para que o código não tente acessar regiões da memória que não 
	//foram reservadas para o vertor declarado.
	for (i=0; i<5; i++) {
		
		printf("Insira um dado:\n");
		scanf("%d", &vetor[i]);
		
	}
	
	printf("Dados inseridos");
	for(i=0; i<5; i++) {
		
		printf("%d ", vetor[i]);
		
	}
}
