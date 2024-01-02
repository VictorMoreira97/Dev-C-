#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std; //para utilizar cout

void imprime_vetor(int vetor[TAM]) {
	//Auxiliar contador
	int cont;
	
	//Impirme o vetor
	for(cont = 0; cont < TAM; cont++) {
		cout << vetor[cont] << " - ";
	}
}

int busca_simples (int vetor[TAM], int valorPorcurado, int *posicaoEncontrada) {
	//auxiliar contador
	int cont;
	
	//Verifica se o valor foi encontrado
	bool valorFoiEncontrado;
	
	//Percorre a lista em busca do valor
	for(cont = 0; cont <TAM; cont++) {
		if(vetor[cont] == valorPorcurado) {
			valorFoiEncontrado = true;
			*posicaoEncontrada = cont;
		}
	}
	
	if(valorFoiEncontrado) {
		return 1;
	} else {
		return -1;
	}
}

int busca_binaria(int vetor[TAM], int valorProcurado, int *posicaoEncontrada) {
	int esquerda = 0;
	int direita = TAM - 1;
	int meio;
	
	while(esquerda <= direita) {
		meio = (esquerda + direita)/2;
		
		//quando o valor do meio é encontrado
		if(valorProcurado == vetor[meio]) {
			*posicaoEncontrada = meio;
			return 1;
		}
		
		//Ajustando os limites laterais
		if(vetor[meio] < valorProcurado) {
			esquerda = meio + 1;
		} else {
			direita = meio - 1;	
		}
	}
	
	return -1;
}

int main () {
	
	int vetor[TAM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	
	//Auxiliar contador
	int cont;
	
	//Imprime o vetor na tela
	imprime_vetor(vetor);
	printf("\n0 - 1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9");
	
	//Lendo o número buscado
	printf("\nQual numero deseja encontrar? ");
	scanf("%d", &valorProcurado);
	
	if (busca_binaria(vetor, valorProcurado, &posicaoEncontrada) == 1) {
		cout << "O valor foi encontrado na posicao: " << posicaoEncontrada;
	} else {
		cout << "Valor nao encontrado";
	}
	
	return 0;
}
