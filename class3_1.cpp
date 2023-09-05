#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale(0, "Portuguese");
	
	int ano_nascimento, idade, ANO_ATUAL;
	
	printf("Digite o ano de nascimento do(a) nadador: ");
	scanf("%d", &ano_nascimento);
	
	idade = ANO_ATUAL - ano_nascimento;
	
	if (idade < 5 || idade > 80)
		printf("Idade %d não categorizada.", idade);	
	else {
		switch (idade) {
			case 5:
			case 6:
			case 7:
				printf("Nadador de idade %d é da categoria Infatil A", idade);
				break;
			case 8:
			case 9:
			case 10:
				printf("Nadador de idade %d é da categoria Infatil B", idade);
			case 11:
			case 12:
			case 13:
				printf("Nadador de idade %d é da categoria Infatil A", idade);
				break;
			case 14:
			case 15:
			case 16:
				printf("Nadador de idade %d é da categoria Infatil B", idade);
			
		}
	}
}
