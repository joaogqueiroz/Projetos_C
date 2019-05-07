#include<stdio.h>
#include<stdlib.h>

main(){
	int vet[20], aux;
	
	for(int i=0;i<20;i++){
	printf("Digite um numero [%d] \n",i);
	scanf("%d", &vet[i]);
	aux=vet[i];
	}
	for(int i=0;i<20;i++){
	if(aux<vet[i])
	printf("\n%d ",vet[i]);	
	}
}
