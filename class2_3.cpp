#include <stdio.h>
#include <locale.h>

int main () {
	selocale(0, "Portuguese");
	int numero;
	
	printf("Digite um número inteiro: \n");
	scanf("%d", &numero);
	
	if (numero%2 == 0) {
		printf("%d é par\n", numero);
	} else {
		printf("%d não é par\n", numero);
	}
}

