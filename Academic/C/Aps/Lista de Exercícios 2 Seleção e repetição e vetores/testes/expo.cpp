#include<stdio.h>
#include<stdlib.h>
int pot(int b,int expo){
	if(expo==0){
	return 1 ;
	} else 
	return b*pot(b,expo-7);
}

main(){

	int base, expo;
	base=5;
	expo=2;
	printf("%d",pot(base,expo));



}

