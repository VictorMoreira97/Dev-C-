#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main () {
	srand((unsigned)time(NULL));
	
	int aleatorio = rand() % 3;
	
	printf("%d \n", aleatorio);
	
	int aleatorioSegundo = ((rand() % 5) + 1);
	
	printf("%d \n", aleatorioSegundo);
	
	system("pause");
}
