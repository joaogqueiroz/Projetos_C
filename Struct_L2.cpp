#include<stdio.h>
#include<stdlib.h>

  struct lojas{
  	char nome[60];
  	int  numero, preco;
  };
  
  struct lojas listas[5];


main(){
  char parar;
  int i=0;
  float media=0;
  for(i=0;i<2;i++)
  {
  	printf("Digite o nome da loja : \n");
  	gets(listas[i].nome);
  	printf("Digite o numero: \n ");
  	scanf("%d",&listas[i].numero);
  	printf("Digite o preco do produto: \n");
  	scanf("%d",&listas[i].preco);
  	setbuf(stdin, NULL);
  }
  
  	 for(i=0;i<2;i++){
  	 	media=media+listas[i].preco;
	   }
	   
	   media=media/i;
	   printf("A media de preços é R$ %4.2f \n", media);
	   
	   for(i=0;i<=2;i++){
	   if(listas[i].preco<media)
	   setbuf(stdin, NULL);
	   puts(listas[i].nome	);
	   printf("Numerp: %d \n preco: %d \n",listas[i].numero,listas[i].preco);
       }
       
  }






