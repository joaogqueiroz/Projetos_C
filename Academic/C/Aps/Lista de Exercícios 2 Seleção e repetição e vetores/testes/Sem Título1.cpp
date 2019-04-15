#include<stdio.h>
#include<stdlib.h>
int fatorial(int n){
	if(n==0){
	return 1 ;
	} else 
	return n*fatorial(n-1);
}

main(){

	int fat;
	fat=10;
	printf("%d",fatorial(fat));



}

