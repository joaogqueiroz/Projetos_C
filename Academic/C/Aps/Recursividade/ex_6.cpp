#include<stdio.h>
#include<stdlib.h>

/*6. A multiplica��o de dois n�meros inteiros pode ser feita atrav�s de somas sucessivas.
Proponha um algoritmo recursivo Multip Rec(n1,n2) que calcule a multiplica��o de dois
inteiros.
*/
int multRec(int a, int b) {
	if(a == 0 || b == 0) {
		return 0;
	}
	if(b == 1) {
		return a;
	}
	return a + multRec(a, b - 1);
}
main(){
int num,num2;
printf("Digite um numero: /n");
scanf("%d",&num);
printf("Digite um numero2: /n");
scanf("%d",&num2);
printf("Resultado: %d  \n",multRec(num,num2));





}

