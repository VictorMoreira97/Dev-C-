#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguse");
	
	char nomecompleto[50];
	
	printf("Digite seu nome completo: ");
	scanf("%[^\n]s", nomecompleto);
	
	printf("Seu nome completo é %s", nomecompleto);
	
}
