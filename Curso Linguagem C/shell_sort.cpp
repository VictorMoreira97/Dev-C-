#include <iostream>
#include <stdlib.h>
#include <stdlib.h>
#define TAM 10

using namespace std;

void imprimeVetor(int vetor[]) {
	int indice;
	cout << "\n";
	for(indice = 0; indice < TAM; indice++){
		cout << " |" << vetor[indice] << "| ";	
	}
}

void shell_sort(int vetor[TAM]) {
	
	int indice, anterior, atual;
	int pulo = 1;
	
	//De quantos em quanto será o pulo entre análises
	while(pulo < TAM) {
		pulo = 3 * pulo + 1;
	}
	
	while(pulo > 1) {
		
		//Reduz a distância entre as análises
		pulo = pulo / 3;
		
		for(indice = pulo; indice < TAM; indice++) {
			
			//Elemento atual em análise
			atual = vetor[indice];
			
			//Elemento anterior ao anlisado
			anterior = indice - pulo;
			
			//analisando membros anteriores
			while((anterior >= 0) && (atual<vetor[anterior])) {
				
				//Posiciona os elementos uma posição para frente
				vetor[anterior + pulo] = vetor[anterior];
				
				//faz o anterior andar para trás
				anterior =  anterior - pulo;
				
			}
			
			//Agora que o espaço foi aberto, colocamos o atual (menor número) na posição correta
			vetor[anterior + pulo] = atual;
			
			imprimeVetor(vetor);
			
		}
		
	}

}

int main(){
	
	int vetor[TAM] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	
	imprimeVetor(vetor);
	
	printf("\n------------------------------------------------");
	
	shell_sort(vetor);
	
	printf("\n------------------------------------------------");
	
	imprimeVetor(vetor);
	
	return 0;
	
}
