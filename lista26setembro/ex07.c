#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int vetor[10], inicio, contador3, resposta, inicio2, contador2;
	
	contador3 = 0;
	contador2 = 0;
	
	for (inicio=0; inicio<10; inicio++) {
		printf("Digite o valor %dº do vetor: ", inicio+1);
		scanf("%d", &vetor[inicio]);
		if (vetor[inicio] == 3) {
			contador3++;
		}
	}
	
	printf("O número 3 apareceu %d vezes no vetor. \n", contador3);
	
	printf("Qual número deseja pesquisar?");
	scanf("%d", &resposta);
		
	for (inicio2=0; inicio2<10; inicio2++) {
		if (vetor[inicio2] == resposta) {
			contador2++;
		}
	}
	
	printf("O número %d apareceu %d vezes no vetor.", resposta, contador2);
}


