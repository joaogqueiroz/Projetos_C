#include<stdio.h>
#include<stdlib.h>

main(){
	int vet[20];
	
	for(int i=0;i<20;i++){
	printf("Digite um numero \n");
	scanf("%d", &vet[i]);
	}
	
	for(int i=0;i<20;i++){
	if(vet[i]<5)
	printf("%d ",vet[i]);	
	}
}
