/*5. Fa�a uma fun��o recursiva que calcule e retorne o N-�simo termo da sequ�ncia Fibonacci. Alguns n�meros desta sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...*/

#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n) {
	if(n < 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

main(){

int num;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Resultado: %d  \n",fibonacci(num));




}

