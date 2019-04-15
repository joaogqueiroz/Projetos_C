#include<stdio.h>
#include<stdlib.h>
// Refaça o exercício 1 utilizando FOR 
main(){
char letra;
int cont = 0;
for(letra ='a'; letra !='x';){
	printf("Valor : \n");
	scanf("%c", &letra);
	fflush(stdin);
	cont++;
	}
	printf("%d",cont);
}

