#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa {
	int idade;
	float peso;
	char nome[TAM];
};
//typedef struct <tipo> <novo_nome>;
typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa pes = [TAM];
	int i;
	
	for(i=0; i<TAM; i++) {
		printf("Insira os dados (%d): \n");
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
	
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);
	}
	system("cls");
	
	printf("Início:\n");
	printf("pes.idade: %d\n", pes.idade);
	printf("pes.peso: %.2f\n", pes.peso);
	printf("pes.nome: %s\n", pes.nome);
}
