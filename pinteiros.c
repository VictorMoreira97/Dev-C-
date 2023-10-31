#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int * pint_INT;
	char * pont_CHAR;
	float * pint_FLOAT;
	
	//aloca 4 bytes para o inteiro
	//void *malloc(size_t size)
	pont_INT = (int *) malloc(4);
	pont_INT = (int *) malloc(sizeof(int));
	pont_CHAR = (char *) malloc(sizeof(char));
	pont_FLOAT = (float *) malloc(sizeof(float));
	
	//escreve na área alocada
	*pont_INT = 123456;
	*pont_CHAR = 'W';
	*pont_FLOAT = 555.777;
	
	
	
	return 0;
}
