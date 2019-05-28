#include<stdio.h>
#include<stdlib.h>

int somaCubos(int n){
	int interna(int i, int j, int n, int soma){
		if(j > n) return soma;
		soma  += i * i * i;
		return interna(i + 1, j + 1, n, soma);
	}
	int i = 0; int soma = 0; int j = 0;
	return interna(i, j, n, soma);
}


main(){
int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",somaCubos(num));



}

