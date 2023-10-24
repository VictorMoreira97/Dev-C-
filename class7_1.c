#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 15;
	int y;
	int *p;
	char letra = 'a';
	char * p_letra = &letra;
	
	// obtem o endereço de x
	p = &x;
	
	// coloca em y, o valor apontado por p
	y = *p;
	
	printf("A caixinha letra tem '%c' e está no endereço %x\n", letra, p_letra);
	printf("endereço de x = %px\n", p, &p);
	printf("valor apontado por p = %d \n", *p);
	printf("valor de y = %d \n", y);
	
	return 0;
}
