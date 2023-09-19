#include <stdio.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	
	setlocale(0, "Portuguse");
	
	int indice;
	
	if(argc > 1) {
		printf("Foram inseridos %d argumentos: \n", argc);
		for(indice=0; indice<argc; indice++) {
			printf("%s\n", argv[indice]);
		}
	} else {
		printf("Não foram inseridos argumentos no programa.\n");
	}
	
}
