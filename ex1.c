#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int num1, num2, num3, num4;
	float soma, media;	
	
	printf("Digite o 1� n�mero: \n");
	scanf("%d", &num1);
	
	printf("Digite o 2� n�mero: \n");
	scanf("%d", &num2);
	
	printf("Digite o 3� n�mero: \n");
	scanf("%d", &num3);
	
	printf("Digite o 4� n�mero: \n");
	scanf("%d", &num4);
	
	soma = num1 + num2 + num3 + num4;
	
	media = soma/4;
	
	printf("Soma: %.0f\n", soma);
	printf("M�dia dos 4 n�meros: %.1f", media);
	
	return 0;
}
