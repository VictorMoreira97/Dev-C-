#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int operacao;
	float numero1, numero2, resultado;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &numero1);
	
	printf("Digite o segundo número: ");
	scanf("%f", &numero2);
	
	printf("Escolha uma opção: \n");
	printf("1 - Somar \n");
	printf("2 - Subtrair \n");
	printf("3 - Multiplicar \n");
	printf("4 - Dividir \n");
	printf("Sua escolha: ");
	scanf("%d", &operacao);
	
	switch (operacao) {
		case 1: {
			resultado = numero1 + numero2;
			break;
		}
		case 2: {
			resultado = numero1 - numero2;
			break;
		}
		case 3: {
			resultado = numero1 * numero2;
			break;
		}
		case 4: {
			if (numero2 == 0) {
				printf("Divisão por 0 é inválida. ");
			} else {
				resultado = numero1 / numero2;
				break;
			}
			
		}
	}
	
	printf("O resultado é: %.1f", resultado);
	
	return 0;
}

