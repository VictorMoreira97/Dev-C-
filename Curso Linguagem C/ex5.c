#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[255];
	
	printf("Digite uma palavra: ");
	
	setbuf(stdin, 0);
	
	fgets(palavra, 255, stdin);
	
	palavra[strlen(palavra)-1] = '\0';
	
	printf("%s", palavra);
	
	system("pause");
	
	return 0;
}
