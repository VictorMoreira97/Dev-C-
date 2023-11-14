#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a = 4, b = 3;
	int * p1, *p2;
	
	p1 = &a;
	p2 = p1;
	
	printf("p1 = %x\tp2 = %x\n", p1, p2);
	
	*p2 = *p1 + 3;
	
	printf("*p2 = %d\n", *p2);
	
	b = b * (*p1);
	
	printf("b = %d\n", b);
	
	(*p2)++;
	
	printf("*p2++ = %d\n", *p2);
	
	p1 = &b;
	
	printf("p1 = %d\n", p1);
	
	printf("%d\n%d\n", *p1, *p2);
	printf("%d\nt%d\n", a, b);
	
	return 0;
}
