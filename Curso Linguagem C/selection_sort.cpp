#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]) {
	int indice;
	cout << "\n";
	for(indice = 0; indice < TAM; indice++) {
		cout << " |" << vetor[indice] << "| ";
	}
	
}

void selection_sort(int vetor[TAM]) {
	
	int posicaoDoMenorValor, aux, indice, frente;
	
	for(indice = 0; indice < TAM; indice++) {
		
		//recebe a posição inicial para o menor valor
		posicaoDoMenorValor = indice;
		
		//Analisa os elementos na frente
		for(frente = indice + 1; frente < TAM; frente++) {
			
			//Caso encontre um valor menor na frente dos analisados
			if(vetor[frente] < vetor[posicaoDoMenorValor]) {
				posicaoDoMenorValor = frente;
				
			}
			
			
		//Verifica se houve mudança e troca os valores
		if(posicaoDoMenorValor != indice) {
			aux = vetor[indice];
			vetor[indice] = vetor[posicaoDoMenorValor];
			vetor[posicaoDoMenorValor] = aux;
		}
			
		imprimeVetor(vetor);
		printf("\n-------------------------------------------------");
			
		}
			
	}
}

int main() {
	int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	imprimeVetor(vetor);
	
	selection_sort(vetor);
	
	imprimeVetor(vetor);
	
	return 0;
}
