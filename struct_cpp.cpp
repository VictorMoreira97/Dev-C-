#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <new>

using namespace std;

//struct para frutas
struct fruta {
	string cor;
	string nome;
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	//criando um ponteiro para o struct criado
	fruta *primeiraFruta = new fruta;
	
	//modificando valores
	primeiraFruta->cor = "Amarela";
	primeiraFruta->nome = "Banana";
	
	//Exibindo valores
	cout << "Fruta: " << primeiraFruta->nome << ", Cor: " << primeiraFruta->cor << "\n";
	
	//criar lista de frutas
	fruta *ponteiroListaDeFrutas = new fruta[2];
	
	//Modificando valores
	ponteiroListaDeFrutas[0].cor = "Vermelho";
	ponteiroListaDeFrutas[0].nome = "Morango";
	ponteiroListaDeFrutas[1].cor = "Verde";
	ponteiroListaDeFrutas[1].nome = "Kiwi";	
	
	//percorrendo lista e exibindo
	int cont;
	for (cont = 0; cont < 2; cont++) {
		//exibindo valores
		cout << "Fruta: " << ponteiroListaDeFrutas[cont].nome << ", Cor: " << ponteiroListaDeFrutas[cont].cor << "\n";
	}
	
	return 0;
}
