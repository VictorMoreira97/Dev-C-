#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int vetor[10], inicio, contador3, resposta, inicio2, contador2;
	
	contador3 = 0;
	contador2 = 0;
	
	for (inicio=0; inicio<10; inicio++) {
		printf("Digite o valor %d� do vetor: ", inicio+1);
		scanf("%d", &vetor[inicio]);
		if (vetor[inicio] == 3) {
			contador3++;
		}
	}
	
	printf("O n�mero 3 apareceu %d vezes no vetor. \n", contador3);
	
	printf("Qual n�mero deseja pesquisar?");
	scanf("%d", &resposta);
		
	for (inicio2=0; inicio2<10; inicio2++) {
		if (vetor[inicio2] == resposta) {
			contador2++;
		}
	}
	
	printf("O n�mero %d apareceu %d vezes no vetor.", resposta, contador2);
}


