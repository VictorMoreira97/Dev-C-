#include <stdio.h>
#include <locale.h>

int main () {
	selocale(0, "Portuguese");
	int numero;
	
	printf("Digite um n�mero inteiro: \n");
	scanf("%d", &numero);
	
	if (numero%2 == 0) {
		printf("%d � par\n", numero);
	} else {
		printf("%d n�o � par\n", numero);
	}
}

