/*1. Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o somat�rio
dos n�meros de 1 a N.*/

#include<stdio.h>
#include<stdlib.h>

int soma1aN(int n) {
	if(n == 1) {
		return 1;
	}
	return n + soma1aN(n - 1);
}

main(){

int num;
printf("Digite um numero");
scanf("%d",&num);
printf("Resultado: %d \n",soma1aN(num));


}

