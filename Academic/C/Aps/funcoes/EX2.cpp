#include <stdio.h>
#include <stdlib.h>

void DataAtual(int dia, int mes, int ano);

int main(void){
	int dia, mes, ano;
	
	printf("Dia:\n");
	scanf("%i", &dia);

	//limpa o buffer de entrada.
	while(getchar() != '\n');

	printf("M�s:\n");
	scanf("%i", &mes);

	while(getchar() != '\n');

	printf("Ano:\n");
	scanf("%i", &ano);

	DataAtual(dia, mes, ano);

	return 0;
}

void DataAtual(int dia, int mes, int ano){
	const char* meses[] = {"Janeiro", "Fevereiro", "Mar�o", "Abril",
                               "Maio", "Junho", "Julho", "Agosto",
                               "Setembro", "Outubro", "Novembro", "Dezembro"};

	printf("A data �: %i de %s de %i\n", dia, meses[mes - 1], ano);
}
