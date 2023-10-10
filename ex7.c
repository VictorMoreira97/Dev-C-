#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcLucroDist(float p_fab, float por_dist) {
	return p_fab * por_dist / 100;
}

float calcImpostos(float p_fab, float por_imp) {
	return p_fab * por_imp / 100;
}

float calcPrecoFinal(float p_fab, float v_dist, float v_imp) {
	return p_fab + v_dist + v_imp;
}

int main (int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	
	float preco_f, porce_dist, porc_i, lucro_dist, imp, vlr_f;
	
	printf("Insira o preço de fábrica: \n");
	scanf("%f", &preco_f);
	
	printf("Insira o percentual de lucro do distribuidor: \n");
	scanf("%f", &preco_f);
	
	printf("Insira o percentual de imposto: \n");
	scanf("%f", &porc_i);
	
	lucro_dist = calcLucroDist(preco_f, porce_dist);
	imp = calcImpostos(preco_f, porc_i);
	vlr_f = calcPrecoFinal(preco_f, lucro_dist, imp);
	
	return 0;
}
