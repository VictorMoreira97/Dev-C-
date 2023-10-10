#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int inicio, soma;
	
	soma = 0;
	
	for(inicio=0; inicio<=10; inicio++) {
		printf("%d + %d = %d \n", soma, inicio, soma+inicio);
		soma += inicio;
	}
	
	printf("%d", soma);
	
	return 0;
}
