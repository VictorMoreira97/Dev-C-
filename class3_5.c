#include <stdio.h>
#include <locale.h>

#

int main () {
	setlocale(0, "Portuguese");
	int ano_fabr;
	float valor_carro, taxa, valor_transf;
	
	printf("Digite o ano de fabricação do veículo: ");
	scanf("%d", &ano_fabr);
	
	printf("\nDigite o preço do vaículo: R$");
	scanf("%f", &valor_carro);
	
	if (ano_fabr < 1990) {
		taxa = 0.01;
		valor_transf = valor_carro * taxa;
		printf("\nTaxa de tranferência: 1%\n");
		printf("\nValor do vaículo: R$%.2f");
		printf("\nValor da tranferência: R$%.2f");
	} else {
		taxa = 0.015;
		valor_transf = valor_carro * taxa;
		printf("\nTaxa de tranferência: 1%\n");
		printf("\nValor do vaículo: R$%.2f", valor_carro);
		printf("\nValor da tranferência: R$%.2f", valor_transf);
	}
}
