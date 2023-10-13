#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, opcao;
	
	printf("Digite o 1� valor: ");
	scanf("%d", &valor1);
	
	printf("Digite o 2� valor: ");
	scanf("%d", &valor2);
	
	printf("Escolha uma op??o: \n");
	printf("1 - Somar \n");
	printf("2 - Subtrair \n");
	printf("3 - Multiplicar \n");
	printf("4 - Dividir \n");
	printf("Sua op��o: ");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("%d + %d = %d\n", valor1, valor2, valor1+valor2);
			break;
		case 2:
			printf("%d - %d = %d\n", valor1, valor2, valor1-valor2);
			break;
		case 3:
			printf("%d * %d = %d\n", valor1, valor2, valor1*valor2);
			break;
		case 4:
			if (valor2 != 0) {
				printf("%d / %d = %d\n", valor1, valor2, valor1/valor2);
				break;
			} else {
				printf("N�o � poss�vel dividir por zero.\n");
			}
			
		default:
			printf("Op��o inv�lida\n");
			
	}
	
	return 0;
}
