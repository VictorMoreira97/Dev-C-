#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float tab_lab, av_semestral, exame_final, media;
	char conceito;
	
	printf("Trabalho Laboratorial: \n");
	scanf("%f", &tab_lab);
	
	printf("Avaliação Final: \n");
	scanf("%f", &av_semestral);
	
	printf("Exame Final: \n");
	scanf("%f", &exame_final);
	
	media = (tab_lab + av_semestral + exame_final);
	
	printf("Média: %.1f \n", media);
	
	if (media >= 8.0 && media <= 10.0) {
		conceito = 'A';
	} else if (media >= 7.0 && media < 8.0) {
		conceito = 'B';
	} else if (media >= 6.0 && media < 7.0) {
		conceito = 'C';
	} else if (media >= 5.0 && media < 6.0) {
		conceito = 'A';
	} else if (media >= 0.0 && media < 5.0) {
		conceito = 'A';
	}
	
	printf("Conceito do Aluno: %c", conceito);
	
	return 0;
}
