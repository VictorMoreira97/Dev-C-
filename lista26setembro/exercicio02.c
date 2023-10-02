#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	int segundos, minutos, horas;
	
	printf("Tempo em segundos: \n");
	scanf("%d", &segundos);
	
	horas = segundos/3600;
	minutos = horas%3600;
	segundos = segundos%3600;
	
	printf("Total de horas: %d \n", horas);
	printf("Total de minutos: %d \n", minutos);
	printf("Total de segundos: %d \n", segundos);
	
	
	return 0;
}
