#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Data{
	int dia;
	int mes;
	int ano;
}Data;

struct Aluno {
	int id;
	Data nascimento;
		
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	struct Aluno aluno1;
	
	aluno1.id = 15;
	aluno1.nascimento.ano = 1996;
	aluno1.nascimento.mes = 1;
	aluno1.nascimento.dia = 17;
	
	printf("Nascido em: %d / %d / %d", aluno1.nascimento.dia, aluno1.nascimento.mes, aluno1.nascimento.ano);
	
	return 0;
}
