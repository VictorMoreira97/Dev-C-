/*
char nome[] = {'L', 'i', 'm', 'a', '', '2', '0', '\0'};

i = 0
while(nome[i] != '\0')
	printf("%c", nome[i++];
	
printf("%c", nome[i++]);


*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguse");
	char nome[120];
	
	printf("Digite seu nome completo: \n");
	scanf("%[ -~]", nome);
	
	printf("O nome digitado foi: %s", nome);
	
}

