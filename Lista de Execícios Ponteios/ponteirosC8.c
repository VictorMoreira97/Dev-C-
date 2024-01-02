#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[3] = {1, 2, 3};
	int *pontiero = vetor;
//  int *ponteiro = &vetor[];
	
	int *ponteiro = &vetor[0];
	
	++pontiero;
	//faz com que o ponteiro pule um endereço, 
	//fazendo o ponteiro sair do índice 0 para o índice 1
	
	printf("%p\n", ponteiro);
	
	
	
	ponteiro = &vetor[1];
	printf("%p\n", ponteiro);
	
	ponteiro = &vetor[2];
	printf("%p\n", ponteiro);
	
	
	getchar();
	return 0;
}
