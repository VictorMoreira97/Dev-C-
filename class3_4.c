#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguese");
	float preco;
	
	printf("Digite o preço do imóvel: R$");
	scanf("%f", &preco);
	
	if (preco <= 80000) {
		printf("Imóvel em promoção!");
	} else {
		printf("Preço final: R$%2.f", preco);
	}
}
