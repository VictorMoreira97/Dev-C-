#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main () {
	
	//Dizer qual arquivo ser� lido
	ifstream input("Texto.txt");
	
	//String que receber� o texto lido
	string textoLido;
	
	//passa o texto do arquivo para a string
	for(string line; geline(input, line);) {
		textoLido += line;
	}
	
	//mostrar o conte�do
	cout << textoLido;
	
	return 0;
}
