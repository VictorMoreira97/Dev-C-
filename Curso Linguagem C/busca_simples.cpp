#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std; //para utilizar cout

int main () {
	
	int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int valorProcurado;
	int posicao, posicaoEncontrada;
	int cont;
	bool valorFoiEncontrado;
	
	//imprimeir o vetor
	for(cont = 0; cont < TAM; cont++) {
		cout << vetor[cont] << " - ";
	}
	
	printf("\n");
	
	printf("Qual numero deseja encontrar? ");
	scanf("%d", &valorProcurado);
	
	//percorre a lista em busca do valor
	for(cont=0; cont < TAM; cont++) {
		if(vetor[cont] == valorProcurado) {
			valorFoiEncontrado = true;
			posicaoEncontrada = cont;
			break;
		}
	}
	
	if(valorFoiEncontrado) {
		cout << "\nO valor foi encontrado na posicao: " << cont;
	} else {
		cout << "\nValor nao encontrado";
	}
	
	return 0;
} 
