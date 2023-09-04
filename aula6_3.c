#include <stdio.h>

int main () {
	
	char string[10];
	//Lembrando que o último caracter deve ser \0
	printf("Digite algo (scanf convencional):\n");
	scanf("%s", string);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", string);
	
	printf("Digite algo (scanf aprimorado):\n");
	scanf("%10[^\n]s", string);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", string);
}
