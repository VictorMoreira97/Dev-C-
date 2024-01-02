#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//criar o objeto de arquivo
	ofstream arquivoDeSaida;
	
	//abre o arquivo ou cria caso não exista
	arquivoDeSaida.open("Texto.txt", std::ios_base::app);
	
	//Escrever algo
	arquivoDeSaida << "\nLorem Ipsum";
	
	//fechar o arquivo
	arquivoDeSaida.close();
	
	getchar();
	return 0;
}
