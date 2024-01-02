#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	void copiarString (char *copiarDaqui, char *colarAqui);
	
	char string1[] = "Pão com mortadela";
	char string[20];
	
	copiarString(string1, string2);
	printf("%s\n", string2);
	
	getchar();
	return 0;
}
