#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20
// constante
int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char origem[N] = {"Ol�, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy:\n");
	puts(origem);
	puts(destino);
	
	strcpy(destino, origem);
	
	printf("Depois do strpy:\n");
	puts(origem);
	puts(destino);
	
}
