#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//criar o objeto de arquivo
	ofstream arquivoDeSaida;
	
	//Abre o arquivo
	arquivoDeSaida.open("Texto.txt", std::ios_base::app);
	
	//Escrever algo no aqruivo
	arquivoDeSaida << "Lorem ipsum";
	
	getchar();
	return 0;
}
