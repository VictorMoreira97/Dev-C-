#include <stdio.h>
#include <locale.h>

#include <stdlib.h>
#include <string>
#include <new>
#include <iostream>

#define TAM 10

using namespace std; //para auxiiar cout

bool busca_simples(int vetor[TAM], int valorProcurado, int posicaoEncontrada) {
	
	//auxiliar contador
	int cont;
	
	bool valorFoiEncontrado;
	
	//percorre a lista em busca do valor
	for(cont = 0; cont < TAM; cont++) {
		if(vetor[cont] == valorProcurado) {
			valorFoiEncontrado = true;
			posicaoEncontrada = cont;
		}
	}
	
	if(valorFoiEncontrado) {
		return 1;
		
	} else {
		return -1;
	}
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10] = {1, 23, 44, 56, 63, 72, 84, 90, 98};
	int valorProcurado;
	int posicao;
	int cont;
	bool valorFoiEncontrado;
	int posicaoEncontrada;
	
	
	//imprime o vetor
	for (cont = 0; cont <TAM; cont++) {
		cout << vetor[cont] << " - ";
	}
	
	printf("Qual numero deseja encontrar? ");
	scanf("%d", &valorProcurado);
	
	if(busca_simples(vetor, valorProcurado, posicaoEncontrada) == 1) {
		cout << "O valor foi encontrado";
	} else {
		cout << "valor não encontrado";
	}
		
	
	return 0;
}
