#include<stdio.h>
#include<string.h>

main(){
	char nome[100];
	int i;
	
printf("digite um nome:");
	scanf("%s", &nome);
 for (i = 0; i < 4; i++) {
 printf("Letra %d: \%c\n", i+1, nome[i]);

}

}


