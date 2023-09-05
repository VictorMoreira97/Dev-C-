#include <stdio.h>
#include <locale.h>

#define PI 3.141592

int main () {
	setlocale(0, "Portuguese");
	
	float area, raio;
	
	printf("Digite o valor do RAIO da circunferência: ");
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	
	printf("A área da circunfência é %.2f", area);
}
