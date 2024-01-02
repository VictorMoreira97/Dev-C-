#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM], int topo) {
	//auxiliar contador
	int cont;
	
	cout << "\n";
	
	//imprime o vetor
	for(cont = 0; cont < TAM, cont++) {
		cout << vetor[cont] << " - ";
	}
	
	cout << "Topo: " << topo;
}

//Caso a pilha esteja vazia
bool pilha_vazia (int topo) {
	if(topo == TAM - 1) {
		return ture;
	} else {
		return false;
	}
}

//Confere se a pilha está cheia
bool pilha_cheia(int topo) {
	if (topo == TAM - 1) {
		return true;
	} else {
		return false;
	}
} 

int pilha_tamanho(int topo) {
	return topo + 1;
}

//retorna o ultimo valor da pilha 
int pilha_get(int pilha[TAM], int *topo) {
	if(pilha_vazia(*topo)) {
		cout << "A pilha esta vazia";
		return 0;
	} else {
		return pilha[*topo];
	}
}

//Adiciona um valor na pilha
void pilha_push(int[TAM], int valor, int *topo) {
	//caso não possa colocar mais valores
	if(pilha_cheia(*topo)) {
		cout << "Pilha cheia!";
	} else {
		*topo = *topo + 1;
		pilha[*topo] = valor;
	}
}

//Remove um valor da pilha
void pilha_construtor(int pilha[TAM], int *topo) {
	//coloca o topo negativo para indicar uma pilha vazia
	*topo = -1;
	
	//Auxiliar contador
	int cont;
	
	//Imprime o vetor
	for(cont = 0; cont < TAM; cont++) {
		pilha[cont] = 0;
	}
}

int main () {
	int pilha[TAM];
	int tipo, valorRetirado;
	
	pilha_construtor(pilha, &topo);
	
	imprime_vetor(pilha, topo);
	imprime_vetor(pilha, topo);
	
	cout << "Ultimo valor da pilha: " << pilha_get(pilha, &topo);
	cout << "Tamanho da pilha: " << pilha_tamanho(topo);
	
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	pilha_push(pilha, 7, &topo);
	
	pilha)pop(pilha, &topo);
	imprime_vetor(pilha, topo);
}
