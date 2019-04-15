#include<stdio.h>
#include<stdlib.h>
/* Faça um programa que leia letras do
teclado até que um ENTER seja digitado.
Escreva a quantidade total de espaços ( ASCII
48 ) e a quantidade de vogais digitadas. Use
um switch para contar as vogais.*/
int main()
{
 char let ; 
 int t=0,vog=0,esp=0;
 while(let!= 10)
 {
 
 printf("Digite: \n");
 scanf("%c",&let);
 fflush(stdin);
 t++;
 switch(let){
 	case 'a':
 	vog = vog+1;
 	break;
 	
 	case 'e':
 	vog = vog+1;
 	break;
 	case 'i':
 	vog = vog+1;
 	break;
 	case 'o':
 	vog = vog+1;
 	break;
 	case 'u':
 	vog = vog+1;
 	break;
 	case ' ':
 	esp=esp+1;
 	break;
 	}
 }
 printf("total = %d letras \n", t-1);
 printf("vogais :%d \n", vog  );
 printf("espacos :%d \n", esp  );
}
