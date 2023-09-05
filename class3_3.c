/*
As al�quotas s�o de 7,5% para aqueles que ganham at� R$ 1.320,00; 
de 9% para quem ganha entre R$ 1.320,01 at� R$ 2.571,29; 
de 12% para os que ganham entre R$ 2.571,30 at� R$ 3.856,94; 
e de 14% para quem ganha de R$ 3.856,95 at� R$ 7.507,29.

salario_bruto   = quant_horas * valor_hora
desconto        = salario_bruto * (porcento_inss/100)
salario_liquido = salario_bruto - desconto

*/

#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguese");
	float horas_trabalhadas, valor_hora, percentual_INSS, salario_bruto, desconto_INSS, salario_liquido;
	
	printf("Digite valor da hora, qtde de horas e o percentual de INSS: ");
	scanf("%f %f %f", &horas_trabalhadas, &valor_hora, &percentual_INSS);
	
	salario_bruto = horas_trabalhadas * valor_hora;
	desconto_INSS = salario_bruto * percentual_INSS / 100,0;
	salario_liquido = salario_bruto - desconto_INSS;
	
	printf("O colaborador trabalhou %.2f horas, a R$%.2f por hora, com %2.f\% de desconto", horas_trabalhadas, valor_hora, percentual_INSS);
	printf("O sal�rio l�quido � R$%.2f", salario_liquido);
	
}
