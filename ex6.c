#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int inicio1, inicio2, numero;
	
	numero = 1;
	
	for(inicio1=1; inicio1<=10; inicio1++) {
		for(inicio2=1; inicio2<=10; inicio2++){
			printf("%d x %d = %d \n", numero, inicio2, numero*inicio2);
		}
		numero++;
		printf("\n");
	}
	
	return 0;
}
