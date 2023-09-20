#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float salario, percent_aumento, novo_salario;
	
	printf("Qual o valor do salário? R$");
	scanf("%f", &salario);
	printf("\nQuantos porcento de aumento? %%");
	scanf("%f", &percent_aumento);
	
	percent_aumento /= 100;
	
	novo_salario = salario + (salario * percent_aumento);
	
	printf("\nNovo salário: R$%.2f", novo_salario);
	
	return 0;
}
