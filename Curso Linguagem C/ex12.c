#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct palavra {
	int ordem;
	char letra;
	char texto[255];
	
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	struct palavra primeiraPalavra;
	
	primeiraPalavra.ordem = 10;
	primeiraPalavra.letra = 'c';
	strcpy(primeiraPalavra.texto,"palavrinha");
	
	printf("Ordem: %d", primeiraPalavra.ordem);
	printf("Letra: %c", primeiraPalavra.letra);
	printf("Ordem: %s", primeiraPalavra.texto);
	
	
	return 0;
}

