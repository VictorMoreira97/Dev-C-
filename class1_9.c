#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguese");
	float nota1;
	float nota2;
	float media;
	
	printf("Escreva a nota 1: \n");
	scanf("%f\n", &nota1);

	printf("Escreva a nota 2: \n");
	scanf("%f\n", &nota2);
	
	media = (nota1 + nota2)/2;
	printf("Média: %.1f", media);
}
