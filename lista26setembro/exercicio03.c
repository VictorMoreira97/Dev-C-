#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int numero1, numero2, maior;
	
	maior = 0;
	
	printf("Digite o 1º valor: \n");
	scanf("%d", &numero1);
	
	maior = numero1;
	
	printf("Digite o 2º valor: \n");
	scanf("%d", &numero2);
	
	if (numero2 > maior) {
		maior = numero2;
		printf("O maior é %d", maior);
	} else if (numero1 == numero2){
		printf("Ambos são iguais");
	} else {
		printf("O maior é %d", maior);
	}
	
	return 0;
}

