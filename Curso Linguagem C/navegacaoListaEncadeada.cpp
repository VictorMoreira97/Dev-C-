#include <stdio.h>
#include <stdlib.h>

struct estrutura {
	int valorNumerico;
	struct estrutura *proximo;
};

int main () {
	
	//creia o início da lista
	estrutura *ponteiroEncadeada;
	
	//Cria um onvo valor
	estrutura *novoPrimeiroValor = new estrutura;
	novoPrimeiroValor -> valorNumerico = 13;
	novoPrimeiroValor -> proximo = NULL;
	
	//Faz o ponteiro da encadeada apontar para o primeiro valor
	ponteiroEncadeada = novoPrimeiroValor;
	
	//Cria um onvo valor
	estrutura *novoSegundoValor = new estrutura;
	novoSegundoValor -> valorNumerico = 20;
	novoSegundoValor -> proximo = NULL;
	
	//imprime a lista encadeada
	while(ponteiroEncadeada != NULL) {
		
		//imprime a lista encadeada
		printf("Valor: %d", ponteiroEncadeada->valorNumerico);
		
		//cursos recebe a posicao de memoria do proximo valor
		ponteiroEncadeada = ponteiroEncadeada -> proximo;
		
	}
	
	return 0;
}
