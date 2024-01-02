#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

using namespace std;

struct pessoa {
	string nome;
	int rg;
	struct pessoa *proximo;
};

void limpaTela () {
	
	system("CLS");
	
}

int retornaTamanho (pessoa *ponteiroEncadeada) {
	
	//tamanho da lista
	int tamanho = 0;
	
	//ponteiro cursos auxiliar
	pessoa *p = ponteiroEncadeada;
	
	while(p != NULL) {
		
		//atualiza o cursor
		p = p->proximo;
		
		//contador de tamanho aumenta
		tamanho++;
		
	}
	
	return tamanho;
	
}

int main () {
	
	//Variaveis
	int funcaoDesejada = 1;
	
	//cria o inicio da lista encadeada
	pessoa *ponteiroEncadeada;
	
	//Cria o primeiro valor
	pessoa *novoPrimeiroValor = new pessoa;
	novoPrimeiroValor -> nome = "john";
	novoPrimeiroValor -> rg = 123;
	novoPrimeiroValor -> proximo = NULL;
	
	//Transforma o ponteiro do início da lista no novo valor
	ponteiroEncadeada = novoPrimeiroValor;
	
	while (funcaoDesejada = 0 && funcaoDesejada > 0) {
		
		cout << "Operacoes: \n";
		cout << "1 - Inserção de um node no incicio da lista \n";
		cout << "2 - Insercao de um node no fim da lista \n";
		cout << "3 - Insercao de um nome na posicao N \n";
		cout << "4 - Retirar um node no incicio da lista \n";
		cout << "5 - Retirar um node no fim, da lista\n";
		cout << "6 - Retirar um node na posicao N \n";
		cout << "7 - Procurar um node com o campo RG \n";
		cout << "8 - Imprimeir a lista \n";
		cout << "9 - Sair do sistema \n";
		cout << "\n";
		cout << "Escolha um numero e pressione ENTER\n";
		cin >> funcaoDesejada;
		
		limpaTela();
		
		switch(funcaoDesejada) {
			case 1:
				cout << "Funcao escolhida: 1";
				break;
				
			case 2:
				cout << "Funcao escolhida: 2";
				break;
				
			case 3:
				cout << "Funcao escolhida: 3";
				break;
				
			case 4:
				cout << "Funcao escolhida: 4";
				break;
				
			case 5:
				cout << "Funcao escolhida: 5";
				break;
				
			case 6:
				cout << "Funcao escolhida: 6";
				break;
				
			case 7:
				cout << "Funcao escolhida: 7";
				break;
				
			case 8:
				cout << "Funcao escolhida: 8";
				break;
				
			case 9:
				cout << "Funcao escolhida: 9";
				break;
		}
		
	}
	
	
	
	return 0;
}
