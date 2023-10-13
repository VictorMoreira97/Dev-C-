#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	string palavra;
	
	cout << "Digite uma palavra: ";
	
	cin >> palavra;
		
	cout << "\nA palavra é: " << palavra;
	
	return 0;
}
