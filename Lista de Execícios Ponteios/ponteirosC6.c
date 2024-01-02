#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct lista {
	int valor;
	struct lista *proximo;
};

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	struct lista, m1, m2, m3;
	//  		  10  20  30
	struct lista *gancho = &m1;
	
	m1.valor = 10;
//  m1.struct lista *proximo == m2
	m2.valor = 20;
//  m2.struct lista *proximo == m3
	m3.valor = 30;
//  m3.struct lista *proximo == (struct lista *) 0
	
	m1.proximo = &m2;
	m2.proximo = &m3;
	m3.proximo = (struct lista *) 0;
	
	
	while (gancho != (struct lista *) 0) {
		printf("%i \n", gancho->valor);
		gancho = gancho->proximo;
	}
	
	return 0;
}
