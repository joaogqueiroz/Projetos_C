#include<stdio.h>
#include<stdlib.h>
/*8. Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo N e imprima todos os
n�meros naturais de 0 at� N em ordem decrescente.*/

int retNaturaisDec(int n) {
	if(n == -1) {
		return 0;
	}
	printf("%d ", n);
	retNaturaisDec(n - 1);
}

int retNaturaisDecSig(int n) {
	if(n < 0) {
		return retNaturaisDec(n * -1);
	}
	return retNaturaisDec(n);
}

main(){

int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",retNaturaisDecSig(num));






}

