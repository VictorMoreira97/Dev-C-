#include <stdio.h>
#include <locale.h>

#

int main () {
	setlocale(0, "Portuguese");
	int ano_fabr;
	float valor_carro, taxa, valor_transf;
	
	printf("Digite o ano de fabrica��o do ve�culo: ");
	scanf("%d", &ano_fabr);
	
	printf("\nDigite o pre�o do va�culo: R$");
	scanf("%f", &valor_carro);
	
	if (ano_fabr < 1990) {
		taxa = 0.01;
		valor_transf = valor_carro * taxa;
		printf("\nTaxa de tranfer�ncia: 1%\n");
		printf("\nValor do va�culo: R$%.2f");
		printf("\nValor da tranfer�ncia: R$%.2f");
	} else {
		taxa = 0.015;
		valor_transf = valor_carro * taxa;
		printf("\nTaxa de tranfer�ncia: 1%\n");
		printf("\nValor do va�culo: R$%.2f", valor_carro);
		printf("\nValor da tranfer�ncia: R$%.2f", valor_transf);
	}
}
