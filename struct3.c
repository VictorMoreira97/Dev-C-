#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct cmd {
	char nome[124];
	float ld1;
	float ld2;
	float area_comodo;
} COMODO;

typedef struct casa {
	COMODO comodos[5];
	float area_total;
} RESIDENCIA;


int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	RESIDENCIA m_casa;
	char resposta;
	int i, j;
	
	m_casa = (RESIDENCIA *) malloc(sizeof(RESIDENCIA));
	
	printf("Informe a quantidade de comodos de sua casa: ");
	scanf("%d", &qtd_comodos);
	
	m_casa -> comodos = (COMODO *) malloc(sizeof(COMODO) * qtd_comodos);
	
	for(i = 0; i < qtd_comodos; i++) {
		printf("Informe o nome e os lados do %do. comodo: ", i + 1);
		scanf("%s %f %f", &c_casa->comodos[i].nome, &m_casa->comodos[i].ld1, &m_casa->comodos[i.ld2]);
		 
	}
	
	return 0;
}

