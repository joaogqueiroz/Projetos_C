#include<stdio.h>
#include<stdlib.h>
/*10. Fa�a uma fun��o recursiva que receba um n�mero inteiro positivo par N e imprima todos
os n�meros pares de 0 at� N em ordem decrescente.*/
int retSeqParDec(int n) {
	if(n == 0) {
		printf("%d ", 0);
		return 0;
	}
	if(n % 2 == 0) {
		printf("%d ", n);
	}
	retSeqParDec(n - 1);
}
int retSeqParDecSig(int n) {
	if(n < 0) {
		return -1 * retSeqParDec(n);
	}
	return retSeqParDec(n);
}
main(){

int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",retSeqParDecSig(num));




}

