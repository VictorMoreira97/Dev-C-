#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int fn, f0, f1;
	
	
	f0 = 0;
	f1 = 1;
	
	fn = f0 + f1;
	
	printf("%d \n", f0);
	printf("%d \n", f1);
	
	while(fn <= 1000000) {
		printf("%d \n", fn);
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	
	
	return 0;
}
