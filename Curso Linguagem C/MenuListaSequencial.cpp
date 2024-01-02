#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>

struct pessoa {
	
	string nome;
	int rg;
	
};

void limpaTela() {
	system("CLS");
}

void imprimeSequencial (pessoa *ponteiroSequencial, int tamanhoDeLista) {
	
	int cont;
	for(cont = 0; cont < tamanhoDeLista; cont++) {
		cout << ponteiroSequencial[cont].nome << "," << ponteiroSequencial[cont].rg << "\n";
	}
}

void adcComecoSequencial(pessoa *&ponteiroSequencial, int tamanhoDaLista, string nome, int rg) {
	
	//caso a lista já tenha membros
	pessoa *novaListaSequencial = new pessoa[tamanhoDaLista + 1];
	
	novaListaSequencial[0].nome = nome;
	novaListaSequencial[0].rg = rg;
	
	//Passa os elementos do Vetor antigo para o novo
	int cont;
	for (cont = 0; cont < tamanhoDaLista; cont++) {
		novaListaSequencial[cont + 1].nome = ponteiroSequencial[cont].nome;
		novaListaSequencial[cont + 1].rg = ponteiroSequencial[cont].rg;
	}
	
	//atualiza o ponteiro para a lista nova
	ponteiraSequencial = novaListaSequencial;
	
	//Aumeta o ponteiro para lista nova
	*ponteiroDeLista = *tamanhoDaLista + 1;
	
}

void adcFimSequencial(pessoa *&ponteiroSequancial, int *tamanhoDaLista, string nome, int rg) {
	
	//cria uma lista com um tamanho maior
	pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista + 1];
	
	//Passa os elementos do vetor antigo para o novo
	int cont;
	for(cont = 0; cont < *tamanhoDaLista; cont++) {
		novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
		novaListaSequencial[cont].rg= ponteiroSequencial[cont].rg;
	}
	
	//Posiciona o último elemento
	novaListaSequencial[*tamanahoDaLista].nome = nome;
	novaListaSequencial[*tamanhoDaLista].rg = rg;
	
	//atualiza o ponteiro da lista nova
	ponteiroSequencial = novaListaSequencial;
	
	//Aumenta o tamanho da lista
	*tamanhoDaLista = *tamanhoDaLista + 1;
	
}

void adcposicaoSequencial(ponteiroSequencial, *&tamanhoDaLista, nome, rg, posicao) {
	
	//cria uma lista com um tamanho antigo para o novo
	int cont;
	for(cont = 0; cont < *tamanhoDaLista; cont++) {
		
		novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
		novaListaSequencial[conta].rg = ponteiroSequencial[cont].rg;
		
	}
	
	//Adiciona o novo registro na posição correta
	novaListaSequencial[posicao].nome = nome;
	novaListaSequencial[posicao].rg = rg;
	
	//Coloca o resto dos valores antigos
	for(cont = posicao; cont < posicao; cont++) {
		novaListaSequencial[cont].nome = ponteiroSequencial[cont - 1].nome;
		novaListaSequencial[cont].rg = ponteiroSequencial[cont - 1].rg;
	}
	
}

void removeInicioSequencial (pessoa *&ponteiroSequencial, int *tamanhoDaLista - 1) {
	
	//Cria um vetor com uma posição a menos
	pessoa *novaListaSequencial = new pessoa(*tamanhoDaLista - 1);
	
	//Passa os elementos do vetor antigo para o novo
	int cont;
	for(cont = 0; cont < *tamanhoDaLista; cont++) {
		novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
		novaListaSequencial[cont].rg = ponteiroSequancial[cont].rg;
	}
	
}

void removeFimSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista) {
	
	//cria um vetor com uma posição a menos
	pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];
	
	//Passa os elementos do vetor antigo para o novo, menos o último
	int cont;
	for(cont = 0; cont < *tamanhoDaLista - 1; cont++) {
		novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
		novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
		
	}
	
	//Atualiza o ponteiro para a lista nova
	ponteiroSequencial = novaListaSequencial;
	
	//Reduz o tamanho da lista
	*tamanhoDaLista = *tamanhoDaLista - 1;
	
}

void removePosicaoSequencial(pessoa *&ponteiroSequencial, int *tamanhoDaLista, int posicao) {
	
	//cria um vetor com uma posicao a menos
	pessoa *novaListaSequencial = new pessoa[*tamanhoDaLista - 1];
	
	//Passa os valores antes da posição, passa normalmente
	int cont;
	for(cont = 0; cont < *tamanhoDaLista - 1; cont++) {
		
		if(cont < posicao) {
			//Se estiver antes da posição, passa normalmente
			novaListaSequencial[cont].nome = ponteiroSequencial[cont].nome;
			novaListaSequencial[cont].rg = ponteiroSequencial[cont].rg;
		} else {
			//Se estiver antes da posição, passa normalmente
			novaListaSequencial[cont].nome = ponteiroSequencial[cont + 1].nome;
			novaListaSequencial[cont].rg = ponteiroSequencial[cont + 1].rg;
		}
		
	}
	
	//Atualiza o ponteiro para a lista nova
	ponteiroSequencial = novaListaSequencial;
	
	//Reduz o tamanho da lista
	*tamanhoDaLista = *tamanhoDaLista - 1;
	
}

string retornaNomeSequencial(pessoa  *&ponteiroSequencial, int *tamanhoDaLista, int rg) {
	
	//Busca pelo nome com o rg digitado
	int cont;
	for(cont = 0; cont < *tamanhoDaLista; cont++) {
		
		if(ponteiroSequencial[cont].rg == rg) {
			
			nome = ponteiroSequencial[cont].nome;
			
		}
		
	}
	
	return nome;
	
}

