#include <iostream>
#include <stdlib.h>
#include <string>
#define TAM 10

using namespace std;

void imprimeVetor (int vetor[]) {
	int contador;
	cout << "\n";
	for(contador = 0; contador < TAM; contador++) {
		cout << " |" << vetor[contador] << "| ";
	}
}

int main () {
	int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	
	int x, y, aux;
	
	//valor de esquerda sendo analisado
	for(x = 0; x < TAM; x++) {
		//valor da direita
		for (y = x + 1; y < TAM; y++) {
			//confere se precisa fazer a troca
			if(vetor[x] > vetor[y]) {
				
				imprimeVetor(vetor);
				
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}
	}
	
	
	imprimeVetor(vetor);
	
	return 0;
}
