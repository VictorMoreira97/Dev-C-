#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	float numero;
	
	printf("Digite um valor: \n");
	scanf("%f", &numero);
	
	if (numero>=10.0 && numero<=15) {
		printf("O n�mero %.1f est� no intervalo entre 10 e 15", numero);
	} else {
		printf("O n�mero %.1f n�o est� contido no intervalo entre 10 e 15", numero);
	}
}
