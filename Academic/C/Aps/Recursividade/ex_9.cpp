#include<stdio.h>
#include<stdlib.h>
/*9. Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos
os números pares de 0 até N em ordem crescente.*/
int retSeqPar(int n) {
	if(n < 0) {
		return 0;
	}
	2 + retSeqPar(n - 2);
	printf("%d ", n);
}

int retSeqParSig(int n) {
	if(n < 0) {
		return -1 * retSeqPar(n);
	}
	return retSeqPar(n);
}
main(){

int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",retSeqParSig(num));



}

