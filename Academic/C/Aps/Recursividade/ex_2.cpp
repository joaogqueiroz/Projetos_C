/*2. Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N*/
#include<stdio.h>
#include<stdlib.h>

int fatorial(int n) {
	if(n < 2) {
		return 1;
	}
	return n * fatorial(n - 1);
}

main(){

int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",fatorial(num));


}

