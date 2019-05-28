/*1. Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório
dos números de 1 a N.*/

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

