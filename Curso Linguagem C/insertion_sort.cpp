#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]) {
	int contador;
	cout << "\n";
	for(contador = 0; contador < TAM; contador++) {
		cout << " |" << vetor[contador] << "| "; 
	}
}

void insertion_sort(int vetor[TAM]) {
	int indice, anterior, atual;
	
	//Elemento atual em an�lise
	atual = vetor[indice];
	
	//Elemento anterior ao analisado
	anterior = indice - 1;
	
	//Analisando membros ao analisado
	while((anterior>=0) && (atual < vetor[anterior])) {
		//Posiciona os elmentos uma posi��o para frente
		vetor[anterior + 1] = vetor[anterior];
		
		//Faz o j andar para tr�s
		anterior = anterior - 1;
		 
	}
	
	//Agora que o espa�o foi aberto, colocamos o atual (menor n�mero) na posi��o correta
	vetor[anterior + 1] = atual;
	
	//mostra a lista atualizada
	imprimeVetor(vetor);
}

int maind () {
	int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	insertion_sort(vetor);
	
	imprimeVetor(vetor);
	
	return 0;
}
