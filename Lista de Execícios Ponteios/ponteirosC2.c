#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	
	printf("Endereço x (pX) = %i | Valor x (*pX) = %i \n", pX, *pX);
	printf("Endereço y (pY) = %i | Valor y (*pY) = %f \n", pY, *pY);
	printf("Endereço z (pZ) = %i | Valor z (*pZ) = %c \n", pZ, *pZ);
	
	/*
			Endereço x (pX) = 6618644 | Valor x (*pX) = 10
			Endereço y (pY) = 6618632 | Valor y (*pY) = 20,500000
			Endereço z (pZ) = 6618631 | Valor z (*pZ) = a
	*/
	
	return 0;
}
