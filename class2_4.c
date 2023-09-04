#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(0, "Portuguese");
	int anoAtual = 2023;
	int anoNasc;
	int idade;
	
	printf("Digite o ano de nascimento: ");
	scanf("%d", &anoNasc);
	
	idade = anoAtual - anoNasc;
	
	if (idade>=5 && idade<=7) {
		printf("Categoria: Infatil A");
	} else if (idade>=8 && idade<=10) {
		printf("Categoria: Infatil B");
	} else if (idade>=11 && idade<=13) {
		printf("Categoria: Juvenil A");
	} else if (idade>=14 && idade<=17) {
		printf("Categoria: Juvenil B");
	} else if (idade > 17) {
		printf("Categoria: Sênior");
	}
}
