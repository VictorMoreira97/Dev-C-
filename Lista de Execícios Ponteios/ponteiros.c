#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main () {
	//Variável 
	int a = 20;
	
	//imprimeindo o valo de uma variável
	printf("Valor de a: %d\n", a);
	
	//Imprimindo o endereço de uma variável
	printf("Endereço de a: %d\n", &a);
	
	//Lendo o valor de uma variável
	scanf("&d", &a);
	
	//Imprimondo o valor de uma vairáel lida
	printf("Valor de a: %d", a);
}
