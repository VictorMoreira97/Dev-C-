#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//Cursor que irá percorrer cada letra
	int cursor;
	char conteudoTexto[255];
	
	//contador
	int cont = 0;
	
	//Arquivo a ser lido
	FILE *file;
	
	//Abre o arquivo no diretório escolhido
	file = fopen("LoremIpsum.txt", "r");
	
	//Se o arquivo foi encontrado
	if(file) {
		//Encontra letrar (até o fim do arquivo)
		while((cursor = getc(file)) != EOF) {
			//Imprime na tlea
			printf("%c", cursor);
			
			//Vetor de char recebe a letra atual
			conteudoTexto[cont] = cursor;
			
			//Aumenta a contagem de letras
			cont++;
		};
		
		//Fecha o arquivo
		fclose(file);
	};
	
	//Imprimeindo conteúdo lido
	for(cont = 0; cont < strlen(conteudoTexto) - 2; cont++) {
		printf("%c", conteudoTexto[cont]);
	}
	
	return 0;
}
