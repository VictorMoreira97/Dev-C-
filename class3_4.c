#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguese");
	float preco;
	
	printf("Digite o pre�o do im�vel: R$");
	scanf("%f", &preco);
	
	if (preco <= 80000) {
		printf("Im�vel em promo��o!");
	} else {
		printf("Pre�o final: R$%2.f", preco);
	}
}
