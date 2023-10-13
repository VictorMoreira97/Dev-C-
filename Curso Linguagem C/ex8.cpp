#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[2][2], i, j;
	
	matriz[0][0] = 1;
	matriz[0][1] = 2;
	matriz[1][0] = 3;
	matriz[1][1] = 4;
	
	for (i = 0; i < 4; i++) {
		for(j = 0; j < 2; j++) {
			cout << "i = " << i << ", j = " << j << "\n";
		}
		
	}
	
	
	system("pause");
	return 0;
}
