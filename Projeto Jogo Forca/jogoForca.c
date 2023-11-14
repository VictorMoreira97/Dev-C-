#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

char bancoPalavras(){
	char matriz[10][255] = {"abacate", "biscoito", "caramelo", "morango", "kiwi", "jerimum", "cereja", "melancia", "azeitona", "pinha"};
	
	srand(time(NULL));
	
	int palavra = rand() % 10;
	
	//return matriz[palavra];
	
	printf("%s", matriz[palavra]);

}	

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	bancoPalavras();
	
	return 0;
}
