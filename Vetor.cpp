#include<stdio.h>
#include<stdlib.h>
//exercicio com expressões usando vetores


main(){
  int vet[10]={5,9,10,5,8,4,70,4,2},maior,menor,i;
  printf("%d \n",vet[3]);
  printf("%d \n",vet[2]-vet[1]);
  printf("%d \n",(2*vet[4])-vet[6]);
  printf("%d \n",((vet[3]-1)+vet[1]+(vet[6]*2)));
  //estrutura para se descobrir o maior valor dentro do vetor
  for(i=0;i<=8;i++){
  	if(maior<=vet[i])
      maior=vet[i];
  	 
  	}
  	printf("O Maior elemento e' %d \n",maior);
    //estrutura para se descobrir os numero pares do vetor
  for(i=0;i<=8;i++){
  	if(vet[i]%2==0)
  	  printf("Numero par :%d \n",vet[i]);
  	
  		 
	}
	
	for(i=0;i<=8;i++){
		if(maior>=vet[i])
		menor=vet[i];
	}
	printf("O menor elemento e' %d \n",menor);
    



}
  





