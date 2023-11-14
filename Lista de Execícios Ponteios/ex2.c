#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a = 5, b = 22, c;
	int * p;
	int * q;
	
	p = &a;
	q = &b;
	
	printf("p = %x\tq = %x\n", p, q);
	
	c = *p + *q;
	
	printf("c = %d, a = %d, b = %d", c, a, b);
	
	return 0;
}
