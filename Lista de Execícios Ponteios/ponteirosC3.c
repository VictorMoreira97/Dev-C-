#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct horario {
	int hora;
	int minuto;
	int segundo;
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	struct horario agora, *depois;
	depois = &agora;
	
	depois -> hora = 20;
	depois -> minuto = 20;
	depois -> segundo = 20;
	
	printf("%i : %i : %i", agora.hora, agora.minuto, agora.segundo);
	
	return 0;
}
