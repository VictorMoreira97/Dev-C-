#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcKW(float salario, float kwatt, float *kwatt_hora, float *preco, float *preco_desconto) {
	(*kwatt_hora) = salario * 0.001;
	(*preco) = (*kwatt_hora) * kwatt;
	(*preco_desconto) = (*preco) - ((*preco) * 0.15);
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, kwatt, kwatt_hora, preco, preco_desconto;
	
	
	printf("Insira o valor do salário mínimo: \n");
	scanf("%f", &salario);
	
	printf("Insira a quantidade de KW gastos: \n");
	scanf("%f", &kwatt);
	
	calcKW(salario, kwatt, &kwatt_hora, &preco, &preco_desconto);
	
	
	printf("\nValor de 1 KW (em R$): %.2f\n", kwatt_hora);
	printf("Valor a ser pago (em R$): %.2f\n", preco);
	printf("Valor com desconto de 15% (em R$): %.2f\n", preco_desconto);
	
	return 0;
}
