#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct palavra {
	int ordem;
	char texto[255];
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//criar uma palavra
	struct palavra primeiraPalavra;
	
	//modificando os campos
	primeiraPalavra.ordem = 10;
	primeiraPalavra.letra = 'p';
	strcpy(primeiraPlavra.texto, "palavrinha");
	
	//Mostrando valores do struct
	printf("Ordem: %d, Primeira Letra: %c, Palavra: | ", primeiraPalavra.ordem, primeiraPalavra.letra, primeiraPalavra.texto);

	//fazendo uma lista de struct
	struct palavra listaDePalavra[3];
	
	//modificações dos campos
	listaDePalavras[0].ordem = 0;
	listaDePalavras[1].ordem = 1;
	listaDePalavras[2].ordem = 2;
	listaDePalavras[1].ordem = 'd';
	listaDePalavras[2].ordem = 'b';
	strcpy(listaDePalavras[0].texto, "Dahora");
	strcpy(listaDePalavras[0].texto, "Legal");
	strcpy(listaDePalavras[0].texto, "Bacana");
	
	//Pecorrendo o vetor
	int cont;
	for(cont = 0; cont < 3; cont++) {
		printf("Ordem: %d, Primeira Letra: %c, Palavra: | ", listaDePalavras[cont].ordem, listaDePalavras[cont].letra, listaDePalavras[cont].texto);
	}
	
	return 0;
}
