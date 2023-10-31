typedef struct cmd {
	char nome[100];
	float largura;
	float comprimento;
	float area_cmd;
	
}; t_CMD;

typedef struct csa {
	t_CMD comodos[5];
	float area_csa;
	int qtd_cmd;
	
}t_CSA;

int main() {
	t_CSA minha_casa;
	minha_casa.comodos[1].largura = 3.40;
}
