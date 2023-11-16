#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int matriz[3][2];
	
	matriz[0][0] = "potato";
	
	printf("%d", matriz);
	
	return 0;
}
