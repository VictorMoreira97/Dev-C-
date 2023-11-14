#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i = 99, j;
	int *p;
	
	p = &i;
	j = *p + 100;
	printf("i = %d, j = %d, *p = %d", i, j, *p);
	
	
	return 0;
}
