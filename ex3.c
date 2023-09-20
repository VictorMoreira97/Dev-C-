#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int segundos, minutos, horas;
	
	printf("Quantos segundos? ");
	scanf("\n %d", &segundos);
	
	horas = segundos/3600;

	minutos = segundos%60;
	
	segundos = minutos%60;
	
	printf("Total de tempo: \n");
	printf("%d horas \n", horas);
	printf("%d minutos \n", minutos);
	printf("%d segundos", segundos);
	
	return 0;
}
