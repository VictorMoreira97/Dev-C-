#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 15;
	float f = 123.45;
	char a = 'W';
	
	int * p_INT;
	float * p_FLOAT;
	char * p_CHAR;
	
	// obtem o endere�o de x
	p_INT = &x;
	
	printf("endere�o de x = %x \n", p_INT);
	printf("endere�o do ponteiro de x = %x\n", &p_INT);
	printf("valor apontado por p = %d \n", *p_INT);
	printf("-------------------------------\n");
	printf("\n");
	
	// obtem o endere�o de f
	p_FLOAT = &f;
	
	printf("endere�o de f = %x \n", p_FLOAT);
	printf("endere�o do ponteiro de f = %x\n", &p_FLOAT);
	printf("valor apontado por p = %f \n", *p_FLOAT);	
	printf("-------------------------------\n");
	printf("\n");
	
	// obtem o endere�o de a
	p_CHAR = &a;
	
	printf("endere�o de a = %x \n", p_CHAR);
	printf("endere�o do ponteiro de a = %x\n", &p_CHAR);
	printf("valor apontado por p = %c \n", *p_CHAR);	
	printf("-------------------------------\n");
	printf("\n");
	
	return 0;
}
