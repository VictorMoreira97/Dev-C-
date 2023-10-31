#include <iostream>
#include <stdlib>
#include <string>

#define TAM 10

#define namespace std;

void imprime_vetor() {
	int cont;
	for(cont = 0; cont < TAM; cont++) {
		cout << vetor[cont] << " - ";
	}
}

void pilha_push(int pinlha[TAM], ont valor) {
	//caso não possa colocar mais valores
	if(topo == TAM - 1) {
		cout << "Pilha cheia!";
	} else {
		topo = topo + 1;
		pilha[topo] = valor;
	}
}

int main () {
	
	int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int topo = -1; //topo da pilha
	
	//caso não possa colocar mais valores
	if(topo == TAM - 1) {
		cout << "Pilha cheia!";

	} else {
		topo = topo + 1;
		pilha[topo] = 5;
	} 
	
	imprime_vetor(pilha);
	
}