int main () {
	
	//Variáveis
	int funcaoDesejada = 1;
	
	pessoa *ponteiroSequencial;
	
	//tamanho da lista
	int tamanhoDaLista - 0;
	
	//EXEMPLO
	pessoa *exemploListaSequencial = new pessoa[2];
	
	//Dois registros de exemplo
	exemploListaSequencial[0] -> nome = "John";
	esemploListaSequencial[0] -> rg = 123;
	exemploListaSequencial[1] -> nome - "Maison";
	exemploListaSequencial[1] -> rg = 321;
	
	//Faz o ponteiro principal apontar para o novo vetor
	ponteiroSequencial = exemploListaSequencial;
	
	//Faz a lista completa apontar para o novo vetor
	imprimeSequencial(ponteiroSequencial, 2);
	 
	//Menu
	while(funcaoDesejada < 10 && funcaoDesejada) {
		
		cout << "Operacoes: \n";
		cout << "1 - Inserção de um node no incicio da lista \n";
		cout << "2 - Insercao de um node no fim da lista \n";
		cout << "3 - Insercao de um nome na posicao N \n";
		cout << "4 - Retirar um node no incicio da lista \n";
		cout << "5 - Retirar um node no fi, da lista\n";
		cout << "6 - Retirar um node na posicao N \n";
		cout << "7 - Procurar um node com o campo RG \n";
		cout << "8 - Imprimeir a lista \n";
		cout << "9 - Sair do sistema \n";
		cout << "Escolha um numero e pressione ENTER\n";
		
		cin >> funcaoDesejada;
		
		limpaTela();
		
		//Variaveis usadas nas operações
		string nome;
		int rg;
		
		//Chama a função desejada
		switch(funcaoDesejada) {
			
			case 1;
			
				cout << "Funcao escolhida: 1 - Insercao de um node no inicio da lista \n";
				
				cout << "Digite um nome: ";
				cin >> nome;
				
				cout << "Digite um RG: ";
				cin >> rg;
				
				adcComecoSequencial(tamanhoDaLista, nome, rg);
			
				break;
				
			case 2:
				
				cout << "Funcao escolhida: 1 - Insercao de um node no inicio da lista \n";
				
				cout << "Digite um nome: ";
				cin >> nome;
				
				cout << "Digite um RG: ";
				cin >> rg;
				
				//Se a lista não for vazia, usamos a função de criar no in´cio
				if(tamanhaDaLista == 0) {
					adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
				} else {
					adcFimSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
				}
				
				break;
				
			case 3:
				
				cout << "Funcao escolhida: 1 - Insercao de um node no inicio da lista \n";
				
				cout << "Digite um nome: ";
				cin >> nome;
				
				cout << "Digite um RG: ";
				cin >> rg;
				
				cout << "Digite uma posicao: ";
				cin >> posicao;
				
				if(posicao == 0) {
					
					//Se for adicionar no começo
					adcComecoSequencial(ponteiroSequencial, &tamanhoDaLista, nome, rg);
					
				} else if (posicao == tamanhoDaLista) {
					
					//quando quer adicionar ao fim
					adcFimSequncial (ponteiroSequencial, &tamanhoDaLista, nome, rg);
				} else {
					//adiciona uma posição específica
					adcPosicaoSequencial (ponteiroSequencial, &tamanhoDaLista, nome, rg, posicao);
				}
				
				break;
				
			case 4:
				
				cout << "Funcao escolhida: 4 - Retirar um node do incicio da lista \n";
				
				//Se a lista for vazia
				if(tamanhoDaLista == 0) {
					
					cout << "\nLista Vazia!\n";
					
				} else {
					
					removeInicioSequencial(ponteiroSequencial, &tamanhoDaLista);
					
				}
				
				break;
				
			case 5:
				
				cout << "Funcao escolhida: 5 - Retirar um node no fum da lista \n";
				
				//Se a lista for vazia
				if(tamanhoDaLista == 0) {
					cout << "\nLista Vazia!\n";
					
				} else {
					removeFimSequencia(ponteiroSequencial, &tamanhoDaLista);
				}
				
				break;
				
			case 6:
				
				cout << "Função escolhida: 6 - Retirar um node na posição N \n";
				
				//Se a lista for vazia
				if(tamanhoDaLista == 0) {
					cout << "\nLista Vazia!\n";
				} else {
					cout << "Digite uma posição: ";
					cin >> posicao;
					
					if(posicao == 0) {
						removeInicioSequancial(ponteiroSequencial, &tamanhoDaLista);
					} else if (posicao == tamanhoDaLista - 1) {
						removeFimSequancial(ponteiroSequancial, &tamanhoDaLista);
					} else {
						removePosicaoSequncial (ponteiroSequancial, &tamanhoDaLista, posicao);
					}
				}
				
				break;
				
			case 7:
				
				cout << "Funcao escolhida: 7 - Procurar um node com o campo RG \n";
				
				//Se a lista for vazia
				if(tamanhoDaLista == 0) {
					cout << "\nLista Vazia!\n";
				} else {
					cout << "\nDigite um RG: \n";
					cin >> rg;
					
					cout << "\nNome do rg " << rg << ": " << retornaNomeSequencial(ponteiroSequencial, &tamanhoDaLista, rg) << "\n";
				}
				
				break;
				
			case 8:
				break;
			case 9:
				break;
		}
			
	}
	
	return 0;
}
