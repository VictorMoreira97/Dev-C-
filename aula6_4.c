#include <stdio.h>

int main () {
	
	char s[10];
	//Lembrando que o último caracter deve ser \0
	
	printf("Digite algo (scanf convencional):\n");
	gets(s);
	scanf("%s", s);
	
	printf("Resultado: %s\n\n", s);
	puts(s);
	puts("");
	
	printf("Digite algo (scanf aprimorado):\n");
	fgets(s, 10, stdin);
	fflush(stdin);
	
	printf("Resultado: %s\n\n", s);
	puts(s);
}
