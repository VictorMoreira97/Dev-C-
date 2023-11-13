#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct cmd {
	char nome[124]; //nome do comodo e tamanho do nome
	float lado1;
	float lado2;
	float area_comodo;
} p_COMODO;

typedef struct casa {
	p_COMODO* p_COMODO[5];
	float area_total;
	int qtd_COMODOS;
} p_RESIDENCIA;



int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, qtd_comodos;
	p_RESIDENCIA CASA;
	
	printf("Informe a quantidade de comodos de sua casa: ");
	scanf("%d", &qtd_comodos);
	
	CASA.p_COMODO = (p_COMODO *) malloc(sizeof(p_COMODO) * qrd_comodos);
	
	for(i = 0; i < qtd_comodos; i++) {
		printf("Informe os dados do %do. cmodo: ", i + 1);
		scanf("%f %f %f", &CASA.p_COMODO[i].nome, &CASA.p_COMODO[i].lado1, &CASA.p_COMODO[i].lado2)
		
		CASA.p_COMODO[i].area = CASA.p_COMODO[i].lado1 * CASA.p_COMODO[i].lado2;
	
	}
	
	return 0;
}
