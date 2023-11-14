#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int x = 1, y = 2;
	
	int *px, *py;
	
	px = &x;
	py = &y;
	
	printf("x  = %d\n", x);
	printf("y  = %d\n", y);
	printf("px = %d\n", px);
	printf("py = %d\n", py);
	printf("x + y = %d\n", x+y);
	printf("*px + *py = %d\n", *px+*py);
	printf("p1 + 1 = %d", *px+1);
	
	return 0;
}
