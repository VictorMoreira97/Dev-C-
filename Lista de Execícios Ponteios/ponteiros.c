#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {
	//Vari�vel 
	int a = 20;
	
	//imprimeindo o valo de uma vari�vel
	printf("Valor de a: %d\n", a);
	
	//Imprimindo o endere�o de uma vari�vel
	printf("Endere�o de a: %d\n", &a);
	
	//Lendo o valor de uma vari�vel
	scanf("&d", &a);
	
	//Imprimondo o valor de uma vair�el lida
	printf("Valor de a: %d", a);
}
