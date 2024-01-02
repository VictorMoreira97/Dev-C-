#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	void testeVariavel (int x);
	void testePonteiro (int *pX);
	
	int teste = 1;
	int *pTeste(&Teste);
	
	printf("%i \n", teste);
	
	getchar();
	
	return 0;
}


void testeVariavel (int x) {
	++x;
}

void testePonteiro(int *pX) {
	++*pX;
}
