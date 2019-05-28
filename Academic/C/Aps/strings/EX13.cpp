#include <stdio.h>

#include <string.h>

int deslocaEsq(char *sVetor, int iIndice){
	for(int i = iIndice; i < strlen(sVetor); i++){
		sVetor[i] = sVetor[i+1];
	}
}

int main(){
	char sVetor[40];
	int i;
	printf("Digite a frase: ");
	fgets(sVetor, 40, stdin);
	sVetor[strlen(sVetor)-1] = '\0';
	printf("Frase Original: %s\n", sVetor);
	for(i = 0; i < strlen(sVetor); i++) while (sVetor[i] == ' ') deslocaEsq(sVetor, i);
	printf("Frase Modificada: %s", sVetor);

}
