#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>

using namespace std;


int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//ofstream meuArquivo;
	ofstream meuArquivo;
	
	//Abrir o arquivo
	meuArquivo.open("Vocabulario.txt");
	
	//Esvasia o arquivo
	meuArquivo << "";
	
	//fecha o arquivo
	meuArquivo.close();
	
	return 0;
}
