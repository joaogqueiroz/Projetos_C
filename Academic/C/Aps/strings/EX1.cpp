#include<stdio.h>
#include<string.h>
int contar(char *str)
{
    int total=0;
    while( str[total] != '\0')
        total++;
    return total;
  }
main(){
	char nome[100];
	int soma;
	
printf("digite um nome:");
	scanf("%s", &nome);
soma=contar(nome);
printf("total de letras sao %i", soma);
}



