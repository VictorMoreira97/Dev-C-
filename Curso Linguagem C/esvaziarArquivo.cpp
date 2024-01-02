#include <stdio.h>
#include <string.h>
#include <fstream>

using namespace std;

int maind () {
	//criar o objeto do arquivo
	ofstream meuArquivo;
	
	//abre o rquivo
	meuArquivo.open("Vocalario.txt");
	
	//Esvazia o arquivo
	meuArquivo << "";
	
	//fecha o arquivo
	meuArquivo.close();
	
}
