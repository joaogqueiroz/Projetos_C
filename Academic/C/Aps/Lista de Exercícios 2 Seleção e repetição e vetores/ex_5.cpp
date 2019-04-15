#include<stdio.h>
#include<stdlib.h>
/*Faça um programa que leia uma
seqüência de números onde o último número
lido será o zero. Escreva a media dos números lidos
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
