#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int num1, num2, soma;
	char resposta;
	
	while (1==1) {
		
		
		printf("Defina o 1º valor: ");
		scanf("%d", &num1);
		
		printf("\n");
		
		printf("Defina o segundo valor: ");
		scanf("%d", &num2);
		
		printf("\n");
		
		soma = num1 + num2;
		
		printf("A soma é %d", soma);
		
		printf("\n");
		
		printf("\nNovo cálculo? [s/n] ");
		scanf("%s", &resposta);
		
		if (resposta=='S'||resposta=='s') {
			continue;
		} else {
			break;
		}
		
	}
	
}
