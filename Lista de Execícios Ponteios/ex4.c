#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void func(int * px, int * py) {
	printf("*px = %d\t*py = %d\n", *px, *py);
	printf("px = %x\tpy = %x\n", px, py);
	printf("&px = %x\t&py = %x\n", &px, &py);
	
	px = py;
	*py = (*py) * (*px);
	*px = *px + 2;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int x, y;
	
	printf("Valor de x: ");
	scanf("%d", &x);
	
	printf("Valor de y: ");
	scanf("%d", &y);
	
	func(&x, &y);
	
	printf("x = %d, y = %d", x, y);
	
	return 0;
}
