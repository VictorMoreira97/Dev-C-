#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela() {
	system("CLS");
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a = 10;
	
	
	char palavra[4];
	palavra[0] = 'a';
	palavra[1] = 'm';
	palavra[2] = 'o';
	palavra[3] = 'r';
	
	printf("O valor %d é maior que 0", a);
	
	limpaTela();
	
	string outraPalavra = "gol";
	cout << outraPalavra;
	
	cout << "\nO valor de " << a << " é maior que 0";
	
	return 0;
}
