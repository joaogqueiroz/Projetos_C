#include<stdio.h>
#include<string.h>
main()
{
 char nome[30];
 printf("\nINFORME UM NOME: ");
 gets(nome);
 if(nome[0]=='A'||nome[0]=='a')
  printf("\n%s",nome);
 printf("\n\n");

}


