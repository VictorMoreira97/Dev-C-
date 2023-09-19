#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguse");
	
	char nome[100], letra;
	int indice, tamanho;
	
	printf("Digite seu nome completo: \n");
	
	indice = 0; 
	letra = getchar();
	while (letra != '\n'); {
	nome[indice] = letra;
	indice++;
	letra = getchar();
	}
	
	tamanho = indice;
	printf("O nome comleto é: ");
	for (indice = 0; indice < tamanho; indice++)
		printf("%c", nome[indice]);
}
