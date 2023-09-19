#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "Portuguse");
	
	char nome[50]="Fulano";
	printf("Ola, %s", nome);
}

