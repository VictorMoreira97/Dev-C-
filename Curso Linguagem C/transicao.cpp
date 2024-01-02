#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela() {
	system("CLS");
}

int main () {
	int a = 10;
	
	printf("%d \n", a);
	
	//std::cout << a; 
	
	cout << "O valor de " << a << " eh maior que 0";
	
	//limpaTela();
	
	return 0;
}
