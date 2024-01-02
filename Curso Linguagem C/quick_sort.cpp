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

void quick_sort(int vetor[TAM], int inicio, int fim) {
	
	int pivo, esquerda, direita, meio, aux;
	
	//limites da esquerda do centro
	esquerda = inicio;
	direita = fim;
	
	cout << "Esquerda: " << esquerda << "\n";
	cout << "Direita: " << direita << "\n";
	
	//ajustando auxiliares do centro
	meio = (int) ((esquerda + direita)/2);
	pivo = vetor[meio];
	
	cout << "Meio: " << meio << "\n";
	cout << "Pivo: " << pivo << "\n";
	
	while(direita > esquerda) {
		
		while(vetor[esquerda] < pivo) {
			esquerda = esquerda + 1;
			cout << "Esquerda: " << esquerda << "\n";
			
		}
		
		while(vetor[direita] > pivo) {
			direita = direita - 1;
			cout << "Direita: " << direita << "\n";
		}
		
		if(esquerda <= direita) {
			//Realiza uma troca
			aux = vetor[esquerda];
			vetor[esquerda] = vetor[direita];
			vetor[direita] = aux;
			
			//Faz os limites laterias caminharem para o centro
			esquerda = esquerda + 1;
			cout << "Esquerda: " << esquerda << "\n";
			direita = direita - 1;
			cout << "Direita: " << direita << "\n";
		}
		
		imprimeVetor(vetor);
		
	}
	
	//recursão para continuar ordenando
	if(inicio < direita) {
		quick_sort(vetor, inicio, direita);
	}
	
	//recursão para continuar ordenando
	if(inicio < fim) {
		quick_sort(vetor, esquerda, fim);
	}
	
	
}

int main () {
	
	int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	
	imprimeVetor(vetor);
	
	quick_sort(vetor, o TAM);
	
	return 0;
}
