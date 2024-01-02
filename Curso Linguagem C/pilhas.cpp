#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprime_vetor(int vetor[TAM]) {
	//auxiliar contador
	int cont;
	
	//imprime o vetor
	for(cont = 0; cont < TAM; cont++) {
		cout << vetor[cont] << " - ";
	}
	printf("\n");
	printf("\n");
}

void pilha_push(int pilha[TAM], int valor, int *topo) {
	//caso não possa colocar mais valores
	if(*topo == TAM - 1) {
		cout << "Pilha cheia!";
	} else {
		topo = topo + 1;
		pilha[*topo] = valor; 
	}
}

int main () {
	int pilha[TAM] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int topo = -1; 		//topo da pilha enqunato está vazia
	
	imprime_vetor(pilha);
	
	//não é possível colocar mais valores
	pilha_push(pilha, 5, &topo);
	
	imprime_vetor(pilha);
	
}
