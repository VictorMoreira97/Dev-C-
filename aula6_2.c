#include <stdio.h>

int main () {
	
	int vetor[5];
	int i;
	// neste caso, a vari�vel i deve ter o mesmo tamanho que o vetor, 
	//para que o c�digo n�o tente acessar regi�es da mem�ria que n�o 
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
