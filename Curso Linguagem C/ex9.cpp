#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[2][2], i, j;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << "Digite o valor da linha " << i << ", coluna " << j << ": ";
			cin >> matriz[i][j]; 
		}
	}
	
	for (j; j > 0; j--) {
		for (i; i > 0; i--) {
			cout << matriz[i][j] << "\n"; 
		}
	}
	
	system("pause");
	return 0;
}
