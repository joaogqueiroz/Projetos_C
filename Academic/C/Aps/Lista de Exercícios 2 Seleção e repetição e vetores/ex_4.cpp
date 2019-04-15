#include<stdio.h>
#include<stdlib.h>
/*Faça um programa que leia uma
seqüência de números onde o último número
lido será o zero. Escreva o maior número lido
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
