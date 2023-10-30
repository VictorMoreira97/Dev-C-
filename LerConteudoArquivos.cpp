#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//dizer qual arquivo será lido
	ifstream input("LoremIpsum.txt");
	
	//String que receberá o texto lido
	string textoLido;
	
	//Passa o texto do arquivo oara a string
	for(string line; getline(input, line);) {
		textoLido += line;
	}
	
	//mostrar o conteúdo
	cout << textoLido;
	
	return 0;
}
