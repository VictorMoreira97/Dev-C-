#include <stdio.h>

int main () {
	float nota1, nota2, soma, media;
	
	printf("Digite a nota 1: \n");
	scanf("%f", &nota1);
	
	printf("Nota 1: %.1f\n", nota1);
	
	printf("Digite a nota 2: \n");
	scanf("%f", &nota2);
	
	printf("Nota 1: %.1f\n", nota1);
	
	soma = (nota1 + nota2);
	media = soma/2;
	
	printf("Media: %.1f\n", media);
	
	if (media >= 7.0) {
		printf("Aprovad@\n");
	} else {
		printf("Reprovado@\n");
	}
}

