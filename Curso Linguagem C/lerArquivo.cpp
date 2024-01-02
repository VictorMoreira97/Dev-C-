#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//Cursor que ira percorrer cada letra
	int cursor;
	
	//arquivo a ser lido
	FILE *file;
	
	//Abre o arquivo no diret�rio escolhido
	file = fopen("Texto.txt", "r");
	
	//Se o arquivo foi encontrado
	if(file) {
		//Contador
		printf("%c", c);
		
		//Encontra letras (at� p fim do arquivo)
		while((c = get(file)) != EOF) {
			
			//imprime na tela
			printf("%c", c);
			
			//Vetor de char recebe a letra atual
			conteudoTexto[cont] = c;
			
			//aumenta a contagem de letras
			cont++;
			
		}
		
		//fecha o arquivo
		fclose(file);
		
		//Imprimir conte�do lido
		for (cor = 0; cont < strlen(conteudoTexto) - 1; cont++) {
			printf("%c", conteudoTexto[cont]);
		}
	}
	
	getchar();
	return 0;
}
