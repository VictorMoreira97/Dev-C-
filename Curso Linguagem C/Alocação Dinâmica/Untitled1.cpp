
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n, c;
	n = 1;
	

	for (c; c<=10; c++) {
		printf("%d * %d = %d\n", n, c, n*c);
	}
	
}
