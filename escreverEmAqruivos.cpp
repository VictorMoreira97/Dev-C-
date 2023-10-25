#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//criar objeto de arquivo
	ofstream arquivoDeSaida;
	
	//abrir o arquivo ou criar arquivo caso não exista
	arquivoDeSaida.open("LoremIpsum.txt", std::ios_base::app);
	
	//Escrever algo
	arquivoDeSaida << "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
	
	//fechar o arquivo
	arquivoDeSaida.close();
	
	
	return 0;
}
