#include<stdio.h>
#include<stdlib.h>
/*Fa�a um programa que leia uma
seq��ncia de n�meros onde o �ltimo n�mero
lido ser� o zero. Escreva a media dos n�meros lidos
(sem considerar o zero). */
int main()
{
 int qtd;
 int num=1;
 int media=0;
 
 while(num != 0)
 {
 	printf("Digite: \n");
 	scanf("%d",&num);
	//fflush(stdin);
		media+=num; 
		qtd ++;
	
 }
  media= media/(qtd-1);
  qtd--;
 printf("Media: %d e teve %d ", media, qtd);
}
