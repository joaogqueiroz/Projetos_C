#include<stdio.h>
#include<stdlib.h>
/*Fa�a um programa que leia uma
seq��ncia de n�meros onde o �ltimo n�mero
lido ser� o zero. Escreva o maior n�mero lido
(sem considerar o zero). */
int main()
{
 int num;
 int maior=0;
 while(num != 0)
 
 {
 printf("Digite: \n");
 scanf("%d",&num);
 fflush(stdin);
	 if(maior<num){
 		maior=num;
 		}
 }
 printf("Maior: %d ", maior);
}
