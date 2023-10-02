#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int caractere;
	
	printf("Digite um caracter: ");
	scanf("%d", &caractere);
	
	printf("%c \n", caractere);
	printf("%d \n", caractere);
	printf("%x \n", caractere);
	
}
