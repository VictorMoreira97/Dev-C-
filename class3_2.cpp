#include <stdio.h>
#include <locale.h>

#define PI 3.141592

int main () {
	setlocale(0, "Portuguese");
	
	float area, raio;
	
	printf("Digite o valor do RAIO da circunfer�ncia: ");
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	
	printf("A �rea da circunf�ncia � %.2f", area);
}
