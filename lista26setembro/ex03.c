#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	
	int num1, num2, num3, menor;
	
	printf("Digite um n�mero: ");
	scanf("%d", &num1, &menor);
	
	printf("Digite outro n�mero: ");
	scanf("%d", &num2);
	
	if (num2<=menor) {
		menor = num2;
	}
	
	printf("Digite mais um n�mero: ");
	scanf("%d", &num3);
	
	if(num3<=menor) {
		menor = num3;
	}
	
	printf("O menor n�mero digitado foi %d", menor);
}
