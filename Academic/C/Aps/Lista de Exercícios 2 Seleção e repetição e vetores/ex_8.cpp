
#include<stdio.h>
#include<stdlib.h>

main(){
	
	int vet[20], med;
	for(int i=0;i<20;i++){
	printf("Digite um numero [%d] \n",i);
	scanf("%d", &vet[i]);
	med+=vet[i];
	}
	med=med/20;
	printf("media :%d\n", med);
	for(int i=0;i<20;i++){
	if(med<vet[i])
	printf("\n%d ",vet[i]);	
	}
}



