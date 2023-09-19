#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(0, "Portuguse");
	
	char nome[120];
	int indice, letraA, letraB, letraC, tamanho;
	
	letraA = letraB = letraC = 0;
	
	printf("Digite seu nome completo: \n");
	scanf("%[ -~]", nome);
	
	tamanho = strlen(nome);
	printf("%d", tamanho);
	
	for(indice = 0; indice < tamanho; indice++) {
		if (nome[indice] == 'a') {
			letraA++;
		} else if (nome[indice] == 'b') {
			letraB++;
		} else if (nome[indice] == 'c') {
			letraC++;
		}
	}
	
}

