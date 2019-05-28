#include<stdio.h>
#include<stdlib.h>
/*7. Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente*/
int retNaturais(int n) {
	if(n == -1) {
		return 0;
	}
	1 + retNaturais(n - 1);
	printf("%d ", n);
}

int retNaturaisSig(int n) {
	if(n < 0) {
		return retNaturais(n * -1);
	}
	return retNaturais(n);
}

main(){

int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",retNaturaisSig(num));




}

