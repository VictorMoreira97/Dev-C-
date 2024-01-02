#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int *vetor;
	
	vetor = (int *) malloc(3 * sizeof(int));
	
	vetor[0] = 1;
	vetor[1] = 2;
	vetor[2] = 3;
	
	printf("%d\n", vetor[0]);
	printf("%d\n", vetor[1]);
	printf("%d\n", vetor[2]);
	
	free(vetor);
	
	getchar();
	return 0;
}
