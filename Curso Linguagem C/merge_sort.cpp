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

//junta os dois subarrays criados ao dividir o vetor pricipal
void merge(int vetor[TAM], int indcieEsquerdo, int meio, int indiceDireito) {
	
	int indice, j, k;								//Auxiliares
	int vetorAux1 = meio - indiceEsquerdo + 1;	//Tamanho do primeiro vetor auxiliar
	int vetorAux2 = indiceDireito - meio; 		//Tamanho do segundo vetor auxiliar
	
	//Cria dois Arrays temporários
	int vetorEsquerdo[vetorAux1], vetorDireito[vetorAux2];
	
	//Passa os elementos do vetor principal para o primeiro vetor auxiliar (esquerda)
	for(j = 0; j < vetorAux2; j++) {
		vetorDireito[j] = vetor[meio + 1 + j];
	}
	
	//Resetar as variáveis
	indice = 0;
	j = 0;
	k = indiceEsquerdo;
	
	while(indice < vetorAux1 && j < vetorAux2) {
		
		//caso o valor na esquerda seja menor
		if(vetorEsquerdo[indice] < = vetorDireito[j]) {
			
			//Passa para o meu vetor principal o valor manor
			vetor[k] = vetorEsquerdo[indice];
			
			//incremeta o auxiliar para passar a análise para passar a análise para os próximos valores do vetor auxiliar
			j++
			
		}
		
		//Aumenta o índice de posicionamento do vetor
		k++;
				
	}
	//Se faltatrm alguns elementos do array DIRIETO passa eles para o array principal
	while(j < vetorAux2) {
		vetor[k] = vetorDireito[j];
		indice++;
		k++;
	}
}

void merge_sort(int vetor[TAM], int indiceEsquerdo, int indiceDireito) {
	
	if(indiceEsquerdo < indiceDireito) {
		
		//Encontra o meio
		int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo)/2;
		
		//Da metade para trás
		merge_sort(vetor, indiceEsquesrdo, meio);
		
		//Da metade para frente
		merge_sort(vetor, meio + 1, indiceDireito);
		
		//Une os dois subarrays que foram criados
		merge(vetor, indiceEsquerdo, meio, indiceDireito);
		
	}
	
}

int main () {
	
	int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 3, 2, 1};
	
	imprimeVetor(vetor);
	
	merge_sort(vetor, 0, TAM - 1);
	
	imprimeVetor(vetor);
	
	return 0;
}
