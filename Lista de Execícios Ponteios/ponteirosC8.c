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
	//faz com que o ponteiro pule um endere�o, 
	//fazendo o ponteiro sair do �ndice 0 para o �ndice 1
	
	printf("%p\n", ponteiro);
	
	
	
	ponteiro = &vetor[1];
	printf("%p\n", ponteiro);
	
	ponteiro = &vetor[2];
	printf("%p\n", ponteiro);
	
	
	getchar();
	return 0;
}
