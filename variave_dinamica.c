#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome_completo[1024];
	char * nome_dinamico;
	int tamanho; 
	
	printf("Digite seu nome completo: ");
	scanf("%[^\n]", &nome completo);
	
	tamanho = strlen(nome_completo);
	nome_dinamico = (char *) malloc(sizeof(char) * tamanho);
	strcpy(nome_dinamico, nome_completo);
	
	for(i = 0; i < tamanho; i++) {
		printf("Letra %c esta no endereco %x\n", nome_dinamico[i], &nome_dinamico[i]);
	}
	
	
	return 0;
}
