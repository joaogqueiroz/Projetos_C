#include<strings.h>
#include<stdio.h>
main(){
	char texto[100];
	printf("digite um texto:");
	gets(texto);
	printf("o tamanho da cadeia e' %d", strlen(texto));
}
