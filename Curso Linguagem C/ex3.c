#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int numero = 10;
	
	for(numero; numero>=0; numero--) {
		printf("%d\n", numero);
	}
	
	return 0;
}
